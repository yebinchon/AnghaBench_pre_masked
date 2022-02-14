
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u64 ;
typedef int swreg ;
struct reciprocal_value_adv {unsigned int exp; unsigned int m; int sh; scalar_t__ is_wide_m; } ;
struct nfp_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ,int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*) ;
 int FUNC_5 (struct nfp_prog*) ;
 struct reciprocal_value_adv FUNC_6 (unsigned int,int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct nfp_prog*,unsigned int,int ) ;
 int FUNC_12 (struct nfp_prog*,int ,int ) ;
 int FUNC_13 (struct nfp_prog*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct nfp_prog *VAR_6, u8 VAR_7, u64 VAR_8)
{
 swreg VAR_9 = FUNC_8(VAR_7), VAR_10 = FUNC_7(VAR_7), VAR_11 = FUNC_7(VAR_7);
 struct reciprocal_value_adv VAR_12;
 u8 VAR_13, VAR_14;
 swreg VAR_15;

 if (VAR_8 > VAR_5) {
  FUNC_12(VAR_6, VAR_9, 0);
  return 0;
 }
 if (VAR_8 > 1U << 31) {
  swreg VAR_16 = FUNC_11(VAR_6, VAR_8, FUNC_4(VAR_6));

  FUNC_0(VAR_6, FUNC_10(), VAR_10, VAR_2, VAR_16);
  FUNC_12(VAR_6, FUNC_3(VAR_6), 0);
  FUNC_0(VAR_6, VAR_9, FUNC_3(VAR_6), VAR_1,
    FUNC_9(0));
  return 0;
 }

 VAR_12 = FUNC_6(VAR_8, 32);
 VAR_14 = VAR_12.exp;
 if (VAR_12.is_wide_m && !(VAR_8 & 1)) {
  VAR_13 = FUNC_2(VAR_8 & -VAR_8) - 1;
  VAR_12 = FUNC_6(VAR_8 >> VAR_13, 32 - VAR_13);
 } else {
  VAR_13 = 0;
 }
 VAR_15 = FUNC_11(VAR_6, VAR_12.m, FUNC_4(VAR_6));
 if (VAR_8 == 1U << VAR_14) {
  FUNC_1(VAR_6, VAR_9, FUNC_10(), VAR_3, VAR_11,
    VAR_4, VAR_14);
 } else if (VAR_12.is_wide_m) {
  FUNC_13(VAR_6, FUNC_5(VAR_6), FUNC_10(), VAR_10,
       VAR_15, 1);
  FUNC_0(VAR_6, VAR_9, VAR_10, VAR_2,
    FUNC_4(VAR_6));
  FUNC_1(VAR_6, VAR_9, FUNC_10(), VAR_3, VAR_11,
    VAR_4, 1);
  FUNC_0(VAR_6, VAR_9, VAR_10, VAR_0,
    FUNC_4(VAR_6));
  FUNC_1(VAR_6, VAR_9, FUNC_10(), VAR_3, VAR_11,
    VAR_4, VAR_12.sh - 1);
 } else {
  if (VAR_13)
   FUNC_1(VAR_6, VAR_9, FUNC_10(), VAR_3,
     VAR_11, VAR_4, VAR_13);
  FUNC_13(VAR_6, VAR_9, FUNC_10(), VAR_10, VAR_15, 1);
  FUNC_1(VAR_6, VAR_9, FUNC_10(), VAR_3,
    VAR_11, VAR_4, VAR_12.sh);
 }

 return 0;
}
