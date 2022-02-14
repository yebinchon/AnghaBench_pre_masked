
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nfp_cpp {int dummy; } ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct nfp_cpp*) ;
 int FUNC_2 (int ,int*,unsigned long long) ;
 int FUNC_3 (struct nfp_cpp*,int const,unsigned long long,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct nfp_cpp *VAR_0,
         int VAR_1, unsigned long long VAR_2, u32 VAR_3)
{
 const u32 VAR_4 = FUNC_0(VAR_1, 4, 0);
 u16 VAR_5 = FUNC_1(VAR_0);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, &VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_2 + 4, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_2, FUNC_4(VAR_5));
 if (VAR_6)
  return VAR_6;

 return 0;
}
