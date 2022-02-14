
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long entry_min_undec_sm_pwdb; } ;
struct TYPE_3__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (struct rtl_priv*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,long) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

long FUNC_3(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_3);
 long VAR_5 = 0;

 if (VAR_4->mac80211.link_state >= VAR_2) {
  VAR_5 =
   FUNC_0(VAR_4);
 } else {
  VAR_5
   = VAR_4->dm.entry_min_undec_sm_pwdb;
 }
 FUNC_1(VAR_4, VAR_0, VAR_1,
   "rtl8723e_dm_bt_get_rx_ss() = %ld\n",
   VAR_5);

 return VAR_5;
}
