
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,scalar_t__*) ;int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;scalar_t__ stop_coex_dm; scalar_t__ manual_control; struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__* wifi_chnl_info; scalar_t__ arp_cnt; } ;
struct TYPE_3__ {scalar_t__ bt_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*) ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_4 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_5 (struct btc_coexist*,int,int,scalar_t__*) ;

void FUNC_6(struct btc_coexist *VAR_9,
      u8 VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_9->adapter;
 u8 VAR_12[3] = {0};
 u32 VAR_13;
 u8 VAR_14;
 bool VAR_15 = 0;

 if (VAR_9->manual_control || VAR_9->stop_coex_dm ||
     VAR_8->bt_disabled)
  return;
 VAR_9->btc_get(VAR_9, VAR_0, &VAR_15);
 if (VAR_15) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], RunCoexistMechanism(), return for 5G <===\n");
  FUNC_1(VAR_9);
  return;
 }

 if (VAR_3 == VAR_10) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], MEDIA connect notify\n");
 } else {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], MEDIA disconnect notify\n");
  VAR_7->arp_cnt = 0;
 }


 VAR_9->btc_get(VAR_9,
      VAR_1,
      &VAR_14);
 if ((VAR_10 == VAR_3) &&
     (VAR_14 <= 14)) {
  VAR_12[0] = 0x0;
  VAR_12[1] = VAR_14;
  VAR_9->btc_get(VAR_9, VAR_2, &VAR_13);
  if (VAR_13 == VAR_4)
   VAR_12[2] = 0x30;
  else
   VAR_12[2] = 0x20;
 }

 VAR_7->wifi_chnl_info[0] = VAR_12[0];
 VAR_7->wifi_chnl_info[1] = VAR_12[1];
 VAR_7->wifi_chnl_info[2] = VAR_12[2];

 FUNC_0(VAR_11, VAR_5, VAR_6,
   "[BTCoex], FW write 0x66 = 0x%x\n",
   VAR_12[0] << 16 |
   VAR_12[1] << 8 |
   VAR_12[2]);

 VAR_9->btc_fill_h2c(VAR_9, 0x66, 3, VAR_12);
}
