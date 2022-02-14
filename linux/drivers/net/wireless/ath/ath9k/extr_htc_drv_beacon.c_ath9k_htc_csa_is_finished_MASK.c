
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int csa_active; } ;
struct ath9k_htc_priv {struct ieee80211_vif* csa_vif; } ;


 int FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (struct ieee80211_vif*) ;

bool FUNC_2(struct ath9k_htc_priv *VAR_0)
{
 struct ieee80211_vif *VAR_1;

 VAR_1 = VAR_0->csa_vif;
 if (!VAR_1 || !VAR_1->csa_active)
  return 0;

 if (!FUNC_1(VAR_1))
  return 0;

 FUNC_0(VAR_1);

 VAR_0->csa_vif = ((void*)0);
 return 1;
}
