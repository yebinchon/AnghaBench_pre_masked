
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {scalar_t__ mac80211_registered; int hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_priv*) ;

void FUNC_2(struct iwl_priv *VAR_0)
{
 if (!VAR_0->mac80211_registered)
  return;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->hw);
 VAR_0->mac80211_registered = 0;
}
