
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_7 ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 scalar_t__ FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
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
 scalar_t__ FUNC_16 (struct btc_coexist*) ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_17 (struct btc_coexist*,int ,int*) ;
 int FUNC_18 (struct btc_coexist*,int ,int*) ;
 int FUNC_19 (struct btc_coexist*,int ,int*) ;
 int FUNC_20 (struct btc_coexist*,int ,int*) ;
 int FUNC_21 (struct btc_coexist*,int ,int*) ;
 int FUNC_22 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_23(struct btc_coexist *VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_10->adapter;
 u8 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 struct btc_bt_link_info *VAR_15 = &VAR_10->bt_link_info;
 bool VAR_16 = 0;
 bool VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

 FUNC_0(VAR_11, VAR_5, VAR_6,
   "[BTCoex], RunCoexistMechanism()===>\n");

 if (VAR_10->manual_control) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], RunCoexistMechanism(), return for Manual CTRL <===\n");
  return;
 }

 if (VAR_9->under_ips) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], wifi is under IPS !!!\n");
  return;
 }

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_9->c2h_bt_inquiry_page &&
     (129 != VAR_12)) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], BT is under inquiry/page scan !!\n");
  FUNC_4(VAR_10);
  return;
 }

 VAR_10->btc_get(VAR_10, VAR_2, &VAR_17);
 VAR_10->btc_get(VAR_10, VAR_0, &VAR_18);
 VAR_10->btc_get(VAR_10, VAR_1, &VAR_19);

 if (VAR_17 || VAR_18 || VAR_19) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], WiFi is under Link Process !!\n");
  FUNC_13(VAR_10);
  return;
 }


 VAR_10->btc_get(VAR_10, VAR_3,
      &VAR_14);
 VAR_13 = VAR_14 >> 16;

 if ((VAR_13 >= 2) ||
     (VAR_14 & VAR_7)) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "############# [BTCoex],  Multi-Port num_of_wifi_link = %d, wifi_link_status = 0x%x\n",
    VAR_13, VAR_14);

  if (VAR_15->bt_link_exist)
   VAR_16 = 1;
  else
   VAR_16 = 0;

  VAR_10->btc_set(VAR_10, VAR_4,
       &VAR_16);
  FUNC_14(VAR_10);

  return;
 }

 VAR_16 = 0;
 VAR_10->btc_set(VAR_10, VAR_4,
      &VAR_16);

 VAR_8->cur_algorithm = VAR_12;
 FUNC_0(VAR_11, VAR_5, VAR_6,
   "[BTCoex], Algorithm = %d\n",
   VAR_8->cur_algorithm);

 if (FUNC_16(VAR_10)) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], Action 2-Ant common\n");
  VAR_8->auto_tdma_adjust = 0;
 } else {
  if (VAR_8->cur_algorithm != VAR_8->pre_algorithm) {
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], preAlgorithm=%d, curAlgorithm=%d\n",
     VAR_8->pre_algorithm,
     VAR_8->cur_algorithm);
   VAR_8->auto_tdma_adjust = 0;
  }
  switch (VAR_8->cur_algorithm) {
  case 128:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = SCO\n");
   FUNC_12(VAR_10);
   break;
  case 135:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = HID\n");
   FUNC_5(VAR_10);
   break;
  case 137:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = A2DP\n");
   FUNC_1(VAR_10);
   break;
  case 136:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = A2DP+PAN(HS)\n");
   FUNC_2(VAR_10);
   break;
  case 132:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = PAN(EDR)\n");
   FUNC_8(VAR_10);
   break;
  case 129:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = HS mode\n");
   FUNC_11(VAR_10);
   break;
  case 131:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = PAN+A2DP\n");
   FUNC_9(VAR_10);
   break;
  case 130:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = PAN(EDR)+HID\n");
   FUNC_10(VAR_10);
   break;
  case 133:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = HID+A2DP+PAN\n");
   FUNC_7(VAR_10);
   break;
  case 134:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = HID+A2DP\n");
   FUNC_6(VAR_10);
   break;
  default:
   FUNC_0(VAR_11, VAR_5, VAR_6,
     "[BTCoex], Action 2-Ant, algorithm = coexist All Off!!\n");
   FUNC_15(VAR_10);
   break;
  }
  VAR_8->pre_algorithm = VAR_8->cur_algorithm;
 }
}
