
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {struct iwl_mvm_phy_ctxt* phy_ctxt; } ;
struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm_phy_ctxt {int id; } ;
struct TYPE_2__ {int ttc_status; int bt_activity_grading; } ;
struct iwl_mvm {TYPE_1__ last_bt_notif; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum iwl_bt_coex_lut_type { ____Placeholder_iwl_bt_coex_lut_type } iwl_bt_coex_lut_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,int ) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

bool FUNC_5(struct iwl_mvm *VAR_2,
         struct ieee80211_sta *VAR_3)
{
 struct iwl_mvm_sta *VAR_4 = FUNC_2(VAR_3);
 struct iwl_mvm_vif *VAR_5 = FUNC_3(VAR_4->vif);
 struct iwl_mvm_phy_ctxt *VAR_6 = VAR_5->phy_ctxt;
 enum iwl_bt_coex_lut_type VAR_7;

 if (VAR_2->last_bt_notif.ttc_status & FUNC_0(VAR_6->id))
  return 1;

 if (FUNC_4(VAR_2->last_bt_notif.bt_activity_grading) <
     VAR_1)
  return 1;
 VAR_7 = FUNC_1(VAR_2, VAR_4->vif);
 return VAR_7 != VAR_0;
}
