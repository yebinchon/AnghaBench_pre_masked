
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;
struct btc_stack_info {int hci_version; scalar_t__ profile_notified; } ;
struct btc_bt_link_info {int a2dp_exist; int pan_exist; int hid_exist; int sco_exist; } ;
struct btc_board_info {scalar_t__ pg_ant_num; int btdm_ant_num; } ;
struct btc_coexist {int (* btc_read_1byte ) (struct btc_coexist*,int) ;scalar_t__ (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_disp_dbg_msg ) (struct btc_coexist*,int ,struct seq_file*) ;scalar_t__ auto_report_2ant; int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;scalar_t__ manual_control; struct btc_bt_link_info bt_link_info; struct btc_stack_info stack_info; struct btc_board_info board_info; } ;
typedef int s32 ;
struct TYPE_4__ {int cur_ps_tdma; scalar_t__ cur_dec_bt_pwr_lvl; int cur_ignore_wlan_act; int bt_rf0x1e_backup; int auto_tdma_adjust; int ps_tdma_para; int cur_dac_swing_lvl; int cur_dac_swing_on; int cur_adc_back_off; int cur_agc_table_en; int limited_dig; int cur_low_penalty_ra; int cur_rf_rx_lpf_shrink; int wifi_chnl_info; } ;
struct TYPE_3__ {int bt_info_ext; int* bt_info_c2h_cnt; scalar_t__* bt_info_c2h; scalar_t__ high_priority_rx; int high_priority_tx; scalar_t__ low_priority_rx; int low_priority_tx; scalar_t__ under_lps; scalar_t__ under_ips; } ;


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
 int VAR_22 ;
 int FUNC_0 (struct btc_coexist*) ;
 TYPE_2__* VAR_23 ;
 TYPE_1__* VAR_24 ;
 char** VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct seq_file*,char*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;
 int FUNC_7 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_8 (struct btc_coexist*,int ,int*) ;
 int FUNC_9 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_10 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_11 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_12 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_13 (struct btc_coexist*,int) ;
 int FUNC_14 (struct btc_coexist*,int ,scalar_t__*) ;
 scalar_t__ FUNC_15 (struct btc_coexist*,int) ;
 int FUNC_16 (struct btc_coexist*,int) ;
 int FUNC_17 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_18 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_19 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_20 (struct btc_coexist*,int) ;
 int FUNC_21 (struct btc_coexist*,int) ;
 int FUNC_22 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_23 (struct btc_coexist*,int) ;
 int FUNC_24 (struct btc_coexist*,int) ;
 int FUNC_25 (struct btc_coexist*,int ,int*) ;
 scalar_t__ FUNC_26 (struct btc_coexist*,int) ;
 int FUNC_27 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_28 (struct btc_coexist*,int) ;
 int FUNC_29 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_30 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_31 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_32 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_33 (struct btc_coexist*,int) ;
 int FUNC_34 (struct btc_coexist*,int) ;
 int FUNC_35 (struct btc_coexist*,int) ;
 int FUNC_36 (struct btc_coexist*,int ,int*) ;
 scalar_t__ FUNC_37 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_38 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_39 (struct btc_coexist*,int) ;
 int FUNC_40 (struct btc_coexist*,int) ;
 int FUNC_41 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_42 (struct btc_coexist*,int ,int*) ;
 int FUNC_43 (struct btc_coexist*,int ,int*) ;
 int FUNC_44 (struct btc_coexist*,int ,int*) ;
 int FUNC_45 (struct btc_coexist*,int ,int*) ;
 int FUNC_46 (struct btc_coexist*,int ,int*) ;

void FUNC_47(struct btc_coexist *VAR_28,
           struct seq_file *VAR_29)
{
 struct btc_board_info *VAR_30 = &VAR_28->board_info;
 struct btc_stack_info *VAR_31 = &VAR_28->stack_info;
 struct btc_bt_link_info *VAR_32 = &VAR_28->bt_link_info;
 u8 VAR_33[4], VAR_34, VAR_35, VAR_36 = 0;
 u32 VAR_37[4];
 bool VAR_38 = 0, VAR_39 = 0;
 bool VAR_40 = 0, VAR_41 = 0;
 bool VAR_42 = 0, VAR_43 = 0;
 s32 VAR_44 = 0, VAR_45 = 0;
 u32 VAR_46, VAR_47, VAR_48, VAR_49;
 u8 VAR_50, VAR_51;
 u32 VAR_52 = 0, VAR_53 = 0;
 u8 VAR_54 = 0;

 FUNC_2(VAR_29, "\n ============[BT Coexist info]============");

 if (VAR_28->manual_control) {
  FUNC_2(VAR_29, "\n ==========[Under Manual Control]============");
  FUNC_2(VAR_29, "\n ==========================================");
 }

 FUNC_1(VAR_29, "\n %-35s = %d/ %d ",
     "Ant PG number/ Ant mechanism:",
     VAR_30->pg_ant_num, VAR_30->btdm_ant_num);

 FUNC_1(VAR_29, "\n %-35s = %s / %d",
     "BT stack/ hci ext ver",
     ((VAR_31->profile_notified) ? "Yes" : "No"),
     VAR_31->hci_version);

 VAR_28->btc_get(VAR_28, VAR_15, &VAR_53);
 VAR_28->btc_get(VAR_28, VAR_17, &VAR_52);
 FUNC_1(VAR_29, "\n %-35s = %d_%x/ 0x%x/ 0x%x(%d)",
     "CoexVer/ FwVer/ PatchVer",
     VAR_27, VAR_26,
     VAR_52, VAR_53, VAR_53);

 VAR_28->btc_get(VAR_28, VAR_4, &VAR_42);
 VAR_28->btc_get(VAR_28, VAR_13,
      &VAR_50);
 VAR_28->btc_get(VAR_28, VAR_14, &VAR_51);

 FUNC_1(VAR_29, "\n %-35s = %d / %d(%d)",
     "Dot11 channel / HsChnl(HsMode)",
     VAR_50, VAR_51, VAR_42);

 FUNC_1(VAR_29, "\n %-35s = %3ph ",
     "H2C Wifi inform bt chnl Info", VAR_23->wifi_chnl_info);

 VAR_28->btc_get(VAR_28, VAR_11, &VAR_44);
 VAR_28->btc_get(VAR_28, VAR_10, &VAR_45);
 VAR_28->btc_get(VAR_28, VAR_12, &VAR_54);
 FUNC_1(VAR_29, "\n %-35s = %d/ %d/ %d",
     "Wifi rssi/ HS rssi/ AP#", VAR_44, VAR_45, VAR_54);

 VAR_28->btc_get(VAR_28, VAR_8, &VAR_39);
 VAR_28->btc_get(VAR_28, VAR_6, &VAR_40);
 VAR_28->btc_get(VAR_28, VAR_7, &VAR_38);
 FUNC_1(VAR_29, "\n %-35s = %d/ %d/ %d ",
     "Wifi link/ roam/ scan", VAR_40, VAR_38, VAR_39);

 VAR_28->btc_get(VAR_28, VAR_9, &VAR_41);
 VAR_28->btc_get(VAR_28, VAR_16, &VAR_46);
 VAR_28->btc_get(VAR_28, VAR_5, &VAR_43);
 VAR_28->btc_get(VAR_28, VAR_18,
      &VAR_47);
 FUNC_1(VAR_29, "\n %-35s = %s / %s/ %s ",
     "Wifi status", (VAR_41 ? "5G" : "2.4G"),
   ((VAR_46 == VAR_20) ? "Legacy" :
   (((VAR_46 == VAR_19) ? "HT40" : "HT20"))),
   ((!VAR_43) ? "idle" :
   ((VAR_47 == VAR_21) ?
    "uplink" : "downlink")));

 FUNC_1(VAR_29, "\n %-35s = %d / %d / %d / %d",
     "SCO/HID/PAN/A2DP",
     VAR_32->sco_exist, VAR_32->hid_exist,
     VAR_32->pan_exist, VAR_32->a2dp_exist);
 VAR_28->btc_disp_dbg_msg(VAR_28, VAR_1, VAR_29);

 VAR_35 = VAR_24->bt_info_ext;
 FUNC_1(VAR_29, "\n %-35s = %s",
     "BT Info A2DP rate",
     (VAR_35 & VAR_0) ? "Basic rate" : "EDR rate");

 for (VAR_34 = 0; VAR_34 < VAR_22; VAR_34++) {
  if (VAR_24->bt_info_c2h_cnt[VAR_34]) {
   FUNC_1(VAR_29, "\n %-35s = %7ph(%d)",
       VAR_25[VAR_34],
       VAR_24->bt_info_c2h[VAR_34],
       VAR_24->bt_info_c2h_cnt[VAR_34]);
  }
 }

 FUNC_1(VAR_29, "\n %-35s = %s/%s",
     "PS state, IPS/LPS",
     ((VAR_24->under_ips ? "IPS ON" : "IPS OFF")),
     ((VAR_24->under_lps ? "LPS ON" : "LPS OFF")));
 VAR_28->btc_disp_dbg_msg(VAR_28, VAR_3, VAR_29);


 FUNC_1(VAR_29,
     "\n %-35s", "============[Sw mechanism]============");
 FUNC_1(VAR_29, "\n %-35s = %d/ %d/ %d ",
     "SM1[ShRf/ LpRA/ LimDig]", VAR_23->cur_rf_rx_lpf_shrink,
     VAR_23->cur_low_penalty_ra, VAR_23->limited_dig);
 FUNC_1(VAR_29, "\n %-35s = %d/ %d/ %d(0x%x) ",
     "SM2[AgcT/ AdcB/ SwDacSwing(lvl)]",
     VAR_23->cur_agc_table_en, VAR_23->cur_adc_back_off,
     VAR_23->cur_dac_swing_on, VAR_23->cur_dac_swing_lvl);


 FUNC_1(VAR_29, "\n %-35s",
     "============[Fw mechanism]============");

 VAR_36 = VAR_23->cur_ps_tdma;
 FUNC_1(VAR_29, "\n %-35s = %5ph case-%d (auto:%d)",
     "PS TDMA", VAR_23->ps_tdma_para,
     VAR_36, VAR_23->auto_tdma_adjust);

 FUNC_1(VAR_29, "\n %-35s = %d/ %d ",
     "DecBtPwr/ IgnWlanAct", VAR_23->cur_dec_bt_pwr_lvl,
     VAR_23->cur_ignore_wlan_act);


 FUNC_1(VAR_29, "\n %-35s",
     "============[Hw setting]============");

 FUNC_1(VAR_29, "\n %-35s = 0x%x",
     "RF-A, 0x1e initVal", VAR_23->bt_rf0x1e_backup);

 VAR_33[0] = VAR_28->btc_read_1byte(VAR_28, 0x778);
 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0x880);
 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x",
     "0x778/0x880[29:25]", VAR_33[0],
     (VAR_37[0] & 0x3e000000) >> 25);

 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0x948);
 VAR_33[0] = VAR_28->btc_read_1byte(VAR_28, 0x67);
 VAR_33[1] = VAR_28->btc_read_1byte(VAR_28, 0x765);
 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x948/ 0x67[5] / 0x765",
     VAR_37[0], ((VAR_33[0] & 0x20) >> 5), VAR_33[1]);

 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0x92c);
 VAR_37[1] = VAR_28->btc_read_4byte(VAR_28, 0x930);
 VAR_37[2] = VAR_28->btc_read_4byte(VAR_28, 0x944);
 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x92c[1:0]/ 0x930[7:0]/0x944[1:0]",
     VAR_37[0] & 0x3, VAR_37[1] & 0xff, VAR_37[2] & 0x3);

 VAR_33[0] = VAR_28->btc_read_1byte(VAR_28, 0x39);
 VAR_33[1] = VAR_28->btc_read_1byte(VAR_28, 0x40);
 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0x4c);
 VAR_33[2] = VAR_28->btc_read_1byte(VAR_28, 0x64);
 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x",
     "0x38[11]/0x40/0x4c[24:23]/0x64[0]",
     ((VAR_33[0] & 0x8) >> 3), VAR_33[1],
     ((VAR_37[0] & 0x01800000) >> 23), VAR_33[2] & 0x1);

 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0x550);
 VAR_33[0] = VAR_28->btc_read_1byte(VAR_28, 0x522);
 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x",
     "0x550(bcn ctrl)/0x522", VAR_37[0], VAR_33[0]);

 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0xc50);
 VAR_33[0] = VAR_28->btc_read_1byte(VAR_28, 0x49c);
 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x",
     "0xc50(dig)/0x49c(null-drop)", VAR_37[0] & 0xff, VAR_33[0]);

 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0xda0);
 VAR_37[1] = VAR_28->btc_read_4byte(VAR_28, 0xda4);
 VAR_37[2] = VAR_28->btc_read_4byte(VAR_28, 0xda8);
 VAR_37[3] = VAR_28->btc_read_4byte(VAR_28, 0xcf0);

 VAR_33[0] = VAR_28->btc_read_1byte(VAR_28, 0xa5b);
 VAR_33[1] = VAR_28->btc_read_1byte(VAR_28, 0xa5c);

 VAR_48 = ((VAR_37[0]&0xffff0000) >> 16) +
    ((VAR_37[1]&0xffff0000) >> 16) +
     (VAR_37[1] & 0xffff) +
     (VAR_37[2] & 0xffff) +
    ((VAR_37[3]&0xffff0000) >> 16) +
     (VAR_37[3] & 0xffff);
 VAR_49 = (VAR_33[0] << 8) + VAR_33[1];

 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "OFDM-CCA/OFDM-FA/CCK-FA",
     VAR_37[0] & 0xffff, VAR_48, VAR_49);

 VAR_37[0] = VAR_28->btc_read_4byte(VAR_28, 0x6c0);
 VAR_37[1] = VAR_28->btc_read_4byte(VAR_28, 0x6c4);
 VAR_37[2] = VAR_28->btc_read_4byte(VAR_28, 0x6c8);
 VAR_33[0] = VAR_28->btc_read_1byte(VAR_28, 0x6cc);
 FUNC_1(VAR_29, "\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x",
     "0x6c0/0x6c4/0x6c8/0x6cc(coexTable)",
     VAR_37[0], VAR_37[1], VAR_37[2], VAR_33[0]);

 FUNC_1(VAR_29, "\n %-35s = %d/ %d",
     "0x770(high-pri rx/tx)",
     VAR_24->high_priority_rx, VAR_24->high_priority_tx);
 FUNC_1(VAR_29, "\n %-35s = %d/ %d",
     "0x774(low-pri rx/tx)", VAR_24->low_priority_rx,
     VAR_24->low_priority_tx);
 if (VAR_28->auto_report_2ant)
  FUNC_0(VAR_28);
 VAR_28->btc_disp_dbg_msg(VAR_28, VAR_2, VAR_29);
}
