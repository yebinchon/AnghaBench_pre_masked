
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* sta_id; } ;
struct TYPE_5__ {void* sta_id; } ;
struct TYPE_4__ {int id; int list; } ;
struct iwl_mvm_vif {scalar_t__ id; scalar_t__ tsf_id; int * smps_requests; void* ap_sta_id; TYPE_3__ mcast_sta; TYPE_2__ bcast_sta; int cab_queue; TYPE_1__ time_event_data; scalar_t__ color; } ;
struct iwl_mvm_mac_iface_iterator_data {scalar_t__ preferred_tsf; int found_vif; int available_tsf_ids; int available_mac_ids; struct ieee80211_vif* vif; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int status; int hw; int mutex; } ;
struct ieee80211_vif {int type; int p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,struct iwl_mvm_mac_iface_iterator_data*) ;
 int VAR_13 ;
 struct iwl_mvm_vif* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct iwl_mvm_vif*,int ,int) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct iwl_mvm *VAR_14, struct ieee80211_vif *VAR_15)
{
 struct iwl_mvm_vif *VAR_16 = FUNC_6(VAR_15);
 struct iwl_mvm_mac_iface_iterator_data VAR_17 = {
  .mvm = VAR_14,
  .vif = VAR_15,
  .available_mac_ids = (1 << VAR_10) - 1 ,
  .available_tsf_ids = (1 << VAR_11) - 1 ,

  .preferred_tsf = VAR_11,
  .found_vif = 0,
 };
 int VAR_18, VAR_19;

 FUNC_7(&VAR_14->mutex);
 switch (VAR_15->type) {
 case 129:
  break;
 case 128:
  if (!VAR_15->p2p)
   break;

 default:
  FUNC_3(0, VAR_17.available_mac_ids);
 }

 FUNC_5(
  VAR_14->hw, VAR_2,
  VAR_13, &VAR_17);
 if (VAR_17.found_vif)
  return 0;


 if (FUNC_2(FUNC_9(VAR_6, &VAR_14->status)))
  return -VAR_0;

 VAR_16->id = FUNC_4(VAR_17.available_mac_ids,
        VAR_10);
 if (VAR_16->id == VAR_10) {
  FUNC_1(VAR_14, "Failed to init MAC context - no free ID!\n");
  VAR_18 = -VAR_1;
  goto exit_fail;
 }

 if (VAR_17.preferred_tsf != VAR_11)
  VAR_16->tsf_id = VAR_17.preferred_tsf;
 else
  VAR_16->tsf_id = FUNC_4(VAR_17.available_tsf_ids,
      VAR_11);
 if (VAR_16->tsf_id == VAR_11) {
  FUNC_1(VAR_14, "Failed to init MAC context - no free TSF!\n");
  VAR_18 = -VAR_1;
  goto exit_fail;
 }

 VAR_16->color = 0;

 FUNC_0(&VAR_16->time_event_data.list);
 VAR_16->time_event_data.id = VAR_12;


 if (VAR_15->type == VAR_8)
  return 0;


 if (VAR_15->type == VAR_7 ||
     VAR_15->type == 129) {




  VAR_16->cab_queue = VAR_4;
 }

 VAR_16->bcast_sta.sta_id = VAR_5;
 VAR_16->mcast_sta.sta_id = VAR_5;
 VAR_16->ap_sta_id = VAR_5;

 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++)
  VAR_16->smps_requests[VAR_19] = VAR_3;

 return 0;

exit_fail:
 FUNC_8(VAR_16, 0, sizeof(struct iwl_mvm_vif));
 return VAR_18;
}
