
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm_vif {int id; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_4__ {void* beacon_template; void* bi; } ;
struct iwl_mac_ctx_cmd {TYPE_2__ ibss; void* filter_flags; } ;
struct TYPE_3__ {int beacon_int; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int *,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mac_ctx_cmd*) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_4,
         struct ieee80211_vif *VAR_5,
         u32 VAR_6)
{
 struct iwl_mvm_vif *VAR_7 = FUNC_4(VAR_5);
 struct iwl_mac_ctx_cmd VAR_8 = {};

 FUNC_0(VAR_5->type != VAR_3);

 FUNC_2(VAR_4, VAR_5, &VAR_8, ((void*)0), VAR_6);

 VAR_8.filter_flags = FUNC_1(VAR_1 |
           VAR_2 |
           VAR_0);


 VAR_8.ibss.bi = FUNC_1(VAR_5->bss_conf.beacon_int);


 VAR_8.ibss.beacon_template = FUNC_1(VAR_7->id);

 return FUNC_3(VAR_4, &VAR_8);
}
