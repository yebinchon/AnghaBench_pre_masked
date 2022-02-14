
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct timespec64 {int dummy; } ;
struct TYPE_12__ {int ext_channel; } ;
struct TYPE_9__ {int rimt_last; int rimt_first; int hw_hang_checks; scalar_t__ tx_intr_mitigation; scalar_t__ rx_intr_mitigation; } ;
struct TYPE_8__ {int hw_caps; } ;
struct ath_hw {int chip_fullsleep; int paprd_table_write_done; int htc_reset_init; TYPE_6__ radar_conf; TYPE_5__* hw; TYPE_3__ config; int rfkill_gpio; TYPE_2__ caps; int opmode; TYPE_1__* eep_ops; int noise; struct ath9k_hw_cal_data* caldata; scalar_t__ curchan; } ;
struct ath_common {scalar_t__ bt_ant_diversity; } ;
struct ath9k_hw_cal_data {scalar_t__ channel; scalar_t__ channelFlags; int cal_flags; } ;
struct ath9k_channel {scalar_t__ channel; scalar_t__ channelFlags; int noisefloor; } ;
struct TYPE_10__ {scalar_t__ radar_enabled; } ;
struct TYPE_11__ {TYPE_4__ conf; } ;
struct TYPE_7__ {int (* set_board_values ) (struct ath_hw*,struct ath9k_channel*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;
 int VAR_35 ;
 int FUNC_9 (struct ath9k_channel*) ;
 int FUNC_10 (struct ath9k_channel*) ;
 int VAR_36 ;
 int FUNC_11 (struct ath_hw*) ;
 scalar_t__ FUNC_12 (struct ath_hw*,int ) ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*,int ,int ,int) ;
 int FUNC_15 (struct ath_hw*,int ,int ) ;
 int FUNC_16 (struct ath_hw*,int ,scalar_t__) ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_17 (struct ath_hw*) ;
 int FUNC_18 (struct ath_hw*) ;
 int FUNC_19 (struct ath_hw*) ;
 int FUNC_20 (struct ath_hw*) ;
 scalar_t__ FUNC_21 (struct ath_hw*,struct ath9k_channel*,struct ath9k_hw_cal_data*) ;
 int FUNC_22 (struct ath_hw*,int,int ,int) ;
 int FUNC_23 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_24 (struct ath_hw*,int) ;
 int FUNC_25 (struct ath_hw*) ;
 int FUNC_26 (struct ath_hw*) ;
 int FUNC_27 (struct ath_hw*) ;
 scalar_t__ FUNC_28 (struct ath_hw*) ;
 int FUNC_29 (struct ath_hw*,struct ath9k_channel*) ;
 struct ath_common* FUNC_30 (struct ath_hw*) ;
 int FUNC_31 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_32 (struct ath_hw*) ;
 scalar_t__ FUNC_33 (struct timespec64*,int *) ;
 int FUNC_34 (struct ath_hw*,struct ath9k_channel*,int ) ;
 int FUNC_35 (struct ath_hw*,scalar_t__) ;
 scalar_t__ FUNC_36 (struct ath_hw*) ;
 int FUNC_37 (struct ath_hw*,int ,char*) ;
 int FUNC_38 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_39 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_40 (struct ath_hw*) ;
 int FUNC_41 (struct ath_hw*) ;
 int FUNC_42 (struct ath_hw*,int ) ;
 int FUNC_43 (struct ath_hw*) ;
 int FUNC_44 (struct ath_hw*) ;
 int FUNC_45 (struct ath_hw*) ;
 int FUNC_46 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_47 (struct ath_hw*) ;
 scalar_t__ FUNC_48 (struct ath_hw*) ;
 int FUNC_49 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_50 (struct ath_hw*,scalar_t__,scalar_t__) ;
 int FUNC_51 (struct ath_hw*) ;
 int FUNC_52 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_53 (struct ath_hw*) ;
 int FUNC_54 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_55 (struct ath_hw*) ;
 int FUNC_56 (struct ath_hw*) ;
 int FUNC_57 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_58 (struct ath_hw*,int ) ;
 int FUNC_59 (struct ath_hw*,scalar_t__) ;
 int FUNC_60 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_61 (struct ath_hw*,int) ;
 int FUNC_62 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_63 (struct ath_common*,char*) ;
 int FUNC_64 (int ,int *) ;
 int FUNC_65 (struct timespec64*) ;
 int FUNC_66 (struct ath9k_hw_cal_data*,int ,int) ;
 int FUNC_67 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_68 (int) ;

int FUNC_69(struct ath_hw *VAR_39, struct ath9k_channel *VAR_40,
     struct ath9k_hw_cal_data *VAR_41, bool VAR_42)
{
 struct ath_common *VAR_43 = FUNC_30(VAR_39);
 u32 VAR_44;
 u32 VAR_45;
 u32 VAR_46;
 struct timespec64 VAR_47;
 u32 VAR_48;
 u64 VAR_49 = 0;
 int VAR_50;
 bool VAR_51 = 0;
 bool VAR_52 = VAR_39->chip_fullsleep;

 if (FUNC_48(VAR_39)) {
  VAR_51 = FUNC_23(VAR_39, VAR_40);
  if (VAR_51)
   return 0;
 }

 if (!FUNC_58(VAR_39, VAR_32))
  return -VAR_34;

 if (VAR_39->curchan && !VAR_39->chip_fullsleep)
  FUNC_35(VAR_39, VAR_39->curchan);

 VAR_39->caldata = VAR_41;
 if (VAR_41 && (VAR_40->channel != VAR_41->channel ||
   VAR_40->channelFlags != VAR_41->channelFlags)) {

  FUNC_66(VAR_41, 0, sizeof(*VAR_41));
  FUNC_62(VAR_39, VAR_40);
 } else if (VAR_41) {
  FUNC_64(VAR_36, &VAR_41->cal_flags);
 }
 VAR_39->noise = FUNC_34(VAR_39, VAR_40, VAR_40->noisefloor);

 if (VAR_42) {
  VAR_50 = FUNC_31(VAR_39, VAR_40);
  if (!VAR_50)
   return VAR_50;
 }

 if (FUNC_48(VAR_39))
  FUNC_24(VAR_39, VAR_52);

 VAR_45 = FUNC_12(VAR_39, VAR_14);
 if (VAR_45 == 0)
  VAR_45 = 1;

 VAR_46 = FUNC_12(VAR_39, VAR_25) & VAR_26;


 FUNC_65(&VAR_47);
 VAR_49 = FUNC_36(VAR_39);

 VAR_44 = FUNC_12(VAR_39, VAR_8) &
  (VAR_9 | VAR_12 |
   VAR_11 | VAR_10);

 FUNC_47(VAR_39);

 VAR_39->paprd_table_write_done = 0;


 if (FUNC_1(VAR_39) && VAR_39->htc_reset_init) {
  FUNC_16(VAR_39,
     VAR_2,
     VAR_1);
  FUNC_68(50);
 }

 if (!FUNC_29(VAR_39, VAR_40)) {
  FUNC_63(VAR_43, "Chip reset failed\n");
  return -VAR_33;
 }


 if (FUNC_1(VAR_39) && VAR_39->htc_reset_init) {
  VAR_39->htc_reset_init = 0;
  FUNC_16(VAR_39,
     VAR_2,
     VAR_0);
  FUNC_68(50);
 }


 VAR_48 = FUNC_33(&VAR_47, ((void*)0));
 FUNC_59(VAR_39, VAR_49 + VAR_48);

 if (FUNC_2(VAR_39))
  FUNC_15(VAR_39, VAR_15, VAR_16);

 if (!FUNC_5(VAR_39))
  FUNC_17(VAR_39);

 VAR_50 = FUNC_49(VAR_39, VAR_40);
 if (VAR_50)
  return VAR_50;

 FUNC_57(VAR_39, VAR_40);

 if (FUNC_48(VAR_39))
  FUNC_22(VAR_39, 0, FUNC_9(VAR_40), VAR_52);






 if (FUNC_0(VAR_39) && (FUNC_36(VAR_39) < VAR_49)) {
  VAR_48 = FUNC_33(&VAR_47, ((void*)0));
  FUNC_59(VAR_39, VAR_49 + VAR_48);
 }

 FUNC_43(VAR_39);

 FUNC_54(VAR_39, VAR_40);
 FUNC_60(VAR_39, VAR_40);
 VAR_39->eep_ops->set_board_values(VAR_39, VAR_40);

 FUNC_50(VAR_39, VAR_46, VAR_45);

 VAR_50 = FUNC_52(VAR_39, VAR_40);
 if (VAR_50)
  return VAR_50;

 FUNC_53(VAR_39);

 FUNC_45(VAR_39);
 FUNC_42(VAR_39, VAR_39->opmode);
 FUNC_25(VAR_39);
 FUNC_44(VAR_39);

 if (VAR_39->caps.hw_caps & VAR_31)
  FUNC_37(VAR_39, VAR_39->rfkill_gpio, "ath9k-rfkill");

 FUNC_41(VAR_39);

 if (FUNC_3(VAR_39) && FUNC_4(VAR_39)) {
  FUNC_15(VAR_39, VAR_17,
       VAR_18);
  FUNC_14(VAR_39, VAR_5, VAR_4,
         VAR_3);
  FUNC_15(VAR_39, VAR_20,
       VAR_21);
 }

 FUNC_15(VAR_39, VAR_25, VAR_27);

 FUNC_55(VAR_39);

 if (!FUNC_48(VAR_39))
  FUNC_16(VAR_39, VAR_19, 8);

 FUNC_8(VAR_39);
 if (VAR_39->config.rx_intr_mitigation) {
  FUNC_14(VAR_39, VAR_22, VAR_24, VAR_39->config.rimt_last);
  FUNC_14(VAR_39, VAR_22, VAR_23, VAR_39->config.rimt_first);
 }

 if (VAR_39->config.tx_intr_mitigation) {
  FUNC_14(VAR_39, VAR_28, VAR_30, 300);
  FUNC_14(VAR_39, VAR_28, VAR_29, 750);
 }
 FUNC_13(VAR_39);

 FUNC_38(VAR_39, VAR_40);

 if (VAR_41) {
  FUNC_64(VAR_38, &VAR_41->cal_flags);
  FUNC_64(VAR_37, &VAR_41->cal_flags);
 }
 if (!FUNC_39(VAR_39, VAR_40))
  return -VAR_34;

 if (FUNC_48(VAR_39) && FUNC_21(VAR_39, VAR_40, VAR_41))
  return -VAR_34;

 FUNC_7(VAR_39);

 FUNC_51(VAR_39);
 FUNC_16(VAR_39, VAR_8, VAR_44 | VAR_13);

 FUNC_11(VAR_39);

 FUNC_32(VAR_39);

 FUNC_40(VAR_39);

 if (FUNC_28(VAR_39))
  FUNC_27(VAR_39);

 if (FUNC_48(VAR_39))
  FUNC_20(VAR_39);

 if (FUNC_5(VAR_39)) {
  FUNC_46(VAR_39, VAR_40);
  FUNC_61(VAR_39, 1);
 }

 if (FUNC_5(VAR_39))
  FUNC_18(VAR_39);

 if (VAR_39->config.hw_hang_checks & VAR_35)
  FUNC_19(VAR_39);

 FUNC_26(VAR_39);

 if (FUNC_6(VAR_39) && VAR_43->bt_ant_diversity)
  FUNC_15(VAR_39, VAR_6, VAR_7);

 if (VAR_39->hw->conf.radar_enabled) {

  VAR_39->radar_conf.ext_channel = FUNC_10(VAR_40);
  FUNC_56(VAR_39);
 }

 return 0;
}
