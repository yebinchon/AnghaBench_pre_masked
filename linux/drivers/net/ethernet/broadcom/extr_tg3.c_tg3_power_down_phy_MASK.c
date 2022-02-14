
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int phy_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*,int ,int) ;
 int FUNC_4 (struct tg3*) ;
 scalar_t__ FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*,int ,int*) ;
 int FUNC_7 (struct tg3*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct tg3 *VAR_31, bool VAR_32)
{
 u32 VAR_33;

 if (VAR_31->phy_flags & VAR_29)
  return;

 if (VAR_31->phy_flags & VAR_30) {
  if (FUNC_0(VAR_31) == VAR_0) {
   u32 VAR_34 = FUNC_8(VAR_24);
   u32 VAR_35 = FUNC_8(VAR_11);

   VAR_34 |=
    VAR_26 | VAR_25;
   FUNC_9(VAR_24, VAR_34);
   FUNC_9(VAR_11, VAR_35 | (1 << 15));
  }
  return;
 }

 if (FUNC_0(VAR_31) == VAR_1) {
  FUNC_1(VAR_31);
  VAR_33 = FUNC_8(VAR_9);
  FUNC_10(VAR_9, VAR_33 | VAR_10);
  FUNC_11(40);
  return;
 } else if (VAR_31->phy_flags & VAR_28) {
  u32 VAR_36;
  if (!FUNC_6(VAR_31, VAR_23, &VAR_36)) {
   u32 VAR_37;

   FUNC_7(VAR_31, VAR_12, 0);
   FUNC_7(VAR_31, VAR_13,
         VAR_2 | VAR_3);

   FUNC_7(VAR_31, VAR_23,
         VAR_36 | VAR_20);
   if (!FUNC_6(VAR_31, VAR_21, &VAR_37)) {
    VAR_37 |= VAR_22;
    FUNC_7(VAR_31,
          VAR_21,
          VAR_37);
   }
   FUNC_7(VAR_31, VAR_23, VAR_36);
  }
  return;
 } else if (VAR_32) {
  if (!FUNC_4(VAR_31))
   FUNC_7(VAR_31, VAR_18,
         VAR_19);

  VAR_33 = VAR_14 |
        VAR_15 |
        VAR_16;
  FUNC_3(VAR_31, VAR_17, VAR_33);
 }




 if (FUNC_5(VAR_31))
  return;

 if (FUNC_2(VAR_31) == VAR_6 ||
     FUNC_2(VAR_31) == VAR_5) {
  VAR_33 = FUNC_8(VAR_27);
  VAR_33 &= ~VAR_8;
  VAR_33 |= VAR_7;
  FUNC_10(VAR_27, VAR_33);
 }

 FUNC_7(VAR_31, VAR_13, VAR_4);
}
