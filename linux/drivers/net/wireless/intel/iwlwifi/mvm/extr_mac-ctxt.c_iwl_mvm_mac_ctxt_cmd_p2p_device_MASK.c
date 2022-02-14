
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm_go_iterator_data {scalar_t__ go_active; } ;
struct iwl_mvm {int hw; } ;
struct TYPE_2__ {void* is_disc_extended; } ;
struct iwl_mac_ctx_cmd {TYPE_1__ p2p_dev; void* filter_flags; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,struct iwl_mvm_go_iterator_data*) ;
 int VAR_3 ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int *,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mac_ctx_cmd*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_4,
        struct ieee80211_vif *VAR_5,
        u32 VAR_6)
{
 struct iwl_mac_ctx_cmd VAR_7 = {};
 struct iwl_mvm_go_iterator_data VAR_8 = {};

 FUNC_0(VAR_5->type != VAR_2);

 FUNC_3(VAR_4, VAR_5, &VAR_7, ((void*)0), VAR_6);


 VAR_7.filter_flags = FUNC_1(VAR_1);
 FUNC_2(
  VAR_4->hw, VAR_0,
  VAR_3, &VAR_8);

 VAR_7.p2p_dev.is_disc_extended = FUNC_1(VAR_8.go_active ? 1 : 0);
 return FUNC_4(VAR_4, &VAR_7);
}
