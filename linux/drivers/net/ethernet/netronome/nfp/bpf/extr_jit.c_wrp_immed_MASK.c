
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
typedef enum immed_shift { ____Placeholder_immed_shift } immed_shift ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfp_prog*,int ,int,int ,int,int) ;
 scalar_t__ FUNC_1 (int,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct nfp_prog *VAR_4, swreg VAR_5, u32 VAR_6)
{
 enum immed_shift VAR_7;
 u16 VAR_8;

 if (FUNC_1(VAR_6, &VAR_8, &VAR_7)) {
  FUNC_0(VAR_4, VAR_5, VAR_8, VAR_2, 0, VAR_7);
 } else if (FUNC_1(~VAR_6, &VAR_8, &VAR_7)) {
  FUNC_0(VAR_4, VAR_5, VAR_8, VAR_2, 1, VAR_7);
 } else {
  FUNC_0(VAR_4, VAR_5, VAR_6 & 0xffff, VAR_2,
      0, VAR_0);
  FUNC_0(VAR_4, VAR_5, VAR_6 >> 16, VAR_3,
      0, VAR_1);
 }
}
