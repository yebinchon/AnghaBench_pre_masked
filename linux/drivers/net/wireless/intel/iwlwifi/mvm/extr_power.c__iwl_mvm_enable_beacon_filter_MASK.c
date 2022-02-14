
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bf_enabled; } ;
struct iwl_mvm_vif {TYPE_1__ bf_data; } ;
struct iwl_mvm {struct iwl_mvm_vif* bf_allowed_vif; } ;
struct iwl_beacon_filter_cmd {int dummy; } ;
struct TYPE_4__ {int dtim_period; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; TYPE_2__ bss_conf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_vif*,struct iwl_beacon_filter_cmd*) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_beacon_filter_cmd*,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_beacon_filter_cmd*) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_1,
      struct ieee80211_vif *VAR_2,
      struct iwl_beacon_filter_cmd *VAR_3,
      u32 VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 if (VAR_5 != VAR_1->bf_allowed_vif || !VAR_2->bss_conf.dtim_period ||
     VAR_2->type != VAR_0 || VAR_2->p2p)
  return 0;

 FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_3);
 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4);

 if (!VAR_6)
  VAR_5->bf_data.bf_enabled = 1;

 return VAR_6;
}
