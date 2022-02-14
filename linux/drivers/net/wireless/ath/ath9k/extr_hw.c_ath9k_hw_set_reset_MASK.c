
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int WARegVal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int ) ;
 int FUNC_10 (struct ath_hw*,int ,int ,int) ;
 int FUNC_11 (struct ath_hw*,int ,int ) ;
 int FUNC_12 (struct ath_hw*,int ,int) ;
 int VAR_25 ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*,int) ;
 int FUNC_15 (struct ath_hw*) ;
 scalar_t__ FUNC_16 (struct ath_hw*) ;
 int FUNC_17 (struct ath_hw*,int ,int ,int ,int) ;
 int FUNC_18 (int ,int ,char*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;

__attribute__((used)) static bool FUNC_21(struct ath_hw *VAR_26, int VAR_27)
{
 u32 VAR_28;
 u32 VAR_29;

 if (FUNC_0(VAR_26)) {
  FUNC_10(VAR_26, VAR_12,
         VAR_13, 1);
  (void)FUNC_9(VAR_26, VAR_12);
 }

 FUNC_6(VAR_26);

 if (FUNC_2(VAR_26)) {
  FUNC_12(VAR_26, VAR_23, VAR_26->WARegVal);
  FUNC_20(10);
 }

 FUNC_12(VAR_26, VAR_14, VAR_15 |
    VAR_16);

 if (FUNC_0(VAR_26)) {
  VAR_28 = VAR_21 | VAR_20 |
   VAR_18 | VAR_22;
 } else {
  VAR_29 = FUNC_9(VAR_26, VAR_5);
  if (FUNC_4(VAR_26))
   VAR_29 &= VAR_1;
  else
   VAR_29 &= VAR_7 |
      VAR_8;

  if (VAR_29) {
   u32 VAR_30;
   FUNC_12(VAR_26, VAR_6, 0);

   VAR_30 = VAR_11;
   if (!FUNC_2(VAR_26))
    VAR_30 |= VAR_10;
   FUNC_12(VAR_26, VAR_9, VAR_30);

  } else if (!FUNC_2(VAR_26))
   FUNC_12(VAR_26, VAR_9, VAR_10);

  VAR_28 = VAR_21;
  if (VAR_27 == VAR_24)
   VAR_28 |= VAR_20;
 }

 if (FUNC_3(VAR_26)) {
  if (!FUNC_14(VAR_26, VAR_27))
   return 0;
 }

 if (FUNC_16(VAR_26))
  FUNC_13(VAR_26);




 if (FUNC_1(VAR_26) || FUNC_5(VAR_26)) {
  FUNC_11(VAR_26, VAR_2, VAR_4);
  FUNC_17(VAR_26, VAR_2, VAR_3, VAR_3,
         20 * VAR_0);
  FUNC_8(VAR_26, VAR_2, VAR_4);
 }

 FUNC_12(VAR_26, VAR_17, VAR_28);

 FUNC_7(VAR_26);

 if (FUNC_2(VAR_26))
  FUNC_20(50);
 else if (FUNC_0(VAR_26))
  FUNC_19(10);
 else
  FUNC_20(100);

 FUNC_12(VAR_26, VAR_17, 0);
 if (!FUNC_17(VAR_26, VAR_17, VAR_19, 0, VAR_0)) {
  FUNC_18(FUNC_15(VAR_26), VAR_25, "RTC stuck in MAC reset\n");
  return 0;
 }

 if (!FUNC_0(VAR_26))
  FUNC_12(VAR_26, VAR_9, 0);

 if (FUNC_0(VAR_26))
  FUNC_20(50);

 return 1;
}
