
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int last_bt_coex_event; int bt_coex_min_thold; int bt_coex_max_thold; } ;
struct iwl_mvm_vif {TYPE_1__ bf_data; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static inline
void FUNC_1(struct iwl_mvm *VAR_2,
           struct ieee80211_vif *VAR_3,
           bool VAR_4, int VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_0(VAR_3);

 VAR_6->bf_data.last_bt_coex_event = VAR_5;
 VAR_6->bf_data.bt_coex_max_thold =
  VAR_4 ? -VAR_1 : 0;
 VAR_6->bf_data.bt_coex_min_thold =
  VAR_4 ? -VAR_0 : 0;
}
