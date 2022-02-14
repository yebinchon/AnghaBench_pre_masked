
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct seq_file {int dummy; } ;
struct btc_stack_info {int hci_version; int a2dp_exist; int pan_exist; int hid_exist; int sco_exist; scalar_t__ profile_notified; } ;
struct TYPE_4__ {int ra_mask; scalar_t__ bt_disabled; } ;
struct btc_board_info {scalar_t__ pg_ant_num; int btdm_ant_num; } ;
struct btc_coexist {scalar_t__ (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_disp_dbg_msg ) (struct btc_coexist*,int ,struct seq_file*) ;scalar_t__ auto_report_2ant; int (* btc_read_2byte ) (struct btc_coexist*,int) ;TYPE_1__ bt_info; int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;scalar_t__ manual_control; struct btc_stack_info stack_info; struct btc_board_info board_info; } ;
struct TYPE_6__ {scalar_t__ bt_status; int cur_ps_tdma; scalar_t__ cur_dec_bt_pwr; int cur_ignore_wlan_act; int backup_ampdu_maxtime; int backup_retry_limit; int backup_arfr_cnt2; int backup_arfr_cnt1; int bt_rf0x1e_backup; int auto_tdma_adjust; int ps_tdma_para; int cur_dac_swing_lvl; int cur_dac_swing_on; int cur_adc_back_off; int cur_agc_table_en; int limited_dig; int cur_low_penalty_ra; int cur_rf_rx_lpf_shrink; int cur_ss_type; int wifi_chnl_info; } ;
struct TYPE_5__ {int bt_info_ext; int* bt_info_c2h_cnt; scalar_t__* bt_info_c2h; scalar_t__ high_priority_rx; int high_priority_tx; scalar_t__ low_priority_rx; int low_priority_tx; scalar_t__ under_lps; scalar_t__ under_ips; int bt_retry_cnt; int bt_rssi; scalar_t__ c2h_bt_inquiry_page; } ;


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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct btc_coexist*) ;
 TYPE_3__* VAR_24 ;
 TYPE_2__* VAR_25 ;
 char** VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct seq_file*,char*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_7 (struct btc_coexist*,int ,int*) ;
 int FUNC_8 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_9 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_10 (struct btc_coexist*,int ,struct seq_file*) ;
 scalar_t__ FUNC_11 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_12 (struct btc_coexist*,int) ;
 int FUNC_13 (struct btc_coexist*,int) ;
 int FUNC_14 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_15 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_16 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_17 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_18 (struct btc_coexist*,int) ;
 int FUNC_19 (struct btc_coexist*,int) ;
 int FUNC_20 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_21 (struct btc_coexist*,int) ;
 int FUNC_22 (struct btc_coexist*,int) ;
 int FUNC_23 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_24 (struct btc_coexist*,int) ;
 int FUNC_25 (struct btc_coexist*,int ,int*) ;
 int FUNC_26 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_27 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_28 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_29 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_30 (struct btc_coexist*,int) ;
 int FUNC_31 (struct btc_coexist*,int) ;
 int FUNC_32 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_33 (struct btc_coexist*,int ,int*) ;
 int FUNC_34 (struct btc_coexist*,int ,int*) ;
 int FUNC_35 (struct btc_coexist*,int ,int*) ;
 int FUNC_36 (struct btc_coexist*,int ,int*) ;
 int FUNC_37 (struct btc_coexist*,int ,int*) ;
 int FUNC_38 (struct btc_coexist*,int ,int*) ;

void FUNC_39(struct btc_coexist *VAR_29,
           struct seq_file *VAR_30)
{
 struct btc_board_info *VAR_31 = &VAR_29->board_info;
 struct btc_stack_info *VAR_32 = &VAR_29->stack_info;
 u8 VAR_33[4], VAR_34, VAR_35, VAR_36 = 0;
 u16 VAR_37[4];
 u32 VAR_38[4];
 bool VAR_39 = 0, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;
 bool VAR_43 = 0, VAR_44 = 0;
 int VAR_45 = 0, VAR_46 = 0;
 u32 VAR_47, VAR_48;
 u8 VAR_49, VAR_50;
 u32 VAR_51 = 0, VAR_52 = 0;

 FUNC_2(VAR_30, "\n ============[BT Coexist info]============");

 if (VAR_29->manual_control) {
  FUNC_2(VAR_30, "\n ===========[Under Manual Control]===========");
  FUNC_2(VAR_30, "\n ==========================================");
 }

 FUNC_1(VAR_30, "\n %-35s = %d/ %d ", "Ant PG number/ Ant mechanism:",
     VAR_31->pg_ant_num, VAR_31->btdm_ant_num);

 FUNC_1(VAR_30, "\n %-35s = %s / %d", "BT stack/ hci ext ver",
     ((VAR_32->profile_notified) ? "Yes" : "No"),
     VAR_32->hci_version);

 VAR_29->btc_get(VAR_29, VAR_14, &VAR_52);
 VAR_29->btc_get(VAR_29, VAR_16, &VAR_51);
 FUNC_1(VAR_30, "\n %-35s = %d_%d/ 0x%x/ 0x%x(%d)",
     "CoexVer/ FwVer/ PatchVer",
     VAR_28, VAR_27,
     VAR_51, VAR_52, VAR_52);

 VAR_29->btc_get(VAR_29, VAR_4, &VAR_43);
 VAR_29->btc_get(VAR_29, VAR_12,
      &VAR_49);
 VAR_29->btc_get(VAR_29, VAR_13, &VAR_50);
 FUNC_1(VAR_30, "\n %-35s = %d / %d(%d)",
     "Dot11 channel / HsMode(HsChnl)",
     VAR_49, VAR_43, VAR_50);

 FUNC_1(VAR_30, "\n %-35s = %3ph ",
     "H2C Wifi inform bt chnl Info", VAR_24->wifi_chnl_info);

 VAR_29->btc_get(VAR_29, VAR_11, &VAR_45);
 VAR_29->btc_get(VAR_29, VAR_10, &VAR_46);
 FUNC_1(VAR_30, "\n %-35s = %d/ %d",
     "Wifi rssi/ HS rssi", VAR_45, VAR_46);

 VAR_29->btc_get(VAR_29, VAR_8, &VAR_40);
 VAR_29->btc_get(VAR_29, VAR_6, &VAR_41);
 VAR_29->btc_get(VAR_29, VAR_7, &VAR_39);
 FUNC_1(VAR_30, "\n %-35s = %d/ %d/ %d ",
     "Wifi link/ roam/ scan", VAR_41, VAR_39, VAR_40);

 VAR_29->btc_get(VAR_29, VAR_9, &VAR_42);
 VAR_29->btc_get(VAR_29, VAR_15, &VAR_47);
 VAR_29->btc_get(VAR_29, VAR_5, &VAR_44);
 VAR_29->btc_get(VAR_29, VAR_17,
      &VAR_48);
 FUNC_1(VAR_30, "\n %-35s = %s / %s/ %s ",
     "Wifi status", (VAR_42 ? "5G" : "2.4G"),
     ((VAR_19 == VAR_47) ? "Legacy" :
   (((VAR_18 == VAR_47) ? "HT40" : "HT20"))),
     ((!VAR_44) ? "idle" :
   ((VAR_20 == VAR_48) ?
    "uplink" : "downlink")));

 FUNC_1(VAR_30, "\n %-35s = [%s/ %d/ %d] ",
     "BT [status/ rssi/ retryCnt]",
     ((VAR_29->bt_info.bt_disabled) ? ("disabled") :
      ((VAR_25->c2h_bt_inquiry_page) ?
       ("inquiry/page scan") :
        ((VAR_22 ==
   VAR_24->bt_status) ? "non-connected idle" :
    ((VAR_21 ==
      VAR_24->bt_status) ? "connected-idle" : "busy")))),
     VAR_25->bt_rssi, VAR_25->bt_retry_cnt);

 FUNC_1(VAR_30, "\n %-35s = %d / %d / %d / %d",
     "SCO/HID/PAN/A2DP", VAR_32->sco_exist,
     VAR_32->hid_exist, VAR_32->pan_exist,
     VAR_32->a2dp_exist);
 VAR_29->btc_disp_dbg_msg(VAR_29, VAR_1, VAR_30);

 VAR_35 = VAR_25->bt_info_ext;
 FUNC_1(VAR_30, "\n %-35s = %s",
     "BT Info A2DP rate",
     (VAR_35&VAR_0) ? "Basic rate" : "EDR rate");

 for (VAR_34 = 0; VAR_34 < VAR_23; VAR_34++) {
  if (VAR_25->bt_info_c2h_cnt[VAR_34]) {
   FUNC_1(VAR_30, "\n %-35s = %7ph(%d)",
       VAR_26[VAR_34],
       VAR_25->bt_info_c2h[VAR_34],
       VAR_25->bt_info_c2h_cnt[VAR_34]);
  }
 }

 FUNC_1(VAR_30, "\n %-35s = %s/%s",
     "PS state, IPS/LPS",
     ((VAR_25->under_ips ? "IPS ON" : "IPS OFF")),
     ((VAR_25->under_lps ? "LPS ON" : "LPS OFF")));
 VAR_29->btc_disp_dbg_msg(VAR_29, VAR_3, VAR_30);

 FUNC_1(VAR_30, "\n %-35s = 0x%x ", "SS Type",
     VAR_24->cur_ss_type);


 FUNC_1(VAR_30, "\n %-35s",
     "============[Sw mechanism]============");
 FUNC_1(VAR_30, "\n %-35s = %d/ %d/ %d ",
     "SM1[ShRf/ LpRA/ LimDig]", VAR_24->cur_rf_rx_lpf_shrink,
     VAR_24->cur_low_penalty_ra, VAR_24->limited_dig);
 FUNC_1(VAR_30, "\n %-35s = %d/ %d/ %d(0x%x) ",
     "SM2[AgcT/ AdcB/ SwDacSwing(lvl)]",
     VAR_24->cur_agc_table_en, VAR_24->cur_adc_back_off,
     VAR_24->cur_dac_swing_on, VAR_24->cur_dac_swing_lvl);

 FUNC_1(VAR_30, "\n %-35s = 0x%x ", "Rate Mask",
     VAR_29->bt_info.ra_mask);


 FUNC_1(VAR_30, "\n %-35s",
     "============[Fw mechanism]============");

 VAR_36 = VAR_24->cur_ps_tdma;
 FUNC_1(VAR_30,
     "\n %-35s = %5ph case-%d (auto:%d)",
     "PS TDMA", VAR_24->ps_tdma_para,
     VAR_36, VAR_24->auto_tdma_adjust);

 FUNC_1(VAR_30, "\n %-35s = %d/ %d ",
     "DecBtPwr/ IgnWlanAct",
     VAR_24->cur_dec_bt_pwr, VAR_24->cur_ignore_wlan_act);


 FUNC_1(VAR_30, "\n %-35s",
     "============[Hw setting]============");

 FUNC_1(VAR_30, "\n %-35s = 0x%x",
     "RF-A, 0x1e initVal", VAR_24->bt_rf0x1e_backup);

 FUNC_1(VAR_30, "\n %-35s = 0x%x/0x%x/0x%x/0x%x",
     "backup ARFR1/ARFR2/RL/AMaxTime", VAR_24->backup_arfr_cnt1,
     VAR_24->backup_arfr_cnt2, VAR_24->backup_retry_limit,
     VAR_24->backup_ampdu_maxtime);

 VAR_38[0] = VAR_29->btc_read_4byte(VAR_29, 0x430);
 VAR_38[1] = VAR_29->btc_read_4byte(VAR_29, 0x434);
 VAR_37[0] = VAR_29->btc_read_2byte(VAR_29, 0x42a);
 VAR_33[0] = VAR_29->btc_read_1byte(VAR_29, 0x456);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/0x%x/0x%x/0x%x",
     "0x430/0x434/0x42a/0x456",
     VAR_38[0], VAR_38[1], VAR_37[0], VAR_33[0]);

 VAR_38[0] = VAR_29->btc_read_4byte(VAR_29, 0xc04);
 VAR_38[1] = VAR_29->btc_read_4byte(VAR_29, 0xd04);
 VAR_38[2] = VAR_29->btc_read_4byte(VAR_29, 0x90c);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0xc04/ 0xd04/ 0x90c", VAR_38[0], VAR_38[1], VAR_38[2]);

 VAR_33[0] = VAR_29->btc_read_1byte(VAR_29, 0x778);
 FUNC_1(VAR_30, "\n %-35s = 0x%x", "0x778", VAR_33[0]);

 VAR_33[0] = VAR_29->btc_read_1byte(VAR_29, 0x92c);
 VAR_38[0] = VAR_29->btc_read_4byte(VAR_29, 0x930);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x",
     "0x92c/ 0x930", (VAR_33[0]), VAR_38[0]);

 VAR_33[0] = VAR_29->btc_read_1byte(VAR_29, 0x40);
 VAR_33[1] = VAR_29->btc_read_1byte(VAR_29, 0x4f);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x",
     "0x40/ 0x4f", VAR_33[0], VAR_33[1]);

 VAR_38[0] = VAR_29->btc_read_4byte(VAR_29, 0x550);
 VAR_33[0] = VAR_29->btc_read_1byte(VAR_29, 0x522);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x",
     "0x550(bcn ctrl)/0x522", VAR_38[0], VAR_33[0]);

 VAR_38[0] = VAR_29->btc_read_4byte(VAR_29, 0xc50);
 FUNC_1(VAR_30, "\n %-35s = 0x%x", "0xc50(dig)",
     VAR_38[0]);

 VAR_38[0] = VAR_29->btc_read_4byte(VAR_29, 0x6c0);
 VAR_38[1] = VAR_29->btc_read_4byte(VAR_29, 0x6c4);
 VAR_38[2] = VAR_29->btc_read_4byte(VAR_29, 0x6c8);
 VAR_33[0] = VAR_29->btc_read_1byte(VAR_29, 0x6cc);
 FUNC_1(VAR_30,
     "\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x",
     "0x6c0/0x6c4/0x6c8/0x6cc(coexTable)",
     VAR_38[0], VAR_38[1], VAR_38[2], VAR_33[0]);

 FUNC_1(VAR_30, "\n %-35s = %d/ %d",
     "0x770(hp rx[31:16]/tx[15:0])",
     VAR_25->high_priority_rx, VAR_25->high_priority_tx);
 FUNC_1(VAR_30, "\n %-35s = %d/ %d",
     "0x774(lp rx[31:16]/tx[15:0])",
     VAR_25->low_priority_rx, VAR_25->low_priority_tx);
 if (VAR_29->auto_report_2ant)
  FUNC_0(VAR_29);
 VAR_29->btc_disp_dbg_msg(VAR_29, VAR_2, VAR_30);
}
