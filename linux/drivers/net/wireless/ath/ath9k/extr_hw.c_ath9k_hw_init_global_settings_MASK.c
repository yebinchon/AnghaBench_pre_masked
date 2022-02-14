
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int ackto; scalar_t__ enabled; } ;
struct ath_hw {scalar_t__ misc_mode; int slottime; int coverage_class; scalar_t__ globaltxtimeout; TYPE_1__ dynack; struct ath9k_channel* curchan; } ;
struct ath_common {int clockrate; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct ath9k_channel const*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel const*) ;
 scalar_t__ FUNC_4 (struct ath_hw*,struct ath9k_channel const*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel const*) ;
 scalar_t__ FUNC_6 (struct ath9k_channel const*) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (struct ath_hw*,int ) ;
 int FUNC_9 (struct ath_hw*,int ,int,int) ;
 int FUNC_10 (struct ath_hw*,int ,scalar_t__) ;
 int FUNC_11 (struct ath_hw*,int ,int ) ;
 int VAR_11 ;
 int FUNC_12 (int,int) ;
 struct ath_common* FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*,int) ;
 int FUNC_15 (struct ath_hw*,int) ;
 int FUNC_16 (struct ath_hw*,int) ;
 int FUNC_17 (struct ath_hw*,scalar_t__) ;
 int FUNC_18 (struct ath_hw*,int) ;
 int FUNC_19 (struct ath_hw*,int) ;
 int FUNC_20 (struct ath_common*,int ,char*,scalar_t__) ;

void FUNC_21(struct ath_hw *VAR_12)
{
 struct ath_common *VAR_13 = FUNC_13(VAR_12);
 const struct ath9k_channel *VAR_14 = VAR_12->curchan;
 int VAR_15, VAR_16, VAR_17 = 0;
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 u32 VAR_24;

 FUNC_20(FUNC_13(VAR_12), VAR_11, "ah->misc_mode 0x%x\n",
  VAR_12->misc_mode);

 if (!VAR_14)
  return;

 if (VAR_12->misc_mode != 0)
  FUNC_10(VAR_12, VAR_2, VAR_12->misc_mode);

 if (FUNC_4(VAR_12, VAR_14))
  VAR_20 = 41;
 else
  VAR_20 = 37;
 VAR_21 = 54;

 if (FUNC_3(VAR_14))
  VAR_19 = 16;
 else
  VAR_19 = 10;

 if (FUNC_5(VAR_14)) {
  VAR_22 = 175;
  VAR_20 *= 2;
  VAR_21 *= 2;
  if (FUNC_4(VAR_12, VAR_14))
      VAR_21 += 11;

  VAR_19 = 32;
  VAR_17 = 16;
  VAR_23 = 3;
  VAR_18 = 13;
 } else if (FUNC_6(VAR_14)) {
  VAR_22 = 340;
  VAR_20 = (VAR_20 * 4) - 1;
  VAR_21 *= 4;
  if (FUNC_4(VAR_12, VAR_14))
      VAR_21 += 22;

  VAR_19 = 64;
  VAR_17 = 32;
  VAR_23 = 1;
  VAR_18 = 21;
 } else {
  if (FUNC_0(VAR_12) && FUNC_1(VAR_12)) {
   VAR_22 = VAR_1;
   VAR_24 = VAR_7;
  } else {
   VAR_22 = FUNC_8(VAR_12, VAR_0)/
    VAR_13->clockrate;
   VAR_24 = FUNC_8(VAR_12, VAR_6);
  }
  VAR_20 = FUNC_7(VAR_24, VAR_8);
  VAR_21 = FUNC_7(VAR_24, VAR_9);

  VAR_18 = VAR_12->slottime;
 }


 VAR_18 += 3 * VAR_12->coverage_class;
 VAR_15 = VAR_18 + VAR_19 + VAR_17;
 VAR_16 = VAR_15;
 if (FUNC_2(VAR_14) &&
     !FUNC_5(VAR_14) && !FUNC_6(VAR_14)) {
  VAR_15 += 64 - VAR_19 - VAR_12->slottime;
  VAR_16 += 48 - VAR_19 - VAR_12->slottime;
 }

 if (VAR_12->dynack.enabled) {
  VAR_15 = VAR_12->dynack.ackto;
  VAR_16 = VAR_15;
  VAR_18 = (VAR_15 - 3) / 2;
 } else {
  VAR_12->dynack.ackto = VAR_15;
 }

 FUNC_18(VAR_12, VAR_19);
 FUNC_19(VAR_12, VAR_18);
 FUNC_15(VAR_12, VAR_15);
 FUNC_16(VAR_12, VAR_16);
 if (VAR_12->globaltxtimeout != (u32) -1)
  FUNC_17(VAR_12, VAR_12->globaltxtimeout);

 FUNC_11(VAR_12, VAR_0, FUNC_14(VAR_12, VAR_22));
 FUNC_9(VAR_12, VAR_6,
  (VAR_13->clockrate - 1) |
  FUNC_12(VAR_20, VAR_8) |
  FUNC_12(VAR_21, VAR_9),
  VAR_9 | VAR_8 | VAR_10);

 if (FUNC_5(VAR_14) || FUNC_6(VAR_14))
  FUNC_9(VAR_12, VAR_3,
   VAR_19 | FUNC_12(VAR_23, VAR_4),
   (VAR_5 | VAR_4));
}
