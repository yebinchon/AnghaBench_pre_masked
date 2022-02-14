
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int rts_threshold; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0, u32 VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_0);

 VAR_2->rts_threshold = VAR_1;

 return 0;
}
