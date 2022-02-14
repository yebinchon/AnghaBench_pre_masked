
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_ctx_cmd {int ap; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int *,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int *,int) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mac_ctx_cmd*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_2,
       struct ieee80211_vif *VAR_3,
       u32 VAR_4)
{
 struct iwl_mac_ctx_cmd VAR_5 = {};

 FUNC_0(VAR_3->type != VAR_1 || VAR_3->p2p);


 FUNC_1(VAR_2, VAR_3, &VAR_5, ((void*)0), VAR_4);


 FUNC_2(VAR_2, VAR_3, &VAR_5, &VAR_5.ap,
         VAR_4 == VAR_0);

 return FUNC_3(VAR_2, &VAR_5);
}
