
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {int is_active; int always_active; } ;
struct iwl_priv {int last_bt_traffic_load; int bt_traffic_load; struct ieee80211_vif* scan_vif; int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_priv*) ;
 struct iwl_rxon_context* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_priv*,int) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_1,
       struct ieee80211_vif *VAR_2,
       bool VAR_3)
{
 struct iwl_rxon_context *VAR_4 = FUNC_1(VAR_2);

 FUNC_4(&VAR_1->mutex);

 if (VAR_1->scan_vif == VAR_2) {
  FUNC_2(VAR_1, 200);
  FUNC_0(VAR_1);
 }

 if (!VAR_3) {
  FUNC_3(VAR_1, VAR_4);
  if (!VAR_4->always_active)
   VAR_4->is_active = 0;
 }
 if (VAR_2->type == VAR_0)
  VAR_1->bt_traffic_load = VAR_1->last_bt_traffic_load;
}
