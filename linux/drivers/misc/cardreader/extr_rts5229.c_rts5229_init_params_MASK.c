
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int extra_caps; int num_slots; scalar_t__ ic_version; int ms_pull_ctl_disable_tbl; int ms_pull_ctl_enable_tbl; int sd_pull_ctl_disable_tbl; int sd_pull_ctl_enable_tbl; void* rx_initial_phase; void* tx_initial_phase; int aspm_en; int sd30_drive_sel_3v3; int sd30_drive_sel_1v8; int card_drive_sel; scalar_t__ flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (struct rtsx_pcr*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_2(struct rtsx_pcr *VAR_14)
{
 VAR_14->extra_caps = VAR_4 | VAR_3;
 VAR_14->num_slots = 2;
 VAR_14->ops = &VAR_9;

 VAR_14->flags = 0;
 VAR_14->card_drive_sel = VAR_6;
 VAR_14->sd30_drive_sel_1v8 = VAR_1;
 VAR_14->sd30_drive_sel_3v3 = VAR_2;
 VAR_14->aspm_en = VAR_0;
 VAR_14->tx_initial_phase = FUNC_0(27, 27, 15);
 VAR_14->rx_initial_phase = FUNC_0(30, 6, 6);

 VAR_14->ic_version = FUNC_1(VAR_14);
 if (VAR_14->ic_version == VAR_5) {
  VAR_14->sd_pull_ctl_enable_tbl = VAR_13;
  VAR_14->sd_pull_ctl_disable_tbl = VAR_11;
 } else {
  VAR_14->sd_pull_ctl_enable_tbl = VAR_12;
  VAR_14->sd_pull_ctl_disable_tbl = VAR_10;
 }
 VAR_14->ms_pull_ctl_enable_tbl = VAR_8;
 VAR_14->ms_pull_ctl_disable_tbl = VAR_7;
}
