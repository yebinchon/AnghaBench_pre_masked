
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {int secondary_ch_lut; int primary_ch_lut; } ;
struct TYPE_9__ {int secondary_ch_phy_id; int primary_ch_phy_id; } ;
struct iwl_mvm {TYPE_5__ last_bt_notif; TYPE_4__ last_bt_ci_cmd; TYPE_3__* cfg; } ;
struct ieee80211_vif {int chanctx_conf; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {scalar_t__ drv_priv; TYPE_2__ def; } ;
typedef enum iwl_bt_coex_lut_type { ____Placeholder_iwl_bt_coex_lut_type } iwl_bt_coex_lut_type ;
struct TYPE_8__ {scalar_t__ bt_shared_single_ant; } ;
struct TYPE_6__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 struct ieee80211_chanctx_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static enum iwl_bt_coex_lut_type
FUNC_4(struct iwl_mvm *VAR_3, const struct ieee80211_vif *VAR_4)
{
 struct ieee80211_chanctx_conf *VAR_5;
 enum iwl_bt_coex_lut_type VAR_6;
 u16 VAR_7;
 u32 VAR_8, VAR_9;
 FUNC_2();

 VAR_5 = FUNC_1(VAR_4->chanctx_conf);

 if (!VAR_5 ||
      VAR_5->def.chan->band != VAR_2) {
  FUNC_3();
  return VAR_0;
 }

 VAR_6 = VAR_1;

 if (VAR_3->cfg->bt_shared_single_ant) {
  FUNC_3();
  return VAR_6;
 }

 VAR_7 = *((u16 *)VAR_5->drv_priv);
 VAR_8 = FUNC_0(VAR_3->last_bt_ci_cmd.primary_ch_phy_id);
 VAR_9 =
  FUNC_0(VAR_3->last_bt_ci_cmd.secondary_ch_phy_id);

 if (VAR_8 == VAR_7)
  VAR_6 = FUNC_0(VAR_3->last_bt_notif.primary_ch_lut);
 else if (VAR_9 == VAR_7)
  VAR_6 = FUNC_0(VAR_3->last_bt_notif.secondary_ch_lut);


 FUNC_3();

 return VAR_6;
}
