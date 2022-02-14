
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int bf_enabled; } ;
struct iwl_mvm_vif {TYPE_1__ bf_data; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_beacon_filter_cmd {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct iwl_beacon_filter_cmd*,int ) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_1,
       struct ieee80211_vif *VAR_2,
       u32 VAR_3)
{
 struct iwl_beacon_filter_cmd VAR_4 = {};
 struct iwl_mvm_vif *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (VAR_2->type != VAR_0 || VAR_2->p2p)
  return 0;

 VAR_6 = FUNC_0(VAR_1, &VAR_4, VAR_3);

 if (!VAR_6)
  VAR_5->bf_data.bf_enabled = 0;

 return VAR_6;
}
