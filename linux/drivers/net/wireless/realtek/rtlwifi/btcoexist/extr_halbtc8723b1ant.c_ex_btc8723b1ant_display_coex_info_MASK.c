
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
typedef scalar_t__ s32 ;
struct TYPE_6__ {scalar_t__ bt_status; int cur_ps_tdma; int backup_ampdu_max_time; int backup_retry_limit; int backup_arfr_cnt2; int backup_arfr_cnt1; int error_condition; int cur_ignore_wlan_act; int auto_tdma_adjust; int ps_tdma_para; int cur_low_penalty_ra; int wifi_chnl_info; } ;
struct TYPE_5__ {int bt_info_ext; int* bt_info_c2h_cnt; scalar_t__* bt_info_c2h; scalar_t__ high_priority_rx; int high_priority_tx; scalar_t__ low_priority_rx; int low_priority_tx; int coex_table_type; scalar_t__ under_lps; scalar_t__ under_ips; int bt_retry_cnt; int bt_rssi; scalar_t__ c2h_bt_inquiry_page; scalar_t__ bt_disabled; } ;


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
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 TYPE_3__* VAR_30 ;
 TYPE_2__* VAR_31 ;
 char** VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (struct btc_coexist*) ;
 int FUNC_1 (struct seq_file*,char*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_7 (struct btc_coexist*,int ,int*) ;
 int FUNC_8 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_9 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_10 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_11 (struct btc_coexist*,int ,struct seq_file*) ;
 scalar_t__ FUNC_12 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_13 (struct btc_coexist*,int) ;
 int FUNC_14 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_15 (struct btc_coexist*,int) ;
 int FUNC_16 (struct btc_coexist*,int) ;
 int FUNC_17 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_18 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_19 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_20 (struct btc_coexist*,int) ;
 int FUNC_21 (struct btc_coexist*,int) ;
 int FUNC_22 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_23 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_24 (struct btc_coexist*,int) ;
 int FUNC_25 (struct btc_coexist*,int ,int*) ;
 scalar_t__ FUNC_26 (struct btc_coexist*,int) ;
 int FUNC_27 (struct btc_coexist*,int) ;
 int FUNC_28 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_29 (struct btc_coexist*,int) ;
 int FUNC_30 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_31 (struct btc_coexist*,int) ;
 int FUNC_32 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_33 (struct btc_coexist*,int) ;
 int FUNC_34 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_35 (struct btc_coexist*,int) ;
 int FUNC_36 (struct btc_coexist*,int ,int*) ;
 scalar_t__ FUNC_37 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_38 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_39 (struct btc_coexist*,int) ;
 int FUNC_40 (struct btc_coexist*,int) ;
 int FUNC_41 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_42 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_43 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_44 (struct btc_coexist*,int) ;
 int FUNC_45 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_46 (struct btc_coexist*,int ,int*) ;
 int FUNC_47 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_48 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_49 (struct btc_coexist*,int ,int*) ;
 int FUNC_50 (struct btc_coexist*,int ,int*) ;

void FUNC_51(struct btc_coexist *VAR_35,
           struct seq_file *VAR_36)
{
 struct btc_board_info *VAR_37 = &VAR_35->board_info;
 struct btc_stack_info *VAR_38 = &VAR_35->stack_info;
 struct btc_bt_link_info *VAR_39 = &VAR_35->bt_link_info;
 u8 VAR_40[4], VAR_41, VAR_42, VAR_43 = 0;
 u16 VAR_44[4];
 u32 VAR_45[4];
 bool VAR_46 = 0, VAR_47 = 0;
 bool VAR_48 = 0, VAR_49 = 0;
 bool VAR_50 = 0, VAR_51 = 0;
 s32 VAR_52 = 0, VAR_53 = 0;
 u32 VAR_54, VAR_55, VAR_56, VAR_57, VAR_58;
 u8 VAR_59, VAR_60;
 u32 VAR_61 = 0, VAR_62 = 0;

 FUNC_2(VAR_36, "\n ============[BT Coexist info]============");

 if (VAR_35->manual_control) {
  FUNC_2(VAR_36, "\n ============[Under Manual Control]==========");
  FUNC_2(VAR_36, "\n ==========================================");
 }
 if (VAR_35->stop_coex_dm) {
  FUNC_2(VAR_36, "\n ============[Coex is STOPPED]============");
  FUNC_2(VAR_36, "\n ==========================================");
 }

 FUNC_1(VAR_36, "\n %-35s = %d/ %d/ %d",
     "Ant PG Num/ Ant Mech/ Ant Pos:",
     VAR_37->pg_ant_num, VAR_37->btdm_ant_num,
     VAR_37->btdm_ant_pos);

 FUNC_1(VAR_36, "\n %-35s = %s / %d",
     "BT stack/ hci ext ver",
     ((VAR_38->profile_notified) ? "Yes" : "No"),
     VAR_38->hci_version);

 VAR_35->btc_get(VAR_35, VAR_14, &VAR_62);
 VAR_35->btc_get(VAR_35, VAR_16, &VAR_61);
 FUNC_1(VAR_36, "\n %-35s = %d_%x/ 0x%x/ 0x%x(%d)",
     "CoexVer/ FwVer/ PatchVer",
     VAR_34, VAR_33,
     VAR_61, VAR_62, VAR_62);

 VAR_35->btc_get(VAR_35, VAR_4, &VAR_50);
 VAR_35->btc_get(VAR_35, VAR_12,
      &VAR_59);
 VAR_35->btc_get(VAR_35, VAR_13, &VAR_60);
 FUNC_1(VAR_36, "\n %-35s = %d / %d(%d)",
     "Dot11 channel / HsChnl(HsMode)",
     VAR_59, VAR_60, VAR_50);

 FUNC_1(VAR_36, "\n %-35s = %3ph ",
     "H2C Wifi inform bt chnl Info",
     VAR_30->wifi_chnl_info);

 VAR_35->btc_get(VAR_35, VAR_11, &VAR_52);
 VAR_35->btc_get(VAR_35, VAR_10, &VAR_53);
 FUNC_1(VAR_36, "\n %-35s = %d/ %d",
     "Wifi rssi/ HS rssi", VAR_52, VAR_53);

 VAR_35->btc_get(VAR_35, VAR_8, &VAR_47);
 VAR_35->btc_get(VAR_35, VAR_6, &VAR_48);
 VAR_35->btc_get(VAR_35, VAR_7, &VAR_46);
 FUNC_1(VAR_36, "\n %-35s = %d/ %d/ %d ",
     "Wifi link/ roam/ scan", VAR_48, VAR_46, VAR_47);

 VAR_35->btc_get(VAR_35 , VAR_9,
      &VAR_49);
 VAR_35->btc_get(VAR_35, VAR_15, &VAR_54);
 VAR_35->btc_get(VAR_35, VAR_5, &VAR_51);
 VAR_35->btc_get(VAR_35, VAR_18,
      &VAR_55);

 FUNC_1(VAR_36, "\n %-35s = %s / %s/ %s ",
     "Wifi status", (VAR_49 ? "5G" : "2.4G"),
     ((VAR_54 == VAR_20) ? "Legacy" :
      ((VAR_54 == VAR_19) ? "HT40" : "HT20")),
      ((!VAR_51) ? "idle" :
       ((VAR_55 == VAR_21) ?
       "uplink" : "downlink")));

 VAR_35->btc_get(VAR_35, VAR_17,
      &VAR_58);
 FUNC_1(VAR_36, "\n %-35s = %d/ %d/ %d/ %d/ %d",
     "sta/vwifi/hs/p2pGo/p2pGc",
     ((VAR_58 & VAR_29) ? 1 : 0),
     ((VAR_58 & VAR_25) ? 1 : 0),
     ((VAR_58 & VAR_26) ? 1 : 0),
     ((VAR_58 & VAR_28) ? 1 : 0),
     ((VAR_58 & VAR_27) ? 1 : 0));

 FUNC_1(VAR_36, "\n %-35s = [%s/ %d/ %d] ",
     "BT [status/ rssi/ retryCnt]",
     ((VAR_31->bt_disabled) ? ("disabled") :
      ((VAR_31->c2h_bt_inquiry_page) ? ("inquiry/page scan") :
       ((VAR_23 ==
         VAR_30->bt_status) ?
        "non-connected idle" :
        ((VAR_22 ==
   VAR_30->bt_status) ?
         "connected-idle" : "busy")))),
         VAR_31->bt_rssi, VAR_31->bt_retry_cnt);

 FUNC_1(VAR_36, "\n %-35s = %d / %d / %d / %d",
     "SCO/HID/PAN/A2DP", VAR_39->sco_exist,
     VAR_39->hid_exist, VAR_39->pan_exist,
     VAR_39->a2dp_exist);
 VAR_35->btc_disp_dbg_msg(VAR_35, VAR_1, VAR_36);

 VAR_42 = VAR_31->bt_info_ext;
 FUNC_1(VAR_36, "\n %-35s = %s",
     "BT Info A2DP rate",
     (VAR_42 & VAR_0) ? "Basic rate" : "EDR rate");

 for (VAR_41 = 0; VAR_41 < VAR_24; VAR_41++) {
  if (VAR_31->bt_info_c2h_cnt[VAR_41]) {
   FUNC_1(VAR_36, "\n %-35s = %7ph(%d)",
       VAR_32[VAR_41],
       VAR_31->bt_info_c2h[VAR_41],
       VAR_31->bt_info_c2h_cnt[VAR_41]);
  }
 }
 FUNC_1(VAR_36, "\n %-35s = %s/%s, (0x%x/0x%x)",
     "PS state, IPS/LPS, (lps/rpwm)",
     ((VAR_31->under_ips ? "IPS ON" : "IPS OFF")),
     ((VAR_31->under_lps ? "LPS ON" : "LPS OFF")),
     VAR_35->bt_info.lps_val,
     VAR_35->bt_info.rpwm_val);
 VAR_35->btc_disp_dbg_msg(VAR_35, VAR_3, VAR_36);

 if (!VAR_35->manual_control) {

  FUNC_1(VAR_36, "\n %-35s",
      "============[Sw mechanism]============");

  FUNC_1(VAR_36, "\n %-35s = %d/",
      "SM[LowPenaltyRA]", VAR_30->cur_low_penalty_ra);

  FUNC_1(VAR_36, "\n %-35s = %s/ %s/ %d ",
      "DelBA/ BtCtrlAgg/ AggSize",
      (VAR_35->bt_info.reject_agg_pkt ? "Yes" : "No"),
      (VAR_35->bt_info.bt_ctrl_buf_size ? "Yes" : "No"),
      VAR_35->bt_info.agg_buf_size);

  FUNC_1(VAR_36, "\n %-35s = 0x%x ",
      "Rate Mask", VAR_35->bt_info.ra_mask);


  FUNC_1(VAR_36, "\n %-35s",
      "============[Fw mechanism]============");

  VAR_43 = VAR_30->cur_ps_tdma;
  FUNC_1(VAR_36, "\n %-35s = %5ph case-%d (auto:%d)",
      "PS TDMA", VAR_30->ps_tdma_para,
      VAR_43, VAR_30->auto_tdma_adjust);

  FUNC_1(VAR_36, "\n %-35s = %d ",
      "IgnWlanAct", VAR_30->cur_ignore_wlan_act);

  FUNC_1(VAR_36, "\n %-35s = 0x%x ",
      "Latest error condition(should be 0)",
      VAR_30->error_condition);
 }

 FUNC_1(VAR_36, "\n %-35s = %d",
     "Coex Table Type", VAR_31->coex_table_type);


 FUNC_1(VAR_36, "\n %-35s",
     "============[Hw setting]============");

 FUNC_1(VAR_36, "\n %-35s = 0x%x/0x%x/0x%x/0x%x",
     "backup ARFR1/ARFR2/RL/AMaxTime", VAR_30->backup_arfr_cnt1,
     VAR_30->backup_arfr_cnt2, VAR_30->backup_retry_limit,
     VAR_30->backup_ampdu_max_time);

 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0x430);
 VAR_45[1] = VAR_35->btc_read_4byte(VAR_35, 0x434);
 VAR_44[0] = VAR_35->btc_read_2byte(VAR_35, 0x42a);
 VAR_40[0] = VAR_35->btc_read_1byte(VAR_35, 0x456);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/0x%x/0x%x/0x%x",
     "0x430/0x434/0x42a/0x456",
     VAR_45[0], VAR_45[1], VAR_44[0], VAR_40[0]);

 VAR_40[0] = VAR_35->btc_read_1byte(VAR_35, 0x778);
 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0x6cc);
 VAR_45[1] = VAR_35->btc_read_4byte(VAR_35, 0x880);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x778/0x6cc/0x880[29:25]", VAR_40[0], VAR_45[0],
     (VAR_45[1] & 0x3e000000) >> 25);

 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0x948);
 VAR_40[0] = VAR_35->btc_read_1byte(VAR_35, 0x67);
 VAR_40[1] = VAR_35->btc_read_1byte(VAR_35, 0x765);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x948/ 0x67[5] / 0x765",
     VAR_45[0], ((VAR_40[0] & 0x20) >> 5), VAR_40[1]);

 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0x92c);
 VAR_45[1] = VAR_35->btc_read_4byte(VAR_35, 0x930);
 VAR_45[2] = VAR_35->btc_read_4byte(VAR_35, 0x944);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x92c[1:0]/ 0x930[7:0]/0x944[1:0]",
     VAR_45[0] & 0x3, VAR_45[1] & 0xff, VAR_45[2] & 0x3);

 VAR_40[0] = VAR_35->btc_read_1byte(VAR_35, 0x39);
 VAR_40[1] = VAR_35->btc_read_1byte(VAR_35, 0x40);
 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0x4c);
 VAR_40[2] = VAR_35->btc_read_1byte(VAR_35, 0x64);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x",
     "0x38[11]/0x40/0x4c[24:23]/0x64[0]",
     ((VAR_40[0] & 0x8) >> 3), VAR_40[1],
      ((VAR_45[0] & 0x01800000) >> 23), VAR_40[2] & 0x1);

 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0x550);
 VAR_40[0] = VAR_35->btc_read_1byte(VAR_35, 0x522);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x",
     "0x550(bcn ctrl)/0x522", VAR_45[0], VAR_40[0]);

 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0xc50);
 VAR_40[0] = VAR_35->btc_read_1byte(VAR_35, 0x49c);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x",
     "0xc50(dig)/0x49c(null-drop)", VAR_45[0] & 0xff, VAR_40[0]);

 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0xda0);
 VAR_45[1] = VAR_35->btc_read_4byte(VAR_35, 0xda4);
 VAR_45[2] = VAR_35->btc_read_4byte(VAR_35, 0xda8);
 VAR_45[3] = VAR_35->btc_read_4byte(VAR_35, 0xcf0);

 VAR_40[0] = VAR_35->btc_read_1byte(VAR_35, 0xa5b);
 VAR_40[1] = VAR_35->btc_read_1byte(VAR_35, 0xa5c);

 VAR_56 = ((VAR_45[0] & 0xffff0000) >> 16) +
    ((VAR_45[1] & 0xffff0000) >> 16) +
     (VAR_45[1] & 0xffff) +
     (VAR_45[2] & 0xffff) +
    ((VAR_45[3] & 0xffff0000) >> 16) +
     (VAR_45[3] & 0xffff);
 VAR_57 = (VAR_40[0] << 8) + VAR_40[1];

 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "OFDM-CCA/OFDM-FA/CCK-FA",
   VAR_45[0] & 0xffff, VAR_56, VAR_57);

 VAR_45[0] = VAR_35->btc_read_4byte(VAR_35, 0x6c0);
 VAR_45[1] = VAR_35->btc_read_4byte(VAR_35, 0x6c4);
 VAR_45[2] = VAR_35->btc_read_4byte(VAR_35, 0x6c8);
 FUNC_1(VAR_36, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x6c0/0x6c4/0x6c8(coexTable)",
     VAR_45[0], VAR_45[1], VAR_45[2]);

 FUNC_1(VAR_36, "\n %-35s = %d/ %d",
     "0x770(high-pri rx/tx)", VAR_31->high_priority_rx,
     VAR_31->high_priority_tx);
 FUNC_1(VAR_36, "\n %-35s = %d/ %d",
     "0x774(low-pri rx/tx)", VAR_31->low_priority_rx,
     VAR_31->low_priority_tx);
 if (VAR_35->auto_report_1ant)
  FUNC_0(VAR_35);
 VAR_35->btc_disp_dbg_msg(VAR_35, VAR_2, VAR_36);
}
