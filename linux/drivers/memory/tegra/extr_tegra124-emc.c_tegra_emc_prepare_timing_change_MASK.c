
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emc_timing {int emc_mode_1; int emc_bgbias_ctl0; int emc_xm2dqspadctrl2; int emc_ctt_term_ctrl; int* emc_burst_data; int emc_zcal_interval; int emc_cfg; int emc_auto_cal_config2; int emc_auto_cal_config3; int emc_auto_cal_config; int emc_mrs_wait_cnt; int emc_cfg_2; int emc_mode_2; int emc_mode_reset; int emc_mode_4; int rate; } ;
struct tegra_emc {scalar_t__ dram_type; int dram_num; scalar_t__ regs; int mc; struct emc_timing last_timing; } ;
typedef enum emc_dll_change { ____Placeholder_emc_dll_change } emc_dll_change ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_2 (int) ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__* VAR_50 ;
 int FUNC_3 (struct tegra_emc*,int,scalar_t__) ;
 int FUNC_4 (struct tegra_emc*) ;
 int FUNC_5 (struct tegra_emc*) ;
 int FUNC_6 (scalar_t__) ;
 struct emc_timing* FUNC_7 (struct tegra_emc*,unsigned long) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int,scalar_t__) ;

int FUNC_11(struct tegra_emc *VAR_51,
        unsigned long VAR_52)
{
 struct emc_timing *VAR_53 = FUNC_7(VAR_51, VAR_52);
 struct emc_timing *VAR_54 = &VAR_51->last_timing;
 enum emc_dll_change VAR_55;
 unsigned int VAR_56 = 0;
 u32 VAR_57, VAR_58, VAR_59;
 bool VAR_60 = 0;
 unsigned int VAR_61;

 if (!VAR_53)
  return -VAR_49;

 if ((VAR_54->emc_mode_1 & 0x1) == (VAR_53->emc_mode_1 & 0x1))
  VAR_55 = VAR_0;
 else if (VAR_53->emc_mode_1 & 0x1)
  VAR_55 = VAR_2;
 else
  VAR_55 = VAR_1;


 FUNC_10(VAR_22, VAR_51->regs + VAR_21);


 VAR_57 = FUNC_6(VAR_51->regs + VAR_13);
 if (VAR_57 & VAR_17) {
  VAR_57 &= ~VAR_16;
  FUNC_10(VAR_57, VAR_51->regs + VAR_13);

  VAR_56 = 5;
 }


 if (VAR_51->dram_type == VAR_3)
  VAR_59 = VAR_39;
 else
  VAR_59 = VAR_40;

 VAR_57 = FUNC_6(VAR_51->regs + VAR_38);
 if (VAR_57 & VAR_59) {
  VAR_57 &= ~VAR_59;
  FUNC_10(VAR_57, VAR_51->regs + VAR_38);
 }


 VAR_57 = FUNC_6(VAR_51->regs + VAR_8);
 VAR_58 = VAR_54->emc_bgbias_ctl0;
 if (!(VAR_53->emc_bgbias_ctl0 &
       VAR_10) &&
     (VAR_57 & VAR_10)) {
  VAR_58 &= ~VAR_10;
  VAR_60 = 1;
 }

 if ((VAR_57 & VAR_9) ||
     (VAR_57 & VAR_11)) {
  VAR_60 = 1;
 }

 if (VAR_60) {
  FUNC_10(VAR_58, VAR_51->regs + VAR_8);
  if (VAR_56 < 5)
   VAR_56 = 5;
 }

 VAR_60 = 0;
 VAR_57 = FUNC_6(VAR_51->regs + VAR_42);
 if (VAR_53->emc_xm2dqspadctrl2 & VAR_44 &&
     !(VAR_57 & VAR_44)) {
  VAR_57 |= VAR_44;
  VAR_60 = 1;
 }

 if (VAR_53->emc_xm2dqspadctrl2 & VAR_43 &&
     !(VAR_57 & VAR_43)) {
  VAR_57 |= VAR_43;
  VAR_60 = 1;
 }

 if (VAR_60) {
  FUNC_10(VAR_57, VAR_51->regs + VAR_42);
  if (VAR_56 < 30)
   VAR_56 = 30;
 }


 if (VAR_56) {
  FUNC_5(VAR_51);
  FUNC_9(VAR_56);
 }


 if (VAR_54->emc_ctt_term_ctrl != VAR_53->emc_ctt_term_ctrl) {
  FUNC_4(VAR_51);
  FUNC_10(VAR_53->emc_ctt_term_ctrl,
         VAR_51->regs + VAR_18);
  FUNC_5(VAR_51);
 }


 for (VAR_61 = 0; VAR_61 < FUNC_0(VAR_53->emc_burst_data); ++VAR_61)
  FUNC_10(VAR_53->emc_burst_data[VAR_61],
         VAR_51->regs + VAR_50[VAR_61]);

 FUNC_10(VAR_53->emc_xm2dqspadctrl2, VAR_51->regs + VAR_42);
 FUNC_10(VAR_53->emc_zcal_interval, VAR_51->regs + VAR_45);

 FUNC_8(VAR_51->mc, VAR_53->rate);

 VAR_57 = VAR_53->emc_cfg & ~VAR_16;
 FUNC_3(VAR_51, VAR_57, VAR_13);


 if (VAR_53->emc_auto_cal_config2 != VAR_54->emc_auto_cal_config2)
  FUNC_3(VAR_51, VAR_53->emc_auto_cal_config2,
      VAR_5);

 if (VAR_53->emc_auto_cal_config3 != VAR_54->emc_auto_cal_config3)
  FUNC_3(VAR_51, VAR_53->emc_auto_cal_config3,
      VAR_6);

 if (VAR_53->emc_auto_cal_config != VAR_54->emc_auto_cal_config) {
  VAR_57 = VAR_53->emc_auto_cal_config;
  VAR_57 &= VAR_7;
  FUNC_3(VAR_51, VAR_57, VAR_4);
 }


 if (VAR_51->dram_type == VAR_3 &&
     VAR_55 == VAR_2) {
  u32 VAR_62 = 512;

  if (VAR_53->emc_zcal_interval != 0 &&
      VAR_54->emc_zcal_interval == 0)
   VAR_62 -= VAR_51->dram_num * 256;

  VAR_57 = (VAR_53->emc_mrs_wait_cnt
   & VAR_29)
   >> VAR_30;
  if (VAR_62 < VAR_57)
   VAR_62 = VAR_57;

  VAR_57 = VAR_53->emc_mrs_wait_cnt
   & ~VAR_27;
  VAR_57 |= (VAR_62 << VAR_28)
   & VAR_27;

  FUNC_10(VAR_57, VAR_51->regs + VAR_26);
 }

 VAR_57 = VAR_53->emc_cfg_2;
 VAR_57 &= ~VAR_15;
 FUNC_3(VAR_51, VAR_57, VAR_14);


 if (VAR_51->dram_type == VAR_3 && VAR_55 == VAR_1)
  FUNC_3(VAR_51, VAR_53->emc_mode_1, VAR_19);


 FUNC_3(VAR_51, FUNC_2(VAR_51->dram_num),
     VAR_34);
 if (VAR_51->dram_type == VAR_3)
  FUNC_3(VAR_51, FUNC_1(VAR_51->dram_num) |
           VAR_37,
      VAR_36);


 FUNC_3(VAR_51, 1, VAR_41);


 if (VAR_51->dram_type == VAR_3)
  FUNC_3(VAR_51, FUNC_1(VAR_51->dram_num),
      VAR_36);
 FUNC_3(VAR_51, FUNC_2(VAR_51->dram_num) |
          VAR_35,
     VAR_34);


 if (VAR_51->dram_type == VAR_3) {
  if (VAR_53->emc_mode_1 != VAR_54->emc_mode_1)
   FUNC_3(VAR_51, VAR_53->emc_mode_1, VAR_19);
  if (VAR_53->emc_mode_2 != VAR_54->emc_mode_2)
   FUNC_3(VAR_51, VAR_53->emc_mode_2, VAR_20);

  if ((VAR_53->emc_mode_reset != VAR_54->emc_mode_reset) ||
      VAR_55 == VAR_2) {
   VAR_57 = VAR_53->emc_mode_reset;
   if (VAR_55 == VAR_2) {
    VAR_57 |= VAR_23;
    VAR_57 |= VAR_24;
   } else {
    VAR_57 &= ~VAR_23;
   }
   FUNC_3(VAR_51, VAR_57, VAR_25);
  }
 } else {
  if (VAR_53->emc_mode_2 != VAR_54->emc_mode_2)
   FUNC_3(VAR_51, VAR_53->emc_mode_2, VAR_32);
  if (VAR_53->emc_mode_1 != VAR_54->emc_mode_1)
   FUNC_3(VAR_51, VAR_53->emc_mode_1, VAR_31);
  if (VAR_53->emc_mode_4 != VAR_54->emc_mode_4)
   FUNC_3(VAR_51, VAR_53->emc_mode_4, VAR_33);
 }


 if (VAR_53->emc_zcal_interval != 0 && VAR_54->emc_zcal_interval == 0) {
  FUNC_3(VAR_51, VAR_47, VAR_46);
  if (VAR_51->dram_num > 1)
   FUNC_3(VAR_51, VAR_48,
       VAR_46);
 }


 FUNC_3(VAR_51, 0, VAR_12);

 if (VAR_53->emc_cfg_2 & VAR_15)
  FUNC_3(VAR_51, VAR_53->emc_cfg_2, VAR_14);


 FUNC_4(VAR_51);


 FUNC_6(VAR_51->regs + VAR_21);

 return 0;
}
