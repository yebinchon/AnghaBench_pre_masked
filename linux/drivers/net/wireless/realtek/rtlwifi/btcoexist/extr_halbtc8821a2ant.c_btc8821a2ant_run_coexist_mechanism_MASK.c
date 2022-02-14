
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_bt_link_info {scalar_t__ bt_link_exist; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;scalar_t__ manual_control; struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;
struct TYPE_4__ {int cur_algorithm; int auto_tdma_adjust; int pre_algorithm; } ;
struct TYPE_3__ {scalar_t__ c2h_bt_inquiry_page; scalar_t__ under_ips; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 scalar_t__ FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*) ;
 int FUNC_10 (struct btc_coexist*) ;
 int FUNC_11 (struct btc_coexist*) ;
 int FUNC_12 (struct btc_coexist*) ;
 int FUNC_13 (struct btc_coexist*) ;
 int FUNC_14 (struct btc_coexist*) ;
 int FUNC_15 (struct btc_coexist*) ;
 int FUNC_16 (struct btc_coexist*) ;
 scalar_t__ FUNC_17 (struct btc_coexist*) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_18 (struct btc_coexist*,int ,int*) ;
 int FUNC_19 (struct btc_coexist*,int ,int*) ;
 int FUNC_20 (struct btc_coexist*,int ,int*) ;
 int FUNC_21 (struct btc_coexist*,int ,int*) ;
 int FUNC_22 (struct btc_coexist*,int ,int*) ;
 int FUNC_23 (struct btc_coexist*,int ,int*) ;
 int FUNC_24 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_25(struct btc_coexist *VAR_11)
{
 struct rtl_priv *VAR_12 = VAR_11->adapter;
 struct btc_bt_link_info *VAR_13 = &VAR_11->bt_link_info;
 bool VAR_14 = 0;
 u8 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;

 if (VAR_11->manual_control) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], Manual control!!!\n");
  return;
 }

 VAR_11->btc_get(VAR_11, VAR_3, &VAR_14);

 if (VAR_14) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], RunCoexistMechanism(), run 5G coex setting!!<===\n");
  FUNC_16(VAR_11);
  return;
 }

 if (VAR_10->under_ips) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], wifi is under IPS !!!\n");
  return;
 }

 VAR_15 = FUNC_4(VAR_11);
 if (VAR_10->c2h_bt_inquiry_page &&
     (129 != VAR_15)) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], BT is under inquiry/page scan !!\n");
  FUNC_5(VAR_11);
  return;
 }

 VAR_11->btc_get(VAR_11, VAR_2, &VAR_19);
 VAR_11->btc_get(VAR_11, VAR_0, &VAR_20);
 VAR_11->btc_get(VAR_11, VAR_1, &VAR_21);

 if (VAR_19 || VAR_20 || VAR_21) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], WiFi is under Link Process !!\n");
  FUNC_13(VAR_11);
  return;
 }


 VAR_11->btc_get(VAR_11, VAR_4,
      &VAR_17);
 VAR_16 = VAR_17 >> 16;

 if ((VAR_16 >= 2) ||
     (VAR_17 & VAR_8)) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "############# [BTCoex],  Multi-Port num_of_wifi_link = %d, wifi_link_status = 0x%x\n",
    VAR_16, VAR_17);

  if (VAR_13->bt_link_exist)
   VAR_18 = 1;
  else
   VAR_18 = 0;

  VAR_11->btc_set(VAR_11, VAR_5,
       &VAR_18);
  FUNC_14(VAR_11);

  return;
 }

 VAR_18 = 0;
 VAR_11->btc_set(VAR_11, VAR_5,
      &VAR_18);

 VAR_9->cur_algorithm = VAR_15;
 FUNC_0(VAR_12, VAR_6, VAR_7,
   "[BTCoex], Algorithm = %d\n", VAR_9->cur_algorithm);

 if (FUNC_17(VAR_11)) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], Action 2-Ant common\n");
  VAR_9->auto_tdma_adjust = 1;
 } else {
  if (VAR_9->cur_algorithm != VAR_9->pre_algorithm) {
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], pre_algorithm = %d, cur_algorithm = %d\n",
        VAR_9->pre_algorithm,
        VAR_9->cur_algorithm);
   VAR_9->auto_tdma_adjust = 0;
  }
  switch (VAR_9->cur_algorithm) {
  case 128:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = SCO\n");
   FUNC_12(VAR_11);
   break;
  case 135:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = HID\n");
   FUNC_6(VAR_11);
   break;
  case 137:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = A2DP\n");
   FUNC_2(VAR_11);
   break;
  case 136:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = A2DP+PAN(HS)\n");
   FUNC_3(VAR_11);
   break;
  case 132:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = PAN(EDR)\n");
   FUNC_8(VAR_11);
   break;
  case 129:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = HS mode\n");
   FUNC_11(VAR_11);
   break;
  case 131:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = PAN+A2DP\n");
   FUNC_9(VAR_11);
   break;
  case 130:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = PAN(EDR)+HID\n");
   FUNC_10(VAR_11);
   break;
  case 133:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = HID+A2DP+PAN\n");
   FUNC_1(VAR_11);
   break;
  case 134:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = HID+A2DP\n");
   FUNC_7(VAR_11);
   break;
  default:
   FUNC_0(VAR_12, VAR_6, VAR_7,
     "[BTCoex], Action 2-Ant, algorithm = coexist All Off!!\n");
   FUNC_15(VAR_11);
   break;
  }
  VAR_9->pre_algorithm = VAR_9->cur_algorithm;
 }
}
