
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_read_4byte ) (struct btc_coexist*,int) ;scalar_t__ (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;scalar_t__ stop_coex_dm; scalar_t__ manual_control; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int wifi_is_high_pri_task; int scan_ap_num; scalar_t__ c2h_bt_inquiry_page; scalar_t__ bt_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*) ;
 int FUNC_8 (struct btc_coexist*,int ,int,int,scalar_t__) ;
 int FUNC_9 (struct btc_coexist*,int ,int ,int ,int ,int ) ;
 int FUNC_10 (struct btc_coexist*,int ,int,int) ;
 int FUNC_11 (struct btc_coexist*) ;
 int FUNC_12 (struct btc_coexist*,int ,int ,int,int) ;
 int FUNC_13 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_14 (struct btc_coexist*,int) ;
 scalar_t__ FUNC_15 (struct btc_coexist*,int) ;
 int FUNC_16 (struct btc_coexist*,int ,int*) ;
 int FUNC_17 (struct btc_coexist*,int ,int*) ;
 int FUNC_18 (struct btc_coexist*,int ,int*) ;
 int FUNC_19 (struct btc_coexist*,int ,int*) ;

void FUNC_20(struct btc_coexist *VAR_12, u8 VAR_13)
{
 struct rtl_priv *VAR_14 = VAR_12->adapter;
 bool VAR_15 = 0, VAR_16 = 0;
 u8 VAR_17, VAR_18;
 u32 VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 bool VAR_22 = 0;
 u8 VAR_23 = 5;

 if (VAR_12->manual_control || VAR_12->stop_coex_dm)
  return;

 if (VAR_13 == VAR_6) {
  VAR_11->wifi_is_high_pri_task = 1;
  FUNC_0(VAR_14, VAR_7, VAR_8,
    "[BTCoex], SCAN START notify\n");

  FUNC_10(VAR_12, VAR_9, 0, 8);
  FUNC_12(VAR_12, VAR_0,
          VAR_9, 0, 0);
  VAR_19 = VAR_12->btc_read_4byte(VAR_12, 0x948);
  VAR_17 = VAR_12->btc_read_1byte(VAR_12, 0x765);
  VAR_18 = VAR_12->btc_read_1byte(VAR_12, 0x67);

  FUNC_0(VAR_14, VAR_7, VAR_8,
    "[BTCoex], 0x948=0x%x, 0x765=0x%x, 0x67=0x%x\n",
    VAR_19, VAR_17, VAR_18);
 } else {
  VAR_11->wifi_is_high_pri_task = 0;
  FUNC_0(VAR_14, VAR_7, VAR_8,
    "[BTCoex], SCAN FINISH notify\n");

  VAR_12->btc_get(VAR_12, VAR_3,
       &VAR_11->scan_ap_num);
 }

 if (VAR_11->bt_disabled)
  return;

 VAR_12->btc_get(VAR_12, VAR_1, &VAR_16);
 VAR_12->btc_get(VAR_12, VAR_2,
      &VAR_15);

 FUNC_11(VAR_12);

 VAR_12->btc_get(VAR_12, VAR_4,
      &VAR_20);
 VAR_21 = VAR_20 >> 16;
 if (VAR_21 >= 2) {
  FUNC_9(VAR_12, VAR_10, 0, 0, 0, 0);
  FUNC_8(VAR_12, VAR_10, 0,
        VAR_22, VAR_23);
  FUNC_7(VAR_12);
  return;
 }

 if (VAR_11->c2h_bt_inquiry_page) {
  FUNC_4(VAR_12);
  return;
 } else if (VAR_16) {
  FUNC_5(VAR_12);
  return;
 }

 if (VAR_6 == VAR_13) {
  FUNC_0(VAR_14, VAR_7, VAR_8,
    "[BTCoex], SCAN START notify\n");
  if (!VAR_15)

   FUNC_3(VAR_12);
  else

   FUNC_1(VAR_12);
 } else if (VAR_5 == VAR_13) {
  FUNC_0(VAR_14, VAR_7, VAR_8,
    "[BTCoex], SCAN FINISH notify\n");
  if (!VAR_15)

   FUNC_2(VAR_12);
  else
   FUNC_6(VAR_12);
 }
}
