
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct nfp_cpp {int dummy; } ;


 int FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 (struct nfp_cpp*) ;
 int FUNC_2 (scalar_t__,int*,unsigned long long) ;
 int FUNC_3 (struct nfp_cpp*,int const,unsigned long long,int *) ;
 int FUNC_4 (struct nfp_cpp*,int const,unsigned long long,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(struct nfp_cpp *VAR_0, int VAR_1,
     unsigned long long VAR_2)
{
 const u32 VAR_3 = FUNC_0(VAR_1, 3, 0);
 const u32 VAR_4 = FUNC_0(VAR_1, 4, 0);
 u16 VAR_5 = FUNC_1(VAR_0);
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_2(VAR_5, &VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_0, VAR_3, VAR_2, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if (FUNC_5(VAR_7) || FUNC_6(VAR_7) != VAR_5)
  return 0;


 VAR_6 = FUNC_4(VAR_0, VAR_4, VAR_2, FUNC_7(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;

 return 1;
}
