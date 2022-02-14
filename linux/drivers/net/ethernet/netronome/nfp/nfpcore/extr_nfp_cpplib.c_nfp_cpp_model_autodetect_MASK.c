
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_cpp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (struct nfp_cpp*,scalar_t__,int*) ;

int FUNC_2(struct nfp_cpp *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, FUNC_0(1, 1, 16) + VAR_0,
       &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_4 = VAR_5 & VAR_2;
 if (*VAR_4 & VAR_1)
  *VAR_4 -= 0x10;

 return 0;
}
