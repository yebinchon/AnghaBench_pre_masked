
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum iwl_mvm_traffic_load { ____Placeholder_iwl_mvm_traffic_load } iwl_mvm_traffic_load ;
typedef enum iwl_mvm_scan_type { ____Placeholder_iwl_mvm_scan_type } iwl_mvm_scan_type ;


 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*) ;

__attribute__((used)) static enum
iwl_mvm_scan_type FUNC_3(struct iwl_mvm *VAR_0,
     struct ieee80211_vif *VAR_1)
{
 enum iwl_mvm_traffic_load VAR_2;
 bool VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_0);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
