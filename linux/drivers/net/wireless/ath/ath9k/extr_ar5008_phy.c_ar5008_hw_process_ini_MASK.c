
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ analog_shiftreg; } ;
struct TYPE_8__ {int ia_rows; } ;
struct ath_hw {int iniModesFastClock; int iniBB_RfGain; TYPE_2__ config; TYPE_4__ iniCommon; int iniModesTxGain; int iniModesRxGain; scalar_t__ need_an_top2_fixup; TYPE_4__ iniModes; int iniAddac; TYPE_1__* eep_ops; } ;
struct ath_common {TYPE_3__* bus_ops; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_7__ {scalar_t__ ath_bus_type; } ;
struct TYPE_5__ {int (* set_addac ) (struct ath_hw*,struct ath9k_channel*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_8 (struct ath9k_channel*) ;
 scalar_t__ FUNC_9 (struct ath_hw*,struct ath9k_channel*) ;
 scalar_t__ FUNC_10 (struct ath9k_channel*) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,int ,int ,int) ;
 int FUNC_13 (struct ath_hw*,int ,int ) ;
 int FUNC_14 (struct ath_hw*,int,int) ;
 int FUNC_15 (int *,int,int) ;
 int FUNC_16 (struct ath_hw*) ;
 int FUNC_17 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_18 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_19 (struct ath_hw*,struct ath9k_channel*,int) ;
 struct ath_common* FUNC_20 (struct ath_hw*) ;
 int FUNC_21 (struct ath_hw*,struct ath9k_channel*,int) ;
 int FUNC_22 (struct ath_hw*) ;
 int FUNC_23 (struct ath_common*,char*) ;
 int FUNC_24 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct ath_hw *VAR_11,
     struct ath9k_channel *VAR_12)
{
 struct ath_common *VAR_13 = FUNC_20(VAR_11);
 int VAR_14, VAR_15 = 0;
 u32 VAR_16, VAR_17;

 if (FUNC_8(VAR_12)) {
  VAR_17 = 1;
  VAR_16 = FUNC_10(VAR_12) ? 2 : 1;
 } else {
  VAR_17 = 2;
  VAR_16 = FUNC_10(VAR_12) ? 3 : 4;
 }





 FUNC_14(VAR_11, FUNC_0(0), 0x00000007);


 FUNC_14(VAR_11, VAR_2, VAR_4);
 if (VAR_11->eep_ops->set_addac)
  VAR_11->eep_ops->set_addac(VAR_11, VAR_12);

 FUNC_15(&VAR_11->iniAddac, 1, VAR_15);
 FUNC_14(VAR_11, VAR_2, VAR_5);

 FUNC_6(VAR_11);

 for (VAR_14 = 0; VAR_14 < VAR_11->iniModes.ia_rows; VAR_14++) {
  u32 VAR_18 = FUNC_7(&VAR_11->iniModes, VAR_14, 0);
  u32 VAR_19 = FUNC_7(&VAR_11->iniModes, VAR_14, VAR_16);

  if (VAR_18 == VAR_0 && VAR_11->need_an_top2_fixup)
   VAR_19 &= ~VAR_1;

  FUNC_14(VAR_11, VAR_18, VAR_19);

  if (VAR_18 >= 0x7800 && VAR_18 < 0x78a0
      && VAR_11->config.analog_shiftreg
      && (VAR_13->bus_ops->ath_bus_type != VAR_9)) {
   FUNC_25(100);
  }

  FUNC_5(VAR_15);
 }

 FUNC_11(VAR_11);

 if (FUNC_2(VAR_11) || FUNC_4(VAR_11))
  FUNC_15(&VAR_11->iniModesRxGain, VAR_16, VAR_15);

 if (FUNC_2(VAR_11) || FUNC_3(VAR_11) ||
     FUNC_4(VAR_11))
  FUNC_15(&VAR_11->iniModesTxGain, VAR_16, VAR_15);

 if (FUNC_1(VAR_11)) {
  FUNC_13(VAR_11, VAR_6, VAR_7);
  FUNC_12(VAR_11, VAR_3, VAR_8, 0xa);
 }

 FUNC_6(VAR_11);


 for (VAR_14 = 0; VAR_14 < VAR_11->iniCommon.ia_rows; VAR_14++) {
  u32 VAR_20 = FUNC_7(&VAR_11->iniCommon, VAR_14, 0);
  u32 VAR_21 = FUNC_7(&VAR_11->iniCommon, VAR_14, 1);

  FUNC_14(VAR_11, VAR_20, VAR_21);

  if (VAR_20 >= 0x7800 && VAR_20 < 0x78a0
      && VAR_11->config.analog_shiftreg
      && (VAR_13->bus_ops->ath_bus_type != VAR_9)) {
   FUNC_25(100);
  }

  FUNC_5(VAR_15);
 }

 FUNC_11(VAR_11);

 FUNC_15(&VAR_11->iniBB_RfGain, VAR_17, VAR_15);

 if (FUNC_9(VAR_11, VAR_12))
  FUNC_15(&VAR_11->iniModesFastClock, VAR_16,
    VAR_15);

 FUNC_17(VAR_11, VAR_12);
 FUNC_18(VAR_11, VAR_12);
 FUNC_16(VAR_11);
 FUNC_22(VAR_11);
 FUNC_19(VAR_11, VAR_12, 0);


 if (!FUNC_21(VAR_11, VAR_12, VAR_17)) {
  FUNC_23(FUNC_20(VAR_11), "ar5416SetRfRegs failed\n");
  return -VAR_10;
 }

 return 0;
}
