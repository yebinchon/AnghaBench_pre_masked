
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_cr_option {int dev_flags; int ltr_en; int ltr_l1off_snooze_sspwrgate; int ltr_l1off_sspwrgate; int l1_snooze_delay; int dev_aspm_mode; int ltr_l1off_latency; int ltr_idle_latency; int ltr_active_latency; } ;
struct rtsx_pcr {int extra_caps; int num_slots; int reg_pm_ctrl3; int ms_pull_ctl_disable_tbl; int ms_pull_ctl_enable_tbl; int sd_pull_ctl_disable_tbl; int sd_pull_ctl_enable_tbl; int ic_version; void* rx_initial_phase; void* tx_initial_phase; int aspm_en; void* sd30_drive_sel_3v3; void* sd30_drive_sel_1v8; int card_drive_sel; scalar_t__ flags; int * ops; struct rtsx_cr_option option; } ;


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
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void FUNC_2(struct rtsx_pcr *VAR_20)
{
 struct rtsx_cr_option *VAR_21 = &(VAR_20->option);

 VAR_20->extra_caps = VAR_4 | VAR_3;
 VAR_20->num_slots = 2;
 VAR_20->ops = &VAR_17;

 VAR_20->flags = 0;
 VAR_20->card_drive_sel = VAR_14;
 VAR_20->sd30_drive_sel_1v8 = VAR_1;
 VAR_20->sd30_drive_sel_3v3 = VAR_1;
 VAR_20->aspm_en = VAR_0;
 VAR_20->tx_initial_phase = FUNC_0(1, 29, 16);
 VAR_20->rx_initial_phase = FUNC_0(24, 6, 5);

 VAR_20->ic_version = FUNC_1(VAR_20);
 VAR_20->sd_pull_ctl_enable_tbl = VAR_19;
 VAR_20->sd_pull_ctl_disable_tbl = VAR_18;
 VAR_20->ms_pull_ctl_enable_tbl = VAR_16;
 VAR_20->ms_pull_ctl_disable_tbl = VAR_15;

 VAR_20->reg_pm_ctrl3 = VAR_13;

 VAR_21->dev_flags = (VAR_11
    | VAR_12);
 VAR_21->ltr_en = 1;


 VAR_21->ltr_active_latency = VAR_6;
 VAR_21->ltr_idle_latency = VAR_7;
 VAR_21->ltr_l1off_latency = VAR_8;
 VAR_21->dev_aspm_mode = VAR_2;
 VAR_21->l1_snooze_delay = VAR_5;
 VAR_21->ltr_l1off_sspwrgate = VAR_10;
 VAR_21->ltr_l1off_snooze_sspwrgate =
  VAR_9;
}
