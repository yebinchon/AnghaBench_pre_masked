
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int* smps_requests; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
typedef enum iwl_mvm_smps_type_request { ____Placeholder_iwl_mvm_smps_type_request } iwl_mvm_smps_type_request ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_vif*,int) ;
 int FUNC_1 (struct iwl_mvm*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct iwl_mvm *VAR_6, struct ieee80211_vif *VAR_7,
    enum iwl_mvm_smps_type_request VAR_8,
    enum ieee80211_smps_mode VAR_9)
{
 struct iwl_mvm_vif *VAR_10;
 enum ieee80211_smps_mode VAR_11;
 int VAR_12;

 FUNC_3(&VAR_6->mutex);


 if (FUNC_4(FUNC_1(VAR_6)) == 1)
  return;

 if (VAR_7->type == VAR_4)
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_0;

 VAR_10 = FUNC_2(VAR_7);
 VAR_10->smps_requests[VAR_8] = VAR_9;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (VAR_10->smps_requests[VAR_12] == VAR_3) {
   VAR_11 = VAR_3;
   break;
  }
  if (VAR_10->smps_requests[VAR_12] == VAR_1)
   VAR_11 = VAR_1;
 }

 FUNC_0(VAR_7, VAR_11);
}
