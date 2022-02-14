
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;
struct btc_stack_info {int a2dp_exist; int pan_exist; int hid_exist; int sco_exist; scalar_t__ profile_notified; int hci_version; } ;
struct btc_board_info {int btdm_ant_num; int pg_ant_num; } ;
struct btc_coexist {int (* btc_read_1byte ) (struct btc_coexist*,int) ;scalar_t__ (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_disp_dbg_msg ) (struct btc_coexist*,int ,struct seq_file*) ;scalar_t__ manual_control; int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;struct btc_stack_info stack_info; struct btc_board_info board_info; } ;
struct TYPE_4__ {int wifi_chnl_info; int cur_ps_tdma; int bt_rf0x1e_backup; int cur_ignore_wlan_act; int cur_dec_bt_pwr_lvl; int ps_tdma_para; int cur_dac_swing_lvl; int cur_dac_swing_on; int cur_adc_back_off; int cur_agc_table_en; } ;
struct TYPE_3__ {int bt_info_ext; int* bt_info_c2h_cnt; int low_priority_tx; int low_priority_rx; int high_priority_tx; int high_priority_rx; scalar_t__ under_lps; scalar_t__ under_ips; int * bt_info_c2h; } ;


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
 int VAR_21 ;
 TYPE_2__* VAR_22 ;
 TYPE_1__* VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct seq_file*,char*,char*,...) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;
 int FUNC_5 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;
 int FUNC_7 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_8 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_9 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_10 (struct btc_coexist*,int) ;
 int FUNC_11 (struct btc_coexist*,int) ;
 int FUNC_12 (struct btc_coexist*,int) ;
 int FUNC_13 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_14 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_15 (struct btc_coexist*,int) ;
 int FUNC_16 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_17 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_18 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_19 (struct btc_coexist*,int) ;
 int FUNC_20 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_21 (struct btc_coexist*,int) ;
 int FUNC_22 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_23 (struct btc_coexist*,int) ;
 int FUNC_24 (struct btc_coexist*,int ,int*) ;
 int FUNC_25 (struct btc_coexist*,int) ;
 int FUNC_26 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_27 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_28 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_29 (struct btc_coexist*,int) ;
 int FUNC_30 (struct btc_coexist*,int) ;
 int FUNC_31 (struct btc_coexist*,int ,struct seq_file*) ;
 int FUNC_32 (struct btc_coexist*,int ,int*) ;
 int FUNC_33 (struct btc_coexist*,int ,int*) ;
 int FUNC_34 (struct btc_coexist*,int ,long*) ;
 int FUNC_35 (struct btc_coexist*,int ,long*) ;
 int FUNC_36 (struct btc_coexist*,int ,int*) ;
 int FUNC_37 (struct btc_coexist*,int ,int*) ;

void FUNC_38(struct btc_coexist *VAR_27,
           struct seq_file *VAR_28)
{
 struct btc_board_info *VAR_29 = &VAR_27->board_info;
 struct btc_stack_info *VAR_30 = &VAR_27->stack_info;
 u8 VAR_31[4], VAR_32, VAR_33, VAR_34 = 0;
 u32 VAR_35[4];
 bool VAR_36 = 0, VAR_37 = 0, VAR_38 = 0, VAR_39 = 0;
 bool VAR_40 = 0, VAR_41 = 0;
 long VAR_42 = 0, VAR_43 = 0;
 u32 VAR_44, VAR_45;
 u8 VAR_46, VAR_47;
 u32 VAR_48 = 0, VAR_49 = 0;

 FUNC_1(VAR_28, "\n ============[BT Coexist info]============");

 FUNC_0(VAR_28, "\n %-35s = %d/ %d ", "Ant PG number/ Ant mechanism:",
     VAR_29->pg_ant_num, VAR_29->btdm_ant_num);

 if (VAR_27->manual_control) {
  FUNC_0(VAR_28, "\n %-35s", "[Action Manual control]!!");
 }

 FUNC_0(VAR_28, "\n %-35s = %s / %d", "BT stack/ hci ext ver",
     ((VAR_30->profile_notified) ? "Yes" : "No"),
     VAR_30->hci_version);

 VAR_27->btc_get(VAR_27, VAR_14, &VAR_49);
 VAR_27->btc_get(VAR_27, VAR_16, &VAR_48);
 FUNC_0(VAR_28, "\n %-35s = %d_%d/ 0x%x/ 0x%x(%d)",
     "CoexVer/ FwVer/ PatchVer",
     VAR_26, VAR_25,
     VAR_48, VAR_49, VAR_49);

 VAR_27->btc_get(VAR_27,
  VAR_4, &VAR_40);
 VAR_27->btc_get(VAR_27,
  VAR_12, &VAR_46);
 VAR_27->btc_get(VAR_27,
  VAR_13, &VAR_47);
 FUNC_0(VAR_28, "\n %-35s = %d / %d(%d)",
     "Dot11 channel / HsMode(HsChnl)",
     VAR_46, VAR_40, VAR_47);

 FUNC_0(VAR_28, "\n %-35s = %3ph ",
     "H2C Wifi inform bt chnl Info",
     VAR_22->wifi_chnl_info);

 VAR_27->btc_get(VAR_27, VAR_11, &VAR_42);
 VAR_27->btc_get(VAR_27, VAR_10, &VAR_43);
 FUNC_0(VAR_28, "\n %-35s = %ld/ %ld", "Wifi rssi/ HS rssi",
     VAR_42, VAR_43);

 VAR_27->btc_get(VAR_27, VAR_8, &VAR_37);
 VAR_27->btc_get(VAR_27, VAR_6, &VAR_38);
 VAR_27->btc_get(VAR_27, VAR_7, &VAR_36);
 FUNC_0(VAR_28, "\n %-35s = %d/ %d/ %d ", "Wifi link/ roam/ scan",
     VAR_38, VAR_36, VAR_37);

 VAR_27->btc_get(VAR_27,
  VAR_9, &VAR_39);
 VAR_27->btc_get(VAR_27,
  VAR_15, &VAR_44);
 VAR_27->btc_get(VAR_27,
  VAR_5, &VAR_41);
 VAR_27->btc_get(VAR_27,
  VAR_17, &VAR_45);
 FUNC_0(VAR_28, "\n %-35s = %s / %s/ %s ", "Wifi status",
     (VAR_39 ? "5G" : "2.4G"),
     ((VAR_19 == VAR_44) ? "Legacy" :
      (((VAR_18 == VAR_44) ? "HT40" : "HT20"))),
     ((!VAR_41) ? "idle" :
      ((VAR_20 == VAR_45) ?
       "uplink" : "downlink")));

 if (VAR_30->profile_notified) {
  FUNC_0(VAR_28, "\n %-35s = %d / %d / %d / %d",
      "SCO/HID/PAN/A2DP",
      VAR_30->sco_exist, VAR_30->hid_exist,
      VAR_30->pan_exist, VAR_30->a2dp_exist);

  VAR_27->btc_disp_dbg_msg(VAR_27,
         VAR_1,
         VAR_28);
 }

 VAR_33 = VAR_23->bt_info_ext;
 FUNC_0(VAR_28, "\n %-35s = %s", "BT Info A2DP rate",
     (VAR_33&VAR_0) ? "Basic rate" : "EDR rate");

 for (VAR_32 = 0; VAR_32 < VAR_21; VAR_32++) {
  if (VAR_23->bt_info_c2h_cnt[VAR_32]) {
   FUNC_0(VAR_28, "\n %-35s = %7ph(%d)",
       VAR_24[VAR_32],
       VAR_23->bt_info_c2h[VAR_32],
       VAR_23->bt_info_c2h_cnt[VAR_32]);
  }
 }

 FUNC_0(VAR_28, "\n %-35s = %s/%s",
     "PS state, IPS/LPS",
     ((VAR_23->under_ips ? "IPS ON" : "IPS OFF")),
     ((VAR_23->under_lps ? "LPS ON" : "LPS OFF")));
 VAR_27->btc_disp_dbg_msg(VAR_27, VAR_3, VAR_28);


 FUNC_0(VAR_28, "\n %-35s",
     "============[Sw mechanism]============");
 FUNC_0(VAR_28, "\n %-35s = %d/ %d/ %d(0x%x) ",
     "SM2[AgcT/ AdcB/ SwDacSwing(lvl)]",
     VAR_22->cur_agc_table_en, VAR_22->cur_adc_back_off,
     VAR_22->cur_dac_swing_on, VAR_22->cur_dac_swing_lvl);


 FUNC_0(VAR_28, "\n %-35s",
     "============[Fw mechanism]============");

 if (!VAR_27->manual_control) {
  VAR_34 = VAR_22->cur_ps_tdma;
  FUNC_0(VAR_28, "\n %-35s = %5ph case-%d",
      "PS TDMA",
      VAR_22->ps_tdma_para, VAR_34);

  FUNC_0(VAR_28, "\n %-35s = %d/ %d ", "DecBtPwr/ IgnWlanAct",
      VAR_22->cur_dec_bt_pwr_lvl,
      VAR_22->cur_ignore_wlan_act);
 }


 FUNC_0(VAR_28, "\n %-35s", "============[Hw setting]============");

 FUNC_0(VAR_28, "\n %-35s = 0x%x", "RF-A, 0x1e initVal",
     VAR_22->bt_rf0x1e_backup);

 VAR_31[0] = VAR_27->btc_read_1byte(VAR_27, 0x778);
 VAR_31[1] = VAR_27->btc_read_1byte(VAR_27, 0x6cc);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x ",
     "0x778 (W_Act)/ 0x6cc (CoTab Sel)",
     VAR_31[0], VAR_31[1]);

 VAR_31[0] = VAR_27->btc_read_1byte(VAR_27, 0x8db);
 VAR_31[1] = VAR_27->btc_read_1byte(VAR_27, 0xc5b);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x",
     "0x8db(ADC)/0xc5b[29:25](DAC)",
     ((VAR_31[0] & 0x60) >> 5), ((VAR_31[1] & 0x3e) >> 1));

 VAR_35[0] = VAR_27->btc_read_4byte(VAR_27, 0xcb4);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x",
     "0xcb4[7:0](ctrl)/ 0xcb4[29:28](val)",
     VAR_35[0] & 0xff, ((VAR_35[0] & 0x30000000) >> 28));

 VAR_31[0] = VAR_27->btc_read_1byte(VAR_27, 0x40);
 VAR_35[0] = VAR_27->btc_read_4byte(VAR_27, 0x4c);
 VAR_35[1] = VAR_27->btc_read_4byte(VAR_27, 0x974);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x40/ 0x4c[24:23]/ 0x974",
     VAR_31[0], ((VAR_35[0] & 0x01800000) >> 23), VAR_35[1]);

 VAR_35[0] = VAR_27->btc_read_4byte(VAR_27, 0x550);
 VAR_31[0] = VAR_27->btc_read_1byte(VAR_27, 0x522);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x",
     "0x550(bcn ctrl)/0x522",
     VAR_35[0], VAR_31[0]);

 VAR_35[0] = VAR_27->btc_read_4byte(VAR_27, 0xc50);
 VAR_31[0] = VAR_27->btc_read_1byte(VAR_27, 0xa0a);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x",
     "0xc50(DIG)/0xa0a(CCK-TH)",
     VAR_35[0], VAR_31[0]);

 VAR_35[0] = VAR_27->btc_read_4byte(VAR_27, 0xf48);
 VAR_31[0] = VAR_27->btc_read_1byte(VAR_27, 0xa5b);
 VAR_31[1] = VAR_27->btc_read_1byte(VAR_27, 0xa5c);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x",
     "OFDM-FA/ CCK-FA",
     VAR_35[0], (VAR_31[0] << 8) + VAR_31[1]);

 VAR_35[0] = VAR_27->btc_read_4byte(VAR_27, 0x6c0);
 VAR_35[1] = VAR_27->btc_read_4byte(VAR_27, 0x6c4);
 VAR_35[2] = VAR_27->btc_read_4byte(VAR_27, 0x6c8);
 FUNC_0(VAR_28, "\n %-35s = 0x%x/ 0x%x/ 0x%x",
     "0x6c0/0x6c4/0x6c8",
     VAR_35[0], VAR_35[1], VAR_35[2]);

 FUNC_0(VAR_28, "\n %-35s = %d/ %d",
     "0x770 (hi-pri Rx/Tx)",
     VAR_23->high_priority_rx, VAR_23->high_priority_tx);
 FUNC_0(VAR_28, "\n %-35s = %d/ %d",
     "0x774(low-pri Rx/Tx)",
     VAR_23->low_priority_rx, VAR_23->low_priority_tx);


 VAR_31[0] = VAR_27->btc_read_1byte(VAR_27, 0x41b);
 FUNC_0(VAR_28, "\n %-35s = 0x%x",
     "0x41b (mgntQ hang chk == 0xf)",
     VAR_31[0]);

 VAR_27->btc_disp_dbg_msg(VAR_27, VAR_2, VAR_28);
}
