
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {int uploaded; int probe_resp_data; int bf_data; int * phy_ctxt; int time_event_data; int ap_sta_id; } ;
struct iwl_mvm {int time_event_lock; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,int *) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, u8 *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm *VAR_4 = VAR_1;
 struct iwl_mvm_vif *VAR_5 = FUNC_1(VAR_3);

 VAR_5->uploaded = 0;
 VAR_5->ap_sta_id = VAR_0;

 FUNC_3(&VAR_4->time_event_lock);
 FUNC_0(VAR_4, &VAR_5->time_event_data);
 FUNC_4(&VAR_4->time_event_lock);

 VAR_5->phy_ctxt = ((void*)0);
 FUNC_2(&VAR_5->bf_data, 0, sizeof(VAR_5->bf_data));
 FUNC_2(&VAR_5->probe_resp_data, 0, sizeof(VAR_5->probe_resp_data));
}
