
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ath9k_htc_priv {struct ieee80211_vif* csa_vif; } ;


 scalar_t__ FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         struct cfg80211_chan_def *VAR_2)
{
 struct ath9k_htc_priv *VAR_3 = VAR_0->priv;


 if (FUNC_0(VAR_3->csa_vif))
  return;

 VAR_3->csa_vif = VAR_1;
}
