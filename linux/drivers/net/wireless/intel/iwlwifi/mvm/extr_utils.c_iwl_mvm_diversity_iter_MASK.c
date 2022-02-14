
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {scalar_t__* smps_requests; } ;
struct ieee80211_vif {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_3, u8 *VAR_4,
       struct ieee80211_vif *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_0(VAR_5);
 bool *VAR_7 = VAR_3;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_6->smps_requests[VAR_8] == VAR_1 ||
      VAR_6->smps_requests[VAR_8] == VAR_0)
   *VAR_7 = 0;
 }
}
