
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {scalar_t__ manual_control; struct rtl_priv* adapter; } ;
struct TYPE_4__ {int cur_algorithm; int auto_tdma_adjust; int pre_algorithm; } ;
struct TYPE_3__ {scalar_t__ c2h_bt_inquiry_page; scalar_t__ under_ips; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
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
 scalar_t__ FUNC_14 (struct btc_coexist*) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_15(struct btc_coexist *VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_4->adapter;
 u8 VAR_6 = 0;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "[BTCoex], RunCoexistMechanism()===>\n");

 if (VAR_4->manual_control) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "[BTCoex], return for Manual CTRL <===\n");
  return;
 }

 if (VAR_3->under_ips) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "[BTCoex], wifi is under IPS !!!\n");
  return;
 }

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_3->c2h_bt_inquiry_page &&
     (130 != VAR_6)) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "[BTCoex], BT is under inquiry/page scan !!\n");
  FUNC_4(VAR_4);
  return;
 }

 VAR_2->cur_algorithm = VAR_6;
 FUNC_0(VAR_5, VAR_0, VAR_1,
   "[BTCoex], Algorithm = %d\n", VAR_2->cur_algorithm);

 if (FUNC_14(VAR_4)) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "[BTCoex], Action 2-Ant common\n");
  VAR_2->auto_tdma_adjust = 0;
 } else {
  if (VAR_2->cur_algorithm != VAR_2->pre_algorithm) {
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "[BTCoex] preAlgorithm=%d, curAlgorithm=%d\n",
     VAR_2->pre_algorithm,
     VAR_2->cur_algorithm);
   VAR_2->auto_tdma_adjust = 0;
  }
  switch (VAR_2->cur_algorithm) {
  case 129:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = SCO\n");
   FUNC_12(VAR_4);
   break;
  case 128:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = SCO+PAN(EDR)\n");
   FUNC_13(VAR_4);
   break;
  case 136:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = HID\n");
   FUNC_5(VAR_4);
   break;
  case 138:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = A2DP\n");
   FUNC_1(VAR_4);
   break;
  case 137:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = A2DP+PAN(HS)\n");
   FUNC_2(VAR_4);
   break;
  case 133:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = PAN(EDR)\n");
   FUNC_8(VAR_4);
   break;
  case 130:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = HS mode\n");
   FUNC_11(VAR_4);
   break;
  case 132:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = PAN+A2DP\n");
   FUNC_9(VAR_4);
   break;
  case 131:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = PAN(EDR)+HID\n");
   FUNC_10(VAR_4);
   break;
  case 134:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = HID+A2DP+PAN\n");
   FUNC_7(VAR_4);
   break;
  case 135:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = HID+A2DP\n");
   FUNC_6(VAR_4);
   break;
  default:
   FUNC_0(VAR_5, VAR_0, VAR_1,
     "Action 2-Ant, algorithm = unknown!!\n");

   break;
  }
  VAR_2->pre_algorithm = VAR_2->cur_algorithm;
 }
}
