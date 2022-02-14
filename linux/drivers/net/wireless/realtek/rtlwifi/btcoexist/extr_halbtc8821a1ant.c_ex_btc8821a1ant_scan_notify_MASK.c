
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;scalar_t__ stop_coex_dm; scalar_t__ manual_control; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int wifi_is_high_pri_task; scalar_t__ c2h_bt_inquiry_page; scalar_t__ bt_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*,int ,int,int,scalar_t__) ;
 int FUNC_10 (struct btc_coexist*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct btc_coexist*,int ,int,int) ;
 int FUNC_12 (struct btc_coexist*) ;
 TYPE_1__* VAR_10 ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;
 int FUNC_15 (struct btc_coexist*,int ,int*) ;
 int FUNC_16 (struct btc_coexist*,int ,int*) ;

void FUNC_17(struct btc_coexist *VAR_11, u8 VAR_12)
{
 struct rtl_priv *VAR_13 = VAR_11->adapter;
 bool VAR_14 = 0, VAR_15 = 0;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 u8 VAR_20 = 5;

 if (VAR_11->manual_control || VAR_11->stop_coex_dm)
  return;
 VAR_11->btc_get(VAR_11, VAR_2, &VAR_17);
 if (VAR_17) {
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], RunCoexistMechanism(), return for 5G <===\n");
  FUNC_8(VAR_11);
  return;
 }

 if (VAR_12 == VAR_5) {
  VAR_10->wifi_is_high_pri_task = 1;
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], SCAN START notify\n");


  FUNC_11(VAR_11, VAR_8, 0, 8);
 } else {
  VAR_10->wifi_is_high_pri_task = 0;
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], SCAN FINISH notify\n");
 }

 if (VAR_10->bt_disabled)
  return;

 VAR_11->btc_get(VAR_11,
   VAR_0, &VAR_15);
 VAR_11->btc_get(VAR_11,
   VAR_1, &VAR_14);

 FUNC_12(VAR_11);

 VAR_11->btc_get(VAR_11, VAR_3,
      &VAR_18);
 VAR_19 = VAR_18 >> 16;
 if (VAR_19 >= 2) {
  FUNC_10(VAR_11, VAR_9, 0, 0, 0, 0);
  FUNC_9(VAR_11, VAR_9, 0,
     VAR_16, VAR_20);
  FUNC_6(VAR_11);
  return;
 }

 if (VAR_10->c2h_bt_inquiry_page) {
  FUNC_2(VAR_11);
  return;
 } else if (VAR_15) {
  FUNC_3(VAR_11);
  return;
 }

 if (VAR_5 == VAR_12) {
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], SCAN START notify\n");
  if (!VAR_14) {

   FUNC_1(VAR_11);
  } else {

   FUNC_5(VAR_11);
  }
 } else if (VAR_4 == VAR_12) {
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], SCAN FINISH notify\n");
  if (!VAR_14) {

   FUNC_7(VAR_11);
  } else {
   FUNC_4(VAR_11);
  }
 }
}
