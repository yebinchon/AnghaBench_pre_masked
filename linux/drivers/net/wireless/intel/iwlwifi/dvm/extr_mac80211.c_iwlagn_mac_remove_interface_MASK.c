
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {struct ieee80211_vif* vif; } ;
struct iwl_priv {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int) ;
 struct iwl_rxon_context* FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_priv*,struct ieee80211_vif*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct iwl_priv *VAR_2 = FUNC_1(VAR_0);
 struct iwl_rxon_context *VAR_3 = FUNC_3(VAR_1);

 FUNC_0(VAR_2, "enter\n");

 FUNC_5(&VAR_2->mutex);

 FUNC_2(VAR_3->vif != VAR_1);
 VAR_3->vif = ((void*)0);

 FUNC_4(VAR_2, VAR_1, 0);

 FUNC_6(&VAR_2->mutex);

 FUNC_0(VAR_2, "leave\n");

}
