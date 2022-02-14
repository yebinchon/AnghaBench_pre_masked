
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int ibss_manager; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct iwl_mvm *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->ibss_manager;
}
