
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int tmp ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_cpp*,int ,unsigned long long,int *,int) ;

int FUNC_2(struct nfp_cpp *VAR_1, u32 VAR_2,
    unsigned long long VAR_3, u32 *VAR_4)
{
 u8 VAR_5[4];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, sizeof(VAR_5));
 if (VAR_6 != sizeof(VAR_5))
  return VAR_6 < 0 ? VAR_6 : -VAR_0;

 *VAR_4 = FUNC_0(VAR_5);
 return 0;
}
