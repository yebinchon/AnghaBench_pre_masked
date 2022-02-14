
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_mvm_vif {struct iwl_mvm_phy_ctxt* phy_ctxt; } ;
struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm_phy_ctxt {int id; } ;
struct TYPE_2__ {int ttc_status; int bt_activity_grading; } ;
struct iwl_mvm {TYPE_1__ last_bt_notif; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum iwl_bt_coex_lut_type { ____Placeholder_iwl_bt_coex_lut_type } iwl_bt_coex_lut_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct iwl_mvm*,int ) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

u16 FUNC_5(struct iwl_mvm *VAR_5,
    struct ieee80211_sta *VAR_6)
{
 struct iwl_mvm_sta *VAR_7 = FUNC_2(VAR_6);
 struct iwl_mvm_vif *VAR_8 = FUNC_3(VAR_7->vif);
 struct iwl_mvm_phy_ctxt *VAR_9 = VAR_8->phy_ctxt;
 enum iwl_bt_coex_lut_type VAR_10;

 if (VAR_5->last_bt_notif.ttc_status & FUNC_0(VAR_9->id))
  return VAR_4;

 if (FUNC_4(VAR_5->last_bt_notif.bt_activity_grading) <
     VAR_2)
  return VAR_4;

 VAR_10 = FUNC_1(VAR_5, VAR_7->vif);

 if (VAR_10 == VAR_1 || VAR_10 == VAR_0)
  return VAR_4;


 return VAR_3;
}
