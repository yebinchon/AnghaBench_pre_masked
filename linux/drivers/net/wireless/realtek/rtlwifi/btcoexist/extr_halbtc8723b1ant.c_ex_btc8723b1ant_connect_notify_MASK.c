
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;scalar_t__ stop_coex_dm; scalar_t__ manual_control; struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__ arp_cnt; } ;
struct TYPE_3__ {int wifi_is_high_pri_task; scalar_t__ c2h_bt_inquiry_page; scalar_t__ bt_disabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 TYPE_2__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int,scalar_t__) ;
 int FUNC_8 (struct btc_coexist*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct btc_coexist*,int ,int,int) ;
 int FUNC_10 (struct btc_coexist*,int ,int ,int,int) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;
 int FUNC_12 (struct btc_coexist*,int ,int*) ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;

void FUNC_15(struct btc_coexist *VAR_13, u8 VAR_14)
{
 struct rtl_priv *VAR_15 = VAR_13->adapter;
 bool VAR_16 = 0, VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 bool VAR_20 = 0, VAR_21 = 0;
 u8 VAR_22 = 5;

 VAR_13->btc_get(VAR_13, VAR_4,
      &VAR_21);

 if (VAR_13->manual_control || VAR_13->stop_coex_dm ||
     VAR_12->bt_disabled)
  return;

 if (VAR_14 == VAR_2) {
  VAR_12->wifi_is_high_pri_task = 1;


  FUNC_9(VAR_13, VAR_9, 0, 8);
  FUNC_10(VAR_13, VAR_0,
          VAR_9, 0, 0);
  FUNC_0(VAR_15, VAR_7, VAR_8,
    "[BTCoex], CONNECT START notify\n");
  VAR_11->arp_cnt = 0;
 } else {
  VAR_12->wifi_is_high_pri_task = 0;
  FUNC_0(VAR_15, VAR_7, VAR_8,
    "[BTCoex], CONNECT FINISH notify\n");
 }

 VAR_13->btc_get(VAR_13, VAR_6,
      &VAR_18);
 VAR_19 = VAR_18>>16;
 if (VAR_19 >= 2) {
  FUNC_8(VAR_13, VAR_10, 0, 0, 0, 0);
  FUNC_7(VAR_13, VAR_10, 0,
        VAR_20, VAR_22);
  FUNC_6(VAR_13);
  return;
 }

 VAR_13->btc_get(VAR_13, VAR_3, &VAR_17);
 if (VAR_12->c2h_bt_inquiry_page) {
  FUNC_3(VAR_13);
  return;
 } else if (VAR_17) {
  FUNC_4(VAR_13);
  return;
 }

 if (VAR_2 == VAR_14) {
  FUNC_0(VAR_15, VAR_7, VAR_8,
    "[BTCoex], CONNECT START notify\n");
  FUNC_1(VAR_13);
 } else if (VAR_1 == VAR_14) {
  FUNC_0(VAR_15, VAR_7, VAR_8,
    "[BTCoex], CONNECT FINISH notify\n");

  VAR_13->btc_get(VAR_13, VAR_5,
       &VAR_16);
  if (!VAR_16)

   FUNC_2(VAR_13);
  else
   FUNC_5(VAR_13);
 }
}
