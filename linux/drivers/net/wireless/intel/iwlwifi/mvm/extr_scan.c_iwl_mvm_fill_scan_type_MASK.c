
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_scan_params {void* type; void* hb_type; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*) ;
 void* FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_2,
       struct iwl_mvm_scan_params *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 if (FUNC_2(VAR_2)) {
  VAR_3->type =
   FUNC_1(VAR_2, VAR_4,
         VAR_0);
  VAR_3->hb_type =
   FUNC_1(VAR_2, VAR_4,
         VAR_1);
 } else {
  VAR_3->type = FUNC_0(VAR_2, VAR_4);
 }
}
