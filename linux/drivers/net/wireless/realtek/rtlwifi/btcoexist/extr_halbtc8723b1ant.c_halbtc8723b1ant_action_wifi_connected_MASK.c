
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct TYPE_4__ {scalar_t__ a2dp_only; int hid_only; } ;
struct btc_coexist {TYPE_1__ bt_link_info; int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_6__ {scalar_t__ bt_status; } ;
struct TYPE_5__ {scalar_t__ scan_ap_num; int hid_exist; int a2dp_exist; int pan_exist; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ) ;
 int FUNC_2 (struct btc_coexist*) ;
 TYPE_3__* VAR_18 ;
 TYPE_2__* VAR_19 ;
 int FUNC_3 (struct btc_coexist*,int ) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*,int ,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int ,int ,int,int) ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;
 int FUNC_12 (struct btc_coexist*,int ,int*) ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_15(struct btc_coexist *VAR_20)
{
 struct rtl_priv *VAR_21 = VAR_20->adapter;
 bool VAR_22 = 0;
 bool VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 bool VAR_26 = 0, VAR_27 = 0;

 FUNC_0(VAR_21, VAR_15, VAR_16,
   "[BTCoex], CoexForWifiConnect()===>\n");

 VAR_20->btc_get(VAR_20, VAR_1,
      &VAR_26);
 if (VAR_26) {
  FUNC_4(VAR_20);
  FUNC_0(VAR_21, VAR_15, VAR_16,
    "[BTCoex], CoexForWifiConnect(), return for wifi is under 4way<===\n");
  return;
 }

 VAR_20->btc_get(VAR_20, VAR_6, &VAR_23);
 VAR_20->btc_get(VAR_20, VAR_4, &VAR_24);
 VAR_20->btc_get(VAR_20, VAR_5, &VAR_25);

 if (VAR_23 || VAR_24 || VAR_25) {
  if (VAR_23)
   FUNC_2(VAR_20);
  else
   FUNC_4(
             VAR_20);
  FUNC_0(VAR_21, VAR_15, VAR_16,
    "[BTCoex], CoexForWifiConnect(), return for wifi is under scan<===\n");
  return;
 }

 VAR_20->btc_get(VAR_20, VAR_2,
      &VAR_27);
 VAR_20->btc_get(VAR_20, VAR_3, &VAR_22);

 if (!VAR_27 &&
     VAR_18->bt_status == VAR_9 &&
     !VAR_20->bt_link_info.hid_only) {
  if (VAR_20->bt_link_info.a2dp_only) {
   if (!VAR_22) {
    FUNC_6(VAR_20,
        VAR_8,
        0x0, 0x0);
   } else {
    if (VAR_19->scan_ap_num >=
        VAR_12)



     FUNC_6(
      VAR_20, VAR_8,
      0x0, 0x0);
    else
     FUNC_6(
      VAR_20, VAR_7, 0x50,
      0x4);
   }
  } else if ((!VAR_19->pan_exist) && (!VAR_19->a2dp_exist) &&
      (!VAR_19->hid_exist))
   FUNC_6(
    VAR_20, VAR_8, 0x0, 0x0);
  else
   FUNC_6(VAR_20,
        VAR_7,
        0x50, 0x4);
 } else {
  FUNC_6(VAR_20, VAR_8,
       0x0, 0x0);
 }

 if (!VAR_22) {
  if (VAR_18->bt_status == VAR_9) {
   FUNC_3(
    VAR_20,
    VAR_14);
  } else if (VAR_18->bt_status ==
    VAR_11 ||
      VAR_18->bt_status ==
    VAR_10) {
   FUNC_1(VAR_20,
         VAR_14);
  } else {
   FUNC_7(VAR_20, VAR_17,
      0, 8);
   FUNC_8(VAR_20,
           VAR_0,
           VAR_17, 0, 0);
   FUNC_5(VAR_20,
            VAR_17, 2);
  }
 } else {
  if (VAR_18->bt_status == VAR_9) {
   FUNC_3(
    VAR_20,
    VAR_13);
  } else if (VAR_18->bt_status ==
    VAR_11 ||
      VAR_18->bt_status ==
    VAR_10) {
   FUNC_1(VAR_20,
        VAR_13);
  } else {
   FUNC_7(VAR_20, VAR_17,
      1, 32);
   FUNC_8(VAR_20,
           VAR_0,
           VAR_17, 0, 0);
   FUNC_5(VAR_20,
            VAR_17, 4);
  }
 }
}
