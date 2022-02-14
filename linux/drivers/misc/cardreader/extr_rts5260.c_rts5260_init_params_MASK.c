
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_hw_param {int ocp_glitch; int interrupt_en; } ;
struct rtsx_cr_option {int dev_flags; int ltr_en; int ocp_en; int sd_800mA_ocp_thd; int sd_400mA_ocp_thd; int ltr_l1off_snooze_sspwrgate; int ltr_l1off_sspwrgate; int l1_snooze_delay; int dev_aspm_mode; int ltr_l1off_latency; int ltr_idle_latency; int ltr_active_latency; } ;
struct rtsx_pcr {int extra_caps; int num_slots; int * ops; int reg_pm_ctrl3; int ms_pull_ctl_disable_tbl; int ms_pull_ctl_enable_tbl; int sd_pull_ctl_disable_tbl; int sd_pull_ctl_enable_tbl; int ic_version; void* rx_initial_phase; void* tx_initial_phase; int aspm_en; void* sd30_drive_sel_3v3; void* sd30_drive_sel_1v8; int card_drive_sel; scalar_t__ flags; struct rtsx_hw_param hw_param; struct rtsx_cr_option option; } ;


 int VAR_0 ;
 void* VAR_1 ;
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
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

void FUNC_2(struct rtsx_pcr *VAR_25)
{
 struct rtsx_cr_option *VAR_26 = &VAR_25->option;
 struct rtsx_hw_param *VAR_27 = &VAR_25->hw_param;

 VAR_25->extra_caps = VAR_4 | VAR_3;
 VAR_25->num_slots = 2;

 VAR_25->flags = 0;
 VAR_25->card_drive_sel = VAR_16;
 VAR_25->sd30_drive_sel_1v8 = VAR_1;
 VAR_25->sd30_drive_sel_3v3 = VAR_1;
 VAR_25->aspm_en = VAR_0;
 VAR_25->tx_initial_phase = FUNC_0(1, 29, 16);
 VAR_25->rx_initial_phase = FUNC_0(24, 6, 5);

 VAR_25->ic_version = FUNC_1(VAR_25);
 VAR_25->sd_pull_ctl_enable_tbl = VAR_24;
 VAR_25->sd_pull_ctl_disable_tbl = VAR_23;
 VAR_25->ms_pull_ctl_enable_tbl = VAR_21;
 VAR_25->ms_pull_ctl_disable_tbl = VAR_20;

 VAR_25->reg_pm_ctrl3 = VAR_13;

 VAR_25->ops = &VAR_22;

 VAR_26->dev_flags = (VAR_11
    | VAR_12);
 VAR_26->ltr_en = 1;


 VAR_26->ltr_active_latency = VAR_6;
 VAR_26->ltr_idle_latency = VAR_7;
 VAR_26->ltr_l1off_latency = VAR_8;
 VAR_26->dev_aspm_mode = VAR_2;
 VAR_26->l1_snooze_delay = VAR_5;
 VAR_26->ltr_l1off_sspwrgate = VAR_10;
 VAR_26->ltr_l1off_snooze_sspwrgate =
  VAR_9;

 VAR_26->ocp_en = 1;
 if (VAR_26->ocp_en)
  VAR_27->interrupt_en |= VAR_19;
 VAR_27->ocp_glitch = VAR_18 | VAR_17;
 VAR_26->sd_400mA_ocp_thd = VAR_14;
 VAR_26->sd_800mA_ocp_thd = VAR_15;
}
