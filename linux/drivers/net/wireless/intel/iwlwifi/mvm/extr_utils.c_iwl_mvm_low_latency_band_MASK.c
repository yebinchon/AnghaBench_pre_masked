
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_low_latency_iter {int* result_per_band; } ;
struct iwl_mvm {int hw; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct iwl_mvm_low_latency_iter*) ;
 int VAR_1 ;

bool FUNC_1(struct iwl_mvm *VAR_2, enum nl80211_band VAR_3)
{
 struct iwl_mvm_low_latency_iter VAR_4 = {};

 FUNC_0(
   VAR_2->hw, VAR_0,
   VAR_1, &VAR_4);

 return VAR_4.result_per_band[VAR_3];
}
