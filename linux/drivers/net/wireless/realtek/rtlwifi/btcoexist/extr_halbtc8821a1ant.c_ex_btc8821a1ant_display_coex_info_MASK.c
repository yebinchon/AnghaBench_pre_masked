
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
struct btc_stack_info {int hci_version; scalar_t__ profile_notified; } ;
struct TYPE_4__ {int ra_mask; int agg_buf_size; scalar_t__ bt_ctrl_buf_size; scalar_t__ reject_agg_pkt; int rpwm_val; int lps_val; } ;
struct btc_bt_link_info {int a2dp_exist; int pan_exist; int hid_exist; int sco_exist; } ;
struct btc_board_info {int btdm_ant_pos; int btdm_ant_num; int pg_ant_num; } ;
struct btc_coexist {scalar_t__ (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_disp_dbg_msg ) (struct btc_coexist*,int ,struct seq_file*) ;scalar_t__ auto_report_1ant; int (* btc_read_2byte ) (struct btc_coexist*,int) ;TYPE_1__ bt_info; scalar_t__ manual_control; int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;scalar_t__ stop_coex_dm; struct btc_bt_link_info bt_link_info; struct btc_stack_info stack_info; struct btc_board_info board_info; } ;
struct TYPE_6__ {scalar_t__ bt_status; int cur_ps_tdma; int backup_ampdu_max_time; int backup_retry_limit; int backup_arfr_cnt2; int backup_arfr_cnt1; int cur_ignore_wlan_act; int error_condition; int auto_tdma_adjust; int ps_tdma_para; int cur_low_penalty_ra; int wifi_chnl_info; } ;
struct TYPE_5__ {int bt_info_ext; int* bt_info_c2h_cnt; scalar_t__* bt_info_c2h; scalar_t__ high_priority_rx; int high_priority_tx; scalar_t__ low_priority_rx; int low_priority_tx; scalar_t__ under_lps; scalar_t__ under_ips; int bt_retry_cnt; int bt_rssi; scalar_t__ c2h_bt_inquiry_page; scalar_t__ bt_disabled; } ;


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
 int FUNC_16 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_17 (struct btc_coexist*,int) ;
 int FUNC_18 (struct btc_coexist*,int) ;
 int FUNC_19 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_20 (struct btc_coexist*,int) ;
 int FUNC_21 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_22 (struct btc_coexist*,int) ;
 int FUNC_23 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_24 (struct btc_coexist*,int) ;
 int FUNC_25 (struct btc_coexist*,int ,int*) ;
 int FUNC_26 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_27 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_28 (struct btc_coexist*,int) ;
 int FUNC_29 (struct btc_coexist*,int) ;
 int FUNC_30 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_31 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_32 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_33 (struct btc_coexist*,int) ;
 int FUNC_34 (struct btc_coexist*,int) ;
 int FUNC_35 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_36 (struct btc_coexist*,int ,int*) ;
 int FUNC_37 (struct btc_coexist*,int ,int*) ;
 int FUNC_38 (struct btc_coexist*,int ,long*) ;
 int FUNC_39 (struct btc_coexist*,int ,long*) ;
 int FUNC_40 (struct btc_coexist*,int ,int*) ;
 int FUNC_41 (struct btc_coexist*,int ,int*) ;

void FUNC_42(struct btc_coexist *VAR_29,
           struct seq_file *VAR_30)
{
 struct btc_board_info *VAR_31 = &VAR_29->board_info;
 struct btc_stack_info *VAR_32 = &VAR_29->stack_info;
 struct btc_bt_link_info *VAR_33 = &VAR_29->bt_link_info;
 u8 VAR_34[4], VAR_35, VAR_36, VAR_37 = 0;
 u16 VAR_38[4];
 u32 VAR_39[4];
 bool VAR_40 = 0, VAR_41 = 0, VAR_42 = 0, VAR_43 = 0;
 bool VAR_44 = 0, VAR_45 = 0;
 long VAR_46 = 0, VAR_47 = 0;
 u32 VAR_48, VAR_49;
 u8 VAR_50, VAR_51;
 u32 VAR_52 = 0, VAR_53 = 0;

 FUNC_2(VAR_30, "\n ============[BT Coexist info]============");

 if (VAR_29->manual_control) {
  FUNC_2(VAR_30, "\n ============[Under Manual Control]============");
  FUNC_2(VAR_30, "\n ==========================================");
 }
 if (VAR_29->stop_coex_dm) {
  FUNC_2(VAR_30, "\n ============[Coex is STOPPED]============");
  FUNC_2(VAR_30, "\n ==========================================");
 }

 FUNC_1(VAR_30, "\n %-35s = %d/ %d/ %d",
     "Ant PG Num/ Ant Mech/ Ant Pos:",
     VAR_31->pg_ant_num,
     VAR_31->btdm_ant_num,
     VAR_31->btdm_ant_pos);

 FUNC_1(VAR_30, "\n %-35s = %s / %d", "BT stack/ hci ext ver",
     ((VAR_32->profile_notified) ? "Yes" : "No"),
     VAR_32->hci_version);

 VAR_29->btc_get(VAR_29, VAR_14,
      &VAR_53);
 VAR_29->btc_get(VAR_29, VAR_16, &VAR_52);
 FUNC_1(VAR_30, "\n %-35s = %d_%x/ 0x%x/ 0x%x(%d)",
     "CoexVer/ FwVer/ PatchVer",
     VAR_28,
     VAR_27,
     VAR_52, VAR_53,
     VAR_53);

 VAR_29->btc_get(VAR_29, VAR_4,
      &VAR_44);
 VAR_29->btc_get(VAR_29, VAR_12,
      &VAR_50);
 VAR_29->btc_get(VAR_29, VAR_13,
      &VAR_51);
 FUNC_1(VAR_30, "\n %-35s = %d / %d(%d)",
     "Dot11 channel / HsChnl(HsMode)",
     VAR_50, VAR_51, VAR_44);

 FUNC_1(VAR_30, "\n %-35s = %3ph ",
     "H2C Wifi inform bt chnl Info",
     VAR_24->wifi_chnl_info);

 VAR_29->btc_get(VAR_29, VAR_11, &VAR_46);
 VAR_29->btc_get(VAR_29, VAR_10, &VAR_47);
 FUNC_1(VAR_30, "\n %-35s = %d/ %d", "Wifi rssi/ HS rssi",
     (int)VAR_46, (int)VAR_47);

 VAR_29->btc_get(VAR_29, VAR_8, &VAR_41);
 VAR_29->btc_get(VAR_29, VAR_6, &VAR_42);
 VAR_29->btc_get(VAR_29, VAR_7, &VAR_40);
 FUNC_1(VAR_30, "\n %-35s = %d/ %d/ %d ", "Wifi link/ roam/ scan",
     VAR_42, VAR_40, VAR_41);

 VAR_29->btc_get(VAR_29, VAR_9,
      &VAR_43);
 VAR_29->btc_get(VAR_29, VAR_15,
      &VAR_48);
 VAR_29->btc_get(VAR_29, VAR_5,
      &VAR_45);
 VAR_29->btc_get(VAR_29, VAR_17,
      &VAR_49);
 FUNC_1(VAR_30, "\n %-35s = %s / %s/ %s ", "Wifi status",
     (VAR_43 ? "5G" : "2.4G"),
     ((VAR_48 == VAR_19) ? "Legacy" :
     (((VAR_48 == VAR_18) ? "HT40" : "HT20"))),
     ((!VAR_45) ? "idle" :
     ((VAR_49 == VAR_20) ?
     "uplink" : "downlink")));
 FUNC_1(VAR_30, "\n %-35s = [%s/ %d/ %d] ",
     "BT [status/ rssi/ retryCnt]",
     ((VAR_25->bt_disabled) ? ("disabled") :
     ((VAR_25->c2h_bt_inquiry_page) ? ("inquiry/page scan") :
     ((VAR_22 ==
       VAR_24->bt_status) ?
     "non-connected idle" :
     ((VAR_21 ==
       VAR_24->bt_status) ?
     "connected-idle" : "busy")))),
     VAR_25->bt_rssi, VAR_25->bt_retry_cnt);

 FUNC_1(VAR_30, "\n %-35s = %d / %d / %d / %d", "SCO/HID/PAN/A2DP",
     VAR_33->sco_exist,
     VAR_33->hid_exist,
     VAR_33->pan_exist,
     VAR_33->a2dp_exist);
 VAR_29->btc_disp_dbg_msg(VAR_29, VAR_1, VAR_30);

 VAR_36 = VAR_25->bt_info_ext;
 FUNC_1(VAR_30, "\n %-35s = %s",
     "BT Info A2DP rate",
     (VAR_36 & VAR_0) ?
     "Basic rate" : "EDR rate");

 for (VAR_35 = 0; VAR_35 < VAR_23; VAR_35++) {
  if (VAR_25->bt_info_c2h_cnt[VAR_35]) {
   FUNC_1(VAR_30, "\n %-35s = %7ph(%d)",
       VAR_26[VAR_35],
       VAR_25->bt_info_c2h[VAR_35],
       VAR_25->bt_info_c2h_cnt[VAR_35]);
  }
 }
 FUNC_1(VAR_30, "\n %-35s = %s/%s, (0x%x/0x%x)",
     "PS state, IPS/LPS, (lps/rpwm)",
     ((VAR_25->under_ips ? "IPS ON" : "IPS OFF")),
     ((VAR_25->under_lps ? "LPS ON" : "LPS OFF")),
     VAR_29->bt_info.lps_val,
     VAR_29->bt_info.rpwm_val);
 VAR_29->btc_disp_dbg_msg(VAR_29, VAR_3, VAR_30);

 if (!VAR_29->manual_control) {

  FUNC_1(VAR_30, "\n %-35s",
      "============[Sw mechanism]============");

  FUNC_1(VAR_30, "\n %-35s = %d", "SM[LowPenaltyRA]",
      VAR_24->cur_low_penalty_ra);

  FUNC_1(VAR_30, "\n %-35s = %s/ %s/ %d ",
      "DelBA/ BtCtrlAgg/ AggSize",
      (VAR_29->bt_info.reject_agg_pkt ? "Yes" : "No"),
      (VAR_29->bt_info.bt_ctrl_buf_size ? "Yes" : "No"),
      VAR_29->bt_info.agg_buf_size);
  FUNC_1(VAR_30, "\n %-35s = 0x%x ", "Rate Mask",
      VAR_29->bt_info.ra_mask);


  FUNC_1(VAR_30, "\n %-35s",
      "============[Fw mechanism]============");

  VAR_37 = VAR_24->cur_ps_tdma;
  FUNC_1(VAR_30, "\n %-35s = %5ph case-%d (auto:%d)",
      "PS TDMA",
      VAR_24->ps_tdma_para,
      VAR_37,
      VAR_24->auto_tdma_adjust);

  FUNC_1(VAR_30, "\n %-35s = 0x%x ",
      "Latest error condition(should be 0)",
      VAR_24->error_condition);

  FUNC_1(VAR_30, "\n %-35s = %d ", "IgnWlanAct",
      VAR_24->cur_ignore_wlan_act);
 }


 FUNC_1(VAR_30, "\n %-35s", "============[Hw setting]============");

 FUNC_1(VAR_30, "\n %-35s = 0x%x/0x%x/0x%x/0x%x",
     "backup ARFR1/ARFR2/RL/AMaxTime",
     VAR_24->backup_arfr_cnt1,
     VAR_24->backup_arfr_cnt2,
     VAR_24->backup_retry_limit,
     VAR_24->backup_ampdu_max_time);

 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0x430);
 VAR_39[1] = VAR_29->btc_read_4byte(VAR_29, 0x434);
 VAR_38[0] = VAR_29->btc_read_2byte(VAR_29, 0x42a);
 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0x456);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/0x%x/0x%x/0x%x",
     "0x430/0x434/0x42a/0x456",
     VAR_39[0], VAR_39[1], VAR_38[0], VAR_34[0]);

 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0x778);
 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0xc58);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x", "0x778/ 0xc58[29:25]",
     VAR_34[0], (VAR_39[0] & 0x3e000000) >> 25);

 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0x8db);
 FUNC_1(VAR_30, "\n %-35s = 0x%x", "0x8db[6:5]",
     ((VAR_34[0] & 0x60) >> 5));

 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0x975);
 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0xcb4);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0xcb4[29:28]/0xcb4[7:0]/0x974[9:8]",
     (VAR_39[0] & 0x30000000) >> 28,
      VAR_39[0] & 0xff,
      VAR_34[0] & 0x3);

 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0x40);
 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0x4c);
 VAR_34[1] = VAR_29->btc_read_1byte(VAR_29, 0x64);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x40/0x4c[24:23]/0x64[0]",
     VAR_34[0], ((VAR_39[0] & 0x01800000) >> 23),
     VAR_34[1] & 0x1);

 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0x550);
 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0x522);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x", "0x550(bcn ctrl)/0x522",
     VAR_39[0], VAR_34[0]);

 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0xc50);
 FUNC_1(VAR_30, "\n %-35s = 0x%x", "0xc50(dig)",
     VAR_39[0] & 0xff);

 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0xf48);
 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0xa5d);
 VAR_34[1] = VAR_29->btc_read_1byte(VAR_29, 0xa5c);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x", "OFDM-FA/ CCK-FA",
     VAR_39[0], (VAR_34[0] << 8) + VAR_34[1]);

 VAR_39[0] = VAR_29->btc_read_4byte(VAR_29, 0x6c0);
 VAR_39[1] = VAR_29->btc_read_4byte(VAR_29, 0x6c4);
 VAR_39[2] = VAR_29->btc_read_4byte(VAR_29, 0x6c8);
 VAR_34[0] = VAR_29->btc_read_1byte(VAR_29, 0x6cc);
 FUNC_1(VAR_30, "\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x",
     "0x6c0/0x6c4/0x6c8/0x6cc(coexTable)",
     VAR_39[0], VAR_39[1], VAR_39[2], VAR_34[0]);

 FUNC_1(VAR_30, "\n %-35s = %d/ %d", "0x770(high-pri rx/tx)",
     VAR_25->high_priority_rx, VAR_25->high_priority_tx);
 FUNC_1(VAR_30, "\n %-35s = %d/ %d", "0x774(low-pri rx/tx)",
     VAR_25->low_priority_rx, VAR_25->low_priority_tx);
 if (VAR_29->auto_report_1ant)
  FUNC_0(VAR_29);
 VAR_29->btc_disp_dbg_msg(VAR_29, VAR_2, VAR_30);
}
