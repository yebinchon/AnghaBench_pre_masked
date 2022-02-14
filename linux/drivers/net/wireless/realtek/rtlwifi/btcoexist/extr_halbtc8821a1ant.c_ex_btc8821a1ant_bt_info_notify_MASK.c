
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int stop_coex_dm; int manual_control; int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_set_bt_reg ) (struct btc_coexist*,int ,int,int) ;struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__ bt_status; int auto_tdma_adjust; } ;
struct TYPE_3__ {int c2h_bt_info_req_sent; int** bt_info_c2h; int bt_retry_cnt; int bt_rssi; int bt_info_ext; int bt_tx_rx_mask; int c2h_bt_inquiry_page; int bt_link_exist; int pan_exist; int a2dp_exist; int hid_exist; int sco_exist; int * bt_info_c2h_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 TYPE_2__* VAR_28 ;
 TYPE_1__* VAR_29 ;
 int FUNC_4 (struct btc_coexist*,int ) ;
 int FUNC_5 (struct btc_coexist*,int ,int*) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int ,int*) ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;

void FUNC_10(struct btc_coexist *VAR_30,
        u8 *VAR_31, u8 VAR_32)
{
 struct rtl_priv *VAR_33 = VAR_30->adapter;
 u8 VAR_34;
 u8 VAR_35 = 0;
 u8 VAR_36 = 0;
 bool VAR_37 = 0;
 bool VAR_38 = 0;
 bool VAR_39 = 0;

 VAR_29->c2h_bt_info_req_sent = 0;

 VAR_30->btc_get(VAR_30,
   VAR_4, &VAR_39);

 VAR_36 = VAR_31[0] & 0xf;
 if (VAR_36 >= VAR_23)
  VAR_36 = VAR_24;
 VAR_29->bt_info_c2h_cnt[VAR_36]++;

 FUNC_0(VAR_33, VAR_25, VAR_26,
   "[BTCoex], Bt info[%d], length = %d, hex data = [",
   VAR_36, VAR_32);
 for (VAR_34 = 0; VAR_34 < VAR_32; VAR_34++) {
  VAR_29->bt_info_c2h[VAR_36][VAR_34] = VAR_31[VAR_34];
  if (VAR_34 == 1)
   VAR_35 = VAR_31[VAR_34];
  if (VAR_34 == VAR_32 - 1) {
   FUNC_0(VAR_33, VAR_25, VAR_26,
     "0x%02x]\n", VAR_31[VAR_34]);
  } else {
   FUNC_0(VAR_33, VAR_25, VAR_26,
     "0x%02x, ", VAR_31[VAR_34]);
  }
 }

 if (VAR_24 != VAR_36) {

  VAR_29->bt_retry_cnt =
   VAR_29->bt_info_c2h[VAR_36][2] & 0xf;

  VAR_29->bt_rssi =
   VAR_29->bt_info_c2h[VAR_36][3] * 2 + 10;

  VAR_29->bt_info_ext = VAR_29->bt_info_c2h[VAR_36][4];

  VAR_29->bt_tx_rx_mask =
   (VAR_29->bt_info_c2h[VAR_36][2] & 0x40);
  VAR_30->btc_set(VAR_30, VAR_8,
       &VAR_29->bt_tx_rx_mask);
  if (!VAR_29->bt_tx_rx_mask) {



   FUNC_0(VAR_33, VAR_25, VAR_26,
     "[BTCoex], Switch BT TRx Mask since BT RF REG 0x3C != 0x15\n");
   VAR_30->btc_set_bt_reg(VAR_30, VAR_2,
        0x3c, 0x15);
  }




  if (VAR_29->bt_info_ext & VAR_0) {
   FUNC_0(VAR_33, VAR_25, VAR_26,
     "[BTCoex], BT ext info bit1 check, send wifi BW&Chnl to BT!!\n");
   VAR_30->btc_get(VAR_30, VAR_3,
        &VAR_37);
   if (VAR_37) {
    FUNC_4(VAR_30,
              VAR_5);
   } else {
    FUNC_4(VAR_30,
              VAR_6);
   }
  }

  if ((VAR_29->bt_info_ext & VAR_1) && !VAR_39) {
   if (!VAR_30->manual_control &&
       !VAR_30->stop_coex_dm) {
    FUNC_0(VAR_33, VAR_25, VAR_26,
      "[BTCoex], BT ext info bit3 check, set BT NOT to ignore Wlan active!!\n");
    FUNC_1(VAR_30,
            VAR_27,
            0);
   }
  }
 }


 if (VAR_35 & VAR_20)
  VAR_29->c2h_bt_inquiry_page = 1;
 else
  VAR_29->c2h_bt_inquiry_page = 0;


 if (!(VAR_35 & VAR_17)) {
  VAR_29->bt_link_exist = 0;
  VAR_29->pan_exist = 0;
  VAR_29->a2dp_exist = 0;
  VAR_29->hid_exist = 0;
  VAR_29->sco_exist = 0;
 } else {

  VAR_29->bt_link_exist = 1;
  if (VAR_35 & VAR_18)
   VAR_29->pan_exist = 1;
  else
   VAR_29->pan_exist = 0;
  if (VAR_35 & VAR_15)
   VAR_29->a2dp_exist = 1;
  else
   VAR_29->a2dp_exist = 0;
  if (VAR_35 & VAR_19)
   VAR_29->hid_exist = 1;
  else
   VAR_29->hid_exist = 0;
  if (VAR_35 & VAR_22)
   VAR_29->sco_exist = 1;
  else
   VAR_29->sco_exist = 0;
 }

 FUNC_3(VAR_30);




 VAR_35 = VAR_35 & 0x1f;

 if (!(VAR_35 & VAR_17)) {
  VAR_28->bt_status = VAR_13;
  FUNC_0(VAR_33, VAR_25, VAR_26,
    "[BTCoex], BtInfoNotify(), BT Non-Connected idle!!!\n");
 } else if (VAR_35 == VAR_17) {

  VAR_28->bt_status = VAR_11;
  FUNC_0(VAR_33, VAR_25, VAR_26,
    "[BTCoex], BtInfoNotify(), BT Connected-idle!!!\n");
 } else if ((VAR_35&VAR_22) ||
  (VAR_35 & VAR_21)) {
  VAR_28->bt_status = VAR_14;
  FUNC_0(VAR_33, VAR_25, VAR_26,
    "[BTCoex], BtInfoNotify(), BT SCO busy!!!\n");
 } else if (VAR_35 & VAR_16) {
  if (VAR_9 != VAR_28->bt_status)
   VAR_28->auto_tdma_adjust = 0;
  VAR_28->bt_status = VAR_9;
  FUNC_0(VAR_33, VAR_25, VAR_26,
    "[BTCoex], BtInfoNotify(), BT ACL busy!!!\n");
 } else {
  VAR_28->bt_status = VAR_12;
  FUNC_0(VAR_33, VAR_25, VAR_26,
    "[BTCoex], BtInfoNotify(), BT Non-Defined state!!!\n");
 }

 if ((VAR_9 == VAR_28->bt_status) ||
     (VAR_14 == VAR_28->bt_status) ||
     (VAR_10 == VAR_28->bt_status))
  VAR_38 = 1;
 else
  VAR_38 = 0;
 VAR_30->btc_set(VAR_30,
      VAR_7, &VAR_38);

 FUNC_2(VAR_30);
}
