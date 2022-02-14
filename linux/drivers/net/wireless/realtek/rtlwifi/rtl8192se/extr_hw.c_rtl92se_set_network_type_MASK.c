
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

int FUNC_3(struct ieee80211_hw *VAR_3, enum nl80211_iftype VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_3, VAR_4))
  return -VAR_0;

 if (VAR_5->mac80211.link_state == VAR_1) {
  if (VAR_4 != VAR_2)
   FUNC_1(VAR_3, 1);
 } else {
  FUNC_1(VAR_3, 0);
 }

 return 0;
}
