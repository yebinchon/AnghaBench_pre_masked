
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct TYPE_3__ {void* opp_ps_enabled; void* ctwin; int ap; } ;
struct iwl_mac_ctx_cmd {TYPE_1__ go; } ;
struct ieee80211_p2p_noa_attr {int oppps_ctwindow; } ;
struct TYPE_4__ {struct ieee80211_p2p_noa_attr p2p_noa_attr; } ;
struct ieee80211_vif {scalar_t__ type; int p2p; TYPE_2__ bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int *,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_ctx_cmd*,int *,int) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mac_ctx_cmd*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_4,
       struct ieee80211_vif *VAR_5,
       u32 VAR_6)
{
 struct iwl_mac_ctx_cmd VAR_7 = {};
 struct ieee80211_p2p_noa_attr *VAR_8 = &VAR_5->bss_conf.p2p_noa_attr;

 FUNC_0(VAR_5->type != VAR_3 || !VAR_5->p2p);


 FUNC_2(VAR_4, VAR_5, &VAR_7, ((void*)0), VAR_6);


 FUNC_3(VAR_4, VAR_5, &VAR_7, &VAR_7.go.ap,
         VAR_6 == VAR_0);

 VAR_7.go.ctwin = FUNC_1(VAR_8->oppps_ctwindow &
     VAR_1);
 VAR_7.go.opp_ps_enabled =
   FUNC_1(!!(VAR_8->oppps_ctwindow &
     VAR_2));

 return FUNC_4(VAR_4, &VAR_7);
}
