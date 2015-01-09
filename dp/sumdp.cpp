    /*
        Problem: Dynamic Programming Approach to solve series sum

        Date: 2015/01/09
        Author Name: Md. Zia Ullah
        Institute: Toyohashi University of Technology, Toyohashi, Japan
        
    */

    #include<cstdio>
    #include<sstream>
    #include<cstdlib>
    #include<cctype>
    #include<cmath>
    #include<algorithm>
    #include<set>
    #include<queue>
    #include<stack>
    #include<list>
    #include<iostream>
    #include<fstream>
    #include<numeric>
    #include<string>
    #include<vector>
    #include<cstring>
    #include<map>
    #include<iterator>
    #include<bitset>
    #include<ctime>

    using namespace std;


    #define sf scanf
    #define pf printf
    #define re return
    #define i64 __int64
    #define I64 %I64d
    #define u64 unsigned __int64
    #define U64 "%U64d"
    #define ll long long

    #define forit(i, m) for (i=(m).begin(); i!=(m).end(); ++i)
    #define rab(i,a,b) for(i=a;i<=b;i++)
    #define rep(i,n) rab(i,0,n-1)
    #define fi(n) rep(i,n)
    #define fj(n) rep(j,n)
    #define fk(n) rep(k,n)
    #define max(a,b) a>b? a:b
    #define min(a,b) a<b? a:b
    #define eps (1e-11)
    #define eq(a,b) ((a-b) < eps && (b-a) < eps)
    #define less(a,b) (b-a>eps)
    #define inf (1<<30)
    #define pi 2*acos(0.0)
    #define vi vector<int>
    #define vs vector<string>
    #define Set(t,v) memset((t), (v), sizeof(t))
    #define pb push_back
    #define sz(v) (v).size()
    #define mp make_pair
    #define all(x) x.begin(),x.end()
    #define rev(x) reverse(all(x))
    #define sq(a) (a)*(a)

    int dr[]={-1,0,1,0,1,1,-1,-1}; /* row index of 8x8 connected grid */
    int dc[]={0,1,0,-1,1,-1,-1,1}; /* column index of 8x8 connected grid */

    long int csum[10001]; /*cumulative summation */

    void dp(int n)
    {
        int i;

        csum[0] = 0;
        rab(i, 1, n)
            csum[i] = csum[i-1] + i;
    }

    int main()
    {

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    clock_t st,et;
    st=clock();

    int i;
    int n;
    int m;

    sf("%d",&n);
    dp(n);

    while(1){
        sf("%d", &m);
        if(m == -1) break;
        printf("%ld\n", csum[m]);
    }

    et=clock();
    diff=((float) et-(float) st)/CLOCKS_PER_SEC;
    pf("%.3f",diff);

    re 0;
    }
