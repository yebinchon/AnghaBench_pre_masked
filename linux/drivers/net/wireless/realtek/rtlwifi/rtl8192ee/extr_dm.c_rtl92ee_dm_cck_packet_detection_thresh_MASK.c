
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int cnt_cck_fail; } ;
struct TYPE_4__ {scalar_t__ link_state; } ;
struct dig_t {int rssi_val_min; } ;
struct rtl_priv {TYPE_1__ falsealm_cnt; TYPE_2__ mac80211; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_1);
 struct dig_t *VAR_3 = &VAR_2->dm_digtable;
 u8 VAR_4;

 if (VAR_2->mac80211.link_state >= VAR_0) {
  if (VAR_3->rssi_val_min > 25) {
   VAR_4 = 0xcd;
  } else if ((VAR_3->rssi_val_min <= 25) &&
      (VAR_3->rssi_val_min > 10)) {
   VAR_4 = 0x83;
  } else {
   if (VAR_2->falsealm_cnt.cnt_cck_fail > 1000)
    VAR_4 = 0x83;
   else
    VAR_4 = 0x40;
  }
 } else {
  if (VAR_2->falsealm_cnt.cnt_cck_fail > 1000)
   VAR_4 = 0x83;
  else
   VAR_4 = 0x40;
 }
 FUNC_0(VAR_1, VAR_4);
}
