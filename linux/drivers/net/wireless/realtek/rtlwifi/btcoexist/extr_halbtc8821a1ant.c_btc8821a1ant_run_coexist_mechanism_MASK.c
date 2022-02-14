
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_bt_link_info {scalar_t__ pan_exist; scalar_t__ a2dp_exist; scalar_t__ hid_exist; scalar_t__ sco_exist; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_set ) (struct btc_coexist*,int ,int*) ;scalar_t__ stop_coex_dm; scalar_t__ manual_control; struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__ bt_status; } ;
struct TYPE_3__ {scalar_t__ c2h_bt_inquiry_page; scalar_t__ under_ips; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_15 ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int ,int,int,int ,int) ;
 int FUNC_11 (struct btc_coexist*) ;
 int FUNC_12 (struct btc_coexist*,int,int,int,int ) ;
 TYPE_2__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;
 int FUNC_15 (struct btc_coexist*,int ,int*) ;
 int FUNC_16 (struct btc_coexist*,int ,int*) ;
 int FUNC_17 (struct btc_coexist*,int ,int*) ;
 int FUNC_18 (struct btc_coexist*,int ,int*) ;
 int FUNC_19 (struct btc_coexist*,int ,int*) ;
 int FUNC_20 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_21(struct btc_coexist *VAR_18)
{
 struct rtl_priv *VAR_19 = VAR_18->adapter;
 struct btc_bt_link_info *VAR_20 = &VAR_18->bt_link_info;
 bool VAR_21 = 0, VAR_22 = 0;
 bool VAR_23 = 0;
 bool VAR_24 = 0;
 u8 VAR_25 = 5;
 u8 VAR_26 = VAR_7;
 u32 VAR_27 = 0;
 u32 VAR_28 = 0;
 bool VAR_29 = 0;

 FUNC_0(VAR_19, VAR_12, VAR_13,
   "[BTCoex], RunCoexistMechanism()===>\n");

 if (VAR_18->manual_control) {
  FUNC_0(VAR_19, VAR_12, VAR_13,
    "[BTCoex], RunCoexistMechanism(), return for Manual CTRL <===\n");
  return;
 }

 if (VAR_18->stop_coex_dm) {
  FUNC_0(VAR_19, VAR_12, VAR_13,
    "[BTCoex], RunCoexistMechanism(), return for Stop Coex DM <===\n");
  return;
 }

 if (VAR_17->under_ips) {
  FUNC_0(VAR_19, VAR_12, VAR_13,
    "[BTCoex], wifi is under IPS !!!\n");
  return;
 }

 VAR_18->btc_get(VAR_18, VAR_5, &VAR_29);
 if (VAR_29) {
  FUNC_0(VAR_19, VAR_12, VAR_13,
    "[BTCoex], RunCoexistMechanism(), return for 5G <===\n");
  FUNC_8(VAR_18);
  return;
 }

 if ((VAR_9 == VAR_16->bt_status) ||
     (VAR_11 == VAR_16->bt_status) ||
     (VAR_10 == VAR_16->bt_status))
  VAR_23 = 1;

 VAR_18->btc_set(VAR_18, VAR_8,
      &VAR_23);

 VAR_18->btc_get(VAR_18, VAR_1,
      &VAR_21);

 VAR_18->btc_get(VAR_18, VAR_6,
      &VAR_27);
 VAR_28 = VAR_27 >> 16;
 if ((VAR_28 >= 2) ||
     (VAR_27 & VAR_15)) {
  FUNC_10(VAR_18, VAR_14, 0, 0, 0, 0);
  FUNC_9(VAR_18, VAR_14, 0,
     VAR_24, VAR_25);
  FUNC_5(VAR_18);
  return;
 }

 if (!VAR_20->sco_exist && !VAR_20->hid_exist) {
  FUNC_10(VAR_18, VAR_14, 0, 0, 0, 0);
 } else {
  if (VAR_21) {
   VAR_26 =
    FUNC_12(VAR_18, 1, 2,
            30, 0);
   FUNC_10(VAR_18,
      VAR_14, 1, 1,
      0, 1);
  } else {
   FUNC_10(VAR_18, VAR_14,
      0, 0, 0, 0);
  }
 }

 if (VAR_20->sco_exist) {
  VAR_24 = 1;
  VAR_25 = 0x3;
 } else if (VAR_20->hid_exist) {
  VAR_24 = 1;
  VAR_25 = 0x5;
 } else if (VAR_20->a2dp_exist || VAR_20->pan_exist) {
  VAR_24 = 1;
  VAR_25 = 0x8;
 }
 FUNC_9(VAR_18, VAR_14, 0,
    VAR_24, VAR_25);

 FUNC_11(VAR_18);

 VAR_18->btc_get(VAR_18, VAR_0, &VAR_22);
 if (VAR_17->c2h_bt_inquiry_page) {
  FUNC_2(VAR_18);
  return;
 } else if (VAR_22) {
  FUNC_3(VAR_18);
  return;
 }

 if (!VAR_21) {
  bool VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;

  FUNC_0(VAR_19, VAR_12, VAR_13,
    "[BTCoex], wifi is non connected-idle !!!\n");

  VAR_18->btc_get(VAR_18, VAR_4, &VAR_30);
  VAR_18->btc_get(VAR_18, VAR_2, &VAR_31);
  VAR_18->btc_get(VAR_18, VAR_3, &VAR_32);

  if (VAR_30 || VAR_31 || VAR_32) {
   if (VAR_30)
    FUNC_1(VAR_18);
   else
    FUNC_7(
     VAR_18);
  } else {
   FUNC_6(VAR_18);
  }
 } else {

  FUNC_4(VAR_18);
 }
}
