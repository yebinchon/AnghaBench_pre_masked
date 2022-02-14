
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

int FUNC_4(struct ieee80211_hw *VAR_5, enum nl80211_iftype VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_3(VAR_5);

 FUNC_0(VAR_7, VAR_0, VAR_1, "rtl8821ae_set_network_type!\n");

 if (FUNC_1(VAR_5, VAR_6))
  return -VAR_2;

 if (VAR_7->mac80211.link_state == VAR_3) {
  if (VAR_6 != VAR_4)
   FUNC_2(VAR_5, 1);
 } else {
  FUNC_2(VAR_5, 0);
 }

 return 0;
}
