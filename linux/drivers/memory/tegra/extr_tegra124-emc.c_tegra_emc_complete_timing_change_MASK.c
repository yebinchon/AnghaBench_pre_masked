
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emc_timing {scalar_t__ emc_ctt_term_ctrl; int emc_auto_cal_interval; int emc_cfg; int emc_zcal_cnt_long; int emc_bgbias_ctl0; int emc_sel_dpd_ctrl; } ;
struct tegra_emc {scalar_t__ dram_type; struct emc_timing last_timing; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct tegra_emc*) ;
 int FUNC_1 (struct tegra_emc*) ;
 int FUNC_2 (scalar_t__) ;
 struct emc_timing* FUNC_3 (struct tegra_emc*,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

void FUNC_6(struct tegra_emc *VAR_11,
          unsigned long VAR_12)
{
 struct emc_timing *VAR_13 = FUNC_3(VAR_11, VAR_12);
 struct emc_timing *VAR_14 = &VAR_11->last_timing;
 u32 VAR_15;

 if (!VAR_13)
  return;


 FUNC_1(VAR_11);


 if (VAR_13->emc_ctt_term_ctrl != VAR_14->emc_ctt_term_ctrl)
  FUNC_5(VAR_13->emc_auto_cal_interval,
         VAR_11->regs + VAR_2);


 if (VAR_13->emc_cfg & VAR_8)
  FUNC_5(VAR_13->emc_cfg, VAR_11->regs + VAR_7);


 FUNC_5(VAR_13->emc_zcal_cnt_long, VAR_11->regs + VAR_10);


 if (VAR_11->dram_type == VAR_1 &&
     VAR_13->emc_bgbias_ctl0 &
       VAR_5) {
  VAR_15 = VAR_13->emc_bgbias_ctl0;
  VAR_15 |= VAR_6;
  VAR_15 |= VAR_4;
  FUNC_5(VAR_15, VAR_11->regs + VAR_3);
 } else {
  if (VAR_11->dram_type == VAR_0 &&
      FUNC_2(VAR_11->regs + VAR_3) !=
        VAR_13->emc_bgbias_ctl0) {
   FUNC_5(VAR_13->emc_bgbias_ctl0,
          VAR_11->regs + VAR_3);
  }

  FUNC_5(VAR_13->emc_auto_cal_interval,
         VAR_11->regs + VAR_2);
 }


 FUNC_4(2);


 FUNC_5(VAR_13->emc_sel_dpd_ctrl, VAR_11->regs + VAR_9);
 FUNC_0(VAR_11);

 VAR_11->last_timing = *VAR_13;
}
