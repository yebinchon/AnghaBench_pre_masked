
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {scalar_t__ dbgfs_quota_min; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8 *VAR_2,
      struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_0(VAR_3);
 int *VAR_5 = VAR_1;

 if (VAR_4->dbgfs_quota_min)
  *VAR_5 = -VAR_0;
}
