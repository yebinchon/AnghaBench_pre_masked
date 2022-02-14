
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->mac80211.mode == VAR_0)
  return 1;

 return 0;
}
