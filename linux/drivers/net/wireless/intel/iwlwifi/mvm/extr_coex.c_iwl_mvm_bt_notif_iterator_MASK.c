
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_13__ {int ave_beacon_signal; } ;
struct iwl_mvm_vif {size_t id; int ap_sta_id; TYPE_11__ bf_data; int ap_ibss_active; TYPE_5__* phy_ctxt; } ;
struct TYPE_12__ {int rrc_status; int bt_activity_grading; } ;
struct TYPE_19__ {int * load; } ;
struct TYPE_20__ {TYPE_6__ result; } ;
struct iwl_mvm {TYPE_10__ last_bt_notif; TYPE_8__* cfg; TYPE_7__ tcm; TYPE_3__* fw; int mutex; } ;
struct iwl_bt_iterator_data {int primary_ll; int secondary_load; struct ieee80211_chanctx_conf* secondary; int primary_load; struct ieee80211_chanctx_conf* primary; struct iwl_mvm* mvm; TYPE_4__* notif; } ;
struct TYPE_22__ {int assoc; } ;
struct ieee80211_vif {int type; TYPE_9__ bss_conf; int chanctx_conf; } ;
struct TYPE_15__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;
struct TYPE_21__ {scalar_t__ bt_shared_single_ant; } ;
struct TYPE_18__ {int id; } ;
struct TYPE_17__ {int bt_activity_grading; } ;
struct TYPE_16__ {int ucode_capa; } ;
struct TYPE_14__ {scalar_t__ band; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct iwl_mvm*,char*,size_t,scalar_t__,int) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;


 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 scalar_t__ FUNC_6 (struct iwl_mvm*,int ,int) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*,int ,int) ;
 struct iwl_mvm_vif* FUNC_8 (struct ieee80211_vif*) ;
 scalar_t__ FUNC_9 (struct iwl_mvm_vif*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 struct ieee80211_chanctx_conf* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(void *VAR_13, u8 *VAR_14,
          struct ieee80211_vif *VAR_15)
{
 struct iwl_mvm_vif *VAR_16 = FUNC_8(VAR_15);
 struct iwl_bt_iterator_data *VAR_17 = VAR_13;
 struct iwl_mvm *VAR_18 = VAR_17->mvm;
 struct ieee80211_chanctx_conf *VAR_19;

 enum ieee80211_smps_mode VAR_20 = VAR_5;
 u32 VAR_21, VAR_22;
 int VAR_23;

 FUNC_11(&VAR_18->mutex);

 switch (VAR_15->type) {
 case 128:
  break;
 case 129:
  if (!VAR_16->ap_ibss_active)
   return;
  break;
 default:
  return;
 }

 VAR_19 = FUNC_12(VAR_15->chanctx_conf);


 if ((!VAR_19 ||
      VAR_19->def.chan->band != VAR_12)) {
  if (VAR_15->type == 128) {

   FUNC_7(VAR_18, VAR_15, VAR_10,
         VAR_20);
   FUNC_6(VAR_18, VAR_16->ap_sta_id,
          0);
   FUNC_5(VAR_18, VAR_15, 0, 0);
  }
  return;
 }

 if (FUNC_3(&VAR_18->fw->ucode_capa, VAR_11))
  VAR_22 = VAR_4;
 else
  VAR_22 = VAR_1;

 VAR_21 = FUNC_10(VAR_17->notif->bt_activity_grading);
 if (VAR_21 >= VAR_22)
  VAR_20 = VAR_7;
 else if (VAR_21 >= VAR_2)
  VAR_20 = VAR_6;


 if (!VAR_15->bss_conf.assoc)
  VAR_20 = VAR_5;

 if (VAR_16->phy_ctxt &&
     (VAR_18->last_bt_notif.rrc_status & FUNC_0(VAR_16->phy_ctxt->id)))
  VAR_20 = VAR_5;

 FUNC_1(VAR_17->mvm,
         "mac %d: bt_activity_grading %d smps_req %d\n",
         VAR_16->id, VAR_21, VAR_20);

 if (VAR_15->type == 128)
  FUNC_7(VAR_18, VAR_15, VAR_10,
        VAR_20);


 if (FUNC_9(VAR_16)) {
  VAR_17->primary_ll = 1;

  VAR_17->secondary = VAR_17->primary;
  VAR_17->primary = VAR_19;
 }

 if (VAR_15->type == 129) {
  if (!VAR_16->ap_ibss_active)
   return;

  if (VAR_19 == VAR_17->primary)
   return;

  if (!VAR_17->primary_ll) {




   VAR_17->secondary = VAR_17->primary;
   VAR_17->primary = VAR_19;
  } else {

   VAR_17->secondary = VAR_19;
  }

  if (VAR_17->primary == VAR_19)
   VAR_17->primary_load = VAR_18->tcm.result.load[VAR_16->id];
  else if (VAR_17->secondary == VAR_19)
   VAR_17->secondary_load = VAR_18->tcm.result.load[VAR_16->id];
  return;
 }





 if (!VAR_17->primary || VAR_17->primary == VAR_19)
  VAR_17->primary = VAR_19;
 else if (!VAR_17->secondary)

  VAR_17->secondary = VAR_19;

 if (VAR_17->primary == VAR_19)
  VAR_17->primary_load = VAR_18->tcm.result.load[VAR_16->id];
 else if (VAR_17->secondary == VAR_19)
  VAR_17->secondary_load = VAR_18->tcm.result.load[VAR_16->id];







 if (FUNC_4(VAR_18, VAR_15) == VAR_0 ||
     VAR_18->cfg->bt_shared_single_ant || !VAR_15->bss_conf.assoc ||
     FUNC_10(VAR_18->last_bt_notif.bt_activity_grading) == VAR_3) {
  FUNC_6(VAR_18, VAR_16->ap_sta_id, 0);
  FUNC_5(VAR_18, VAR_15, 0, 0);
  return;
 }


 VAR_23 = VAR_16->bf_data.ave_beacon_signal;


 if (!VAR_23)
  VAR_23 = -100;
 if (VAR_23 > -VAR_9) {
  if (FUNC_6(VAR_18, VAR_16->ap_sta_id, 1))
   FUNC_2(VAR_18, "Couldn't send BT_CONFIG cmd\n");
 } else if (VAR_23 < -VAR_8) {
  if (FUNC_6(VAR_18, VAR_16->ap_sta_id, 0))
   FUNC_2(VAR_18, "Couldn't send BT_CONFIG cmd\n");
 }


 FUNC_5(VAR_18, VAR_15, 1, VAR_23);
}
