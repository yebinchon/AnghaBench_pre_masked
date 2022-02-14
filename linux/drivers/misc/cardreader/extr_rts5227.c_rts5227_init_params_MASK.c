
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int extra_caps; int num_slots; int reg_pm_ctrl3; int ms_pull_ctl_disable_tbl; int ms_pull_ctl_enable_tbl; int sd_pull_ctl_disable_tbl; int sd_pull_ctl_enable_tbl; int ic_version; void* rx_initial_phase; void* tx_initial_phase; int aspm_en; void* sd30_drive_sel_3v3; void* sd30_drive_sel_1v8; int card_drive_sel; scalar_t__ flags; int * ops; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_2(struct rtsx_pcr *VAR_11)
{
 VAR_11->extra_caps = VAR_3 | VAR_2;
 VAR_11->num_slots = 2;
 VAR_11->ops = &VAR_8;

 VAR_11->flags = 0;
 VAR_11->card_drive_sel = VAR_5;
 VAR_11->sd30_drive_sel_1v8 = VAR_1;
 VAR_11->sd30_drive_sel_3v3 = VAR_1;
 VAR_11->aspm_en = VAR_0;
 VAR_11->tx_initial_phase = FUNC_0(27, 27, 15);
 VAR_11->rx_initial_phase = FUNC_0(30, 7, 7);

 VAR_11->ic_version = FUNC_1(VAR_11);
 VAR_11->sd_pull_ctl_enable_tbl = VAR_10;
 VAR_11->sd_pull_ctl_disable_tbl = VAR_9;
 VAR_11->ms_pull_ctl_enable_tbl = VAR_7;
 VAR_11->ms_pull_ctl_disable_tbl = VAR_6;

 VAR_11->reg_pm_ctrl3 = VAR_4;
}
