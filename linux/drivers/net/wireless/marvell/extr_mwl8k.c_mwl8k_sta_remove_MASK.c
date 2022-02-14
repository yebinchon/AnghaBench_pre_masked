
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {scalar_t__ ap_fw; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0,
       struct ieee80211_vif *VAR_1,
       struct ieee80211_sta *VAR_2)
{
 struct mwl8k_priv *VAR_3 = VAR_0->priv;

 if (VAR_3->ap_fw)
  return FUNC_0(VAR_0, VAR_1, VAR_2->addr);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2->addr);
}
