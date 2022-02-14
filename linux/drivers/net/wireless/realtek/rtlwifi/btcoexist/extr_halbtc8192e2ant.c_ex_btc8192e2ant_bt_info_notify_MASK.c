
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int auto_report_2ant; int stop_coex_dm; int manual_control; int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__ bt_status; int limited_dig; } ;
struct TYPE_3__ {int c2h_bt_info_req_sent; int** bt_info_c2h; int bt_retry_cnt; int bt_rssi; int bt_info_ext; int c2h_bt_inquiry_page; int bt_link_exist; int pan_exist; int a2dp_exist; int hid_exist; int sco_exist; int * bt_info_c2h_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 TYPE_2__* VAR_27 ;
 TYPE_1__* VAR_28 ;
 int FUNC_5 (struct btc_coexist*,int ) ;
 int FUNC_6 (struct btc_coexist*,int ,int*) ;
 int FUNC_7 (struct btc_coexist*,int ,int*) ;
 int FUNC_8 (struct btc_coexist*,int ,int*) ;

void FUNC_9(struct btc_coexist *VAR_29,
        u8 *VAR_30, u8 VAR_31)
{
 struct rtl_priv *VAR_32 = VAR_29->adapter;
 u8 VAR_33 = 0;
 u8 VAR_34, VAR_35 = 0;
 bool VAR_36 = 0, VAR_37 = 0;
 bool VAR_38 = 0;

 VAR_28->c2h_bt_info_req_sent = 0;

 VAR_35 = VAR_30[0] & 0xf;
 if (VAR_35 >= VAR_22)
  VAR_35 = VAR_23;
 VAR_28->bt_info_c2h_cnt[VAR_35]++;

 FUNC_0(VAR_32, VAR_24, VAR_25,
   "[BTCoex], Bt info[%d], length=%d, hex data = [",
   VAR_35, VAR_31);
 for (VAR_34 = 0; VAR_34 < VAR_31; VAR_34++) {
  VAR_28->bt_info_c2h[VAR_35][VAR_34] = VAR_30[VAR_34];
  if (VAR_34 == 1)
   VAR_33 = VAR_30[VAR_34];
  if (VAR_34 == VAR_31-1)
   FUNC_0(VAR_32, VAR_24, VAR_25,
     "0x%02x]\n", VAR_30[VAR_34]);
  else
   FUNC_0(VAR_32, VAR_24, VAR_25,
     "0x%02x, ", VAR_30[VAR_34]);
 }

 if (VAR_23 != VAR_35) {

  VAR_28->bt_retry_cnt =
   VAR_28->bt_info_c2h[VAR_35][2] & 0xf;

  VAR_28->bt_rssi =
   VAR_28->bt_info_c2h[VAR_35][3] * 2 + 10;

  VAR_28->bt_info_ext =
   VAR_28->bt_info_c2h[VAR_35][4];




  if ((VAR_28->bt_info_ext & VAR_0)) {
   FUNC_0(VAR_32, VAR_24, VAR_25,
     "bit1, send wifi BW&Chnl to BT!!\n");
   VAR_29->btc_get(VAR_29, VAR_3,
        &VAR_38);
   if (VAR_38)
    FUNC_5(
       VAR_29,
       VAR_4);
   else
    FUNC_5(
       VAR_29,
       VAR_5);
  }

  if ((VAR_28->bt_info_ext & VAR_1)) {
   if (!VAR_29->manual_control &&
       !VAR_29->stop_coex_dm) {
    FUNC_0(VAR_32, VAR_24, VAR_25,
      "bit3, BT NOT ignore Wlan active!\n");
    FUNC_2(VAR_29,
            VAR_26,
            0);
   }
  } else {



  }

  if (!VAR_29->auto_report_2ant) {
   if (!(VAR_28->bt_info_ext & VAR_2))
    FUNC_1(VAR_29,
           VAR_26,
           1);
  }
 }


 if (VAR_33 & VAR_19)
  VAR_28->c2h_bt_inquiry_page = 1;
 else
  VAR_28->c2h_bt_inquiry_page = 0;


 if (!(VAR_33&VAR_16)) {
  VAR_28->bt_link_exist = 0;
  VAR_28->pan_exist = 0;
  VAR_28->a2dp_exist = 0;
  VAR_28->hid_exist = 0;
  VAR_28->sco_exist = 0;
 } else {
  VAR_28->bt_link_exist = 1;
  if (VAR_33 & VAR_17)
   VAR_28->pan_exist = 1;
  else
   VAR_28->pan_exist = 0;
  if (VAR_33 & VAR_14)
   VAR_28->a2dp_exist = 1;
  else
   VAR_28->a2dp_exist = 0;
  if (VAR_33 & VAR_18)
   VAR_28->hid_exist = 1;
  else
   VAR_28->hid_exist = 0;
  if (VAR_33 & VAR_21)
   VAR_28->sco_exist = 1;
  else
   VAR_28->sco_exist = 0;
 }

 FUNC_4(VAR_29);

 if (!(VAR_33 & VAR_16)) {
  VAR_27->bt_status = VAR_12;
  FUNC_0(VAR_32, VAR_24, VAR_25,
    "[BTCoex], BT Non-Connected idle!!!\n");
 } else if (VAR_33 == VAR_16) {
  VAR_27->bt_status = VAR_10;
  FUNC_0(VAR_32, VAR_24, VAR_25,
    "[BTCoex], bt_infoNotify(), BT Connected-idle!!!\n");
 } else if ((VAR_33 & VAR_21) ||
     (VAR_33 & VAR_20)) {
  VAR_27->bt_status = VAR_13;
  FUNC_0(VAR_32, VAR_24, VAR_25,
    "[BTCoex], bt_infoNotify(), BT SCO busy!!!\n");
 } else if (VAR_33 & VAR_15) {
  VAR_27->bt_status = VAR_8;
  FUNC_0(VAR_32, VAR_24, VAR_25,
    "[BTCoex], bt_infoNotify(), BT ACL busy!!!\n");
 } else {
  VAR_27->bt_status = VAR_11;
  FUNC_0(VAR_32, VAR_24, VAR_25,
    "[BTCoex]bt_infoNotify(), BT Non-Defined state!!!\n");
 }

 if ((VAR_8 == VAR_27->bt_status) ||
     (VAR_13 == VAR_27->bt_status) ||
     (VAR_9 == VAR_27->bt_status)) {
  VAR_36 = 1;
  VAR_37 = 1;
 } else {
  VAR_36 = 0;
  VAR_37 = 0;
 }

 VAR_29->btc_set(VAR_29, VAR_7, &VAR_36);

 VAR_27->limited_dig = VAR_37;
 VAR_29->btc_set(VAR_29, VAR_6, &VAR_37);

 FUNC_3(VAR_29);
}
