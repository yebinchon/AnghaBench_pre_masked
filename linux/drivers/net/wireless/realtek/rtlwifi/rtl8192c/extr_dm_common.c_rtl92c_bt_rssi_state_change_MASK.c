
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int bt_rssi_state; } ;
struct TYPE_5__ {long entry_min_undec_sm_pwdb; } ;
struct TYPE_4__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_3__ btcoexist; TYPE_2__ dm; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (struct rtl_priv*) ;
 scalar_t__ VAR_4 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

u8 FUNC_2(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 long VAR_7;
 u8 VAR_8 = 0x00;

 if (VAR_6->mac80211.link_state == VAR_4) {
  VAR_7 = FUNC_0(VAR_6);
 } else {
  if (VAR_6->dm.entry_min_undec_sm_pwdb == 0)
   VAR_7 = 100;
  else
   VAR_7 = VAR_6->dm.entry_min_undec_sm_pwdb;
 }



 if (VAR_7 >= 67)
  VAR_8 &= (~VAR_2);
 else if (VAR_7 < 62)
  VAR_8 |= VAR_2;


 if (VAR_7 >= 40)
  VAR_8 &= (~VAR_0);
 else if (VAR_7 <= 32)
  VAR_8 |= VAR_0;



 if (VAR_7 < 35)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= (~VAR_3);


 if (VAR_7 < 15)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= (~VAR_1);

 if (VAR_8 != VAR_6->btcoexist.bt_rssi_state) {
  VAR_6->btcoexist.bt_rssi_state = VAR_8;
  return 1;
 } else {
  return 0;
 }
}
