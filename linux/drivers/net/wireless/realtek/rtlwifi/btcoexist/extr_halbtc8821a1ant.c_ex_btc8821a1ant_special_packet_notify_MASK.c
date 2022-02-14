
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
struct TYPE_3__ {int wifi_is_high_pri_task; scalar_t__ c2h_bt_inquiry_page; scalar_t__ special_pkt_period_cnt; scalar_t__ bt_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int,scalar_t__) ;
 int FUNC_7 (struct btc_coexist*,int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_8 (struct btc_coexist*,int ,int*) ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;

void FUNC_11(struct btc_coexist *VAR_11,
        u8 VAR_12)
{
 struct rtl_priv *VAR_13 = VAR_11->adapter;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u8 VAR_19 = 5;

 if (VAR_11->manual_control || VAR_11->stop_coex_dm ||
     VAR_10->bt_disabled)
  return;

 VAR_11->btc_get(VAR_11, VAR_1, &VAR_16);
 if (VAR_16) {
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], RunCoexistMechanism(), return for 5G <===\n");
  FUNC_5(VAR_11);
  return;
 }

 if (VAR_12 == VAR_4 || VAR_12 == VAR_5 ||
     VAR_12 == VAR_3) {
  VAR_10->wifi_is_high_pri_task = 1;

  if (VAR_12 == VAR_3) {
   FUNC_0(VAR_13, VAR_6, VAR_7,
     "[BTCoex], specific Packet ARP notify\n");
  } else {
   FUNC_0(VAR_13, VAR_6, VAR_7,
     "[BTCoex], specific Packet DHCP or EAPOL notify\n");
  }
 } else {
  VAR_10->wifi_is_high_pri_task = 0;
  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], specific Packet [Type = %d] notify\n",
    VAR_12);
 }

 VAR_10->special_pkt_period_cnt = 0;

 VAR_11->btc_get(VAR_11, VAR_2,
      &VAR_17);
 VAR_18 = VAR_17 >> 16;
 if (VAR_18 >= 2) {
  FUNC_7(VAR_11, VAR_8, 0, 0, 0, 0);
  FUNC_6(VAR_11, VAR_8, 0,
     VAR_15, VAR_19);
  FUNC_4(VAR_11);
  return;
 }

 VAR_11->btc_get(VAR_11, VAR_0, &VAR_14);
 if (VAR_10->c2h_bt_inquiry_page) {
  FUNC_2(VAR_11);
  return;
 } else if (VAR_14) {
  FUNC_3(VAR_11);
  return;
 }

 if (VAR_12 == VAR_4 || VAR_12 == VAR_5 ||
     VAR_12 == VAR_3) {
  if (VAR_12 == VAR_3) {
   VAR_9->arp_cnt++;
   FUNC_0(VAR_13, VAR_6, VAR_7,
     "[BTCoex], ARP Packet Count = %d\n",
     VAR_9->arp_cnt);
   if (VAR_9->arp_cnt >= 10)



    return;
  }

  FUNC_0(VAR_13, VAR_6, VAR_7,
    "[BTCoex], special Packet(%d) notify\n", VAR_12);
  FUNC_1(VAR_11);
 }
}
