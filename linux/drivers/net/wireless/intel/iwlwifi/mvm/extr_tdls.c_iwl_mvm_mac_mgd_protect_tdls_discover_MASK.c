
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {int mutex; } ;
struct TYPE_2__ {int dtim_period; int beacon_int; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ieee80211_hw *VAR_0,
        struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = 2 * VAR_1->bss_conf.dtim_period * VAR_1->bss_conf.beacon_int;

 FUNC_2(&VAR_2->mutex);

 FUNC_1(VAR_2, VAR_1, VAR_3, VAR_3, 100, 1);
 FUNC_3(&VAR_2->mutex);
}
