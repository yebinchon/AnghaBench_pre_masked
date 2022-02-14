
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct iwl_mvm_vif {size_t ap_sta_id; } ;
struct iwl_mvm_sta {size_t sta_id; scalar_t__ reserved_queue; int lock; int tfd_queue_msk; int dup_data; } ;
struct TYPE_7__ {size_t sta_id; } ;
struct TYPE_8__ {int dwork; TYPE_3__ peer; } ;
struct iwl_mvm {int * fw_id_to_mac_id; TYPE_4__ tdls_cs; TYPE_1__* queue_info; int trans; int mutex; } ;
struct TYPE_6__ {scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_2__ bss_conf; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum iwl_mvm_queue_status { ____Placeholder_iwl_mvm_queue_status } iwl_mvm_queue_status ;
struct TYPE_5__ {int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int,char*,size_t,size_t,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_mvm_sta*,int) ;
 int FUNC_6 (struct iwl_mvm*,struct iwl_mvm_sta*,int,int ) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 scalar_t__ FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*,size_t) ;
 struct iwl_mvm_sta* FUNC_10 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_11 (struct ieee80211_vif*) ;
 int FUNC_12 (struct iwl_mvm*,struct iwl_mvm_sta*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct iwl_mvm *VAR_6,
     struct ieee80211_vif *VAR_7,
     struct ieee80211_sta *VAR_8)
{
 struct iwl_mvm_vif *VAR_9 = FUNC_11(VAR_7);
 struct iwl_mvm_sta *VAR_10 = FUNC_10(VAR_8);
 u8 VAR_11 = VAR_10->sta_id;
 int VAR_12;

 FUNC_15(&VAR_6->mutex);

 if (FUNC_7(VAR_6))
  FUNC_14(VAR_10->dup_data);

 VAR_12 = FUNC_5(VAR_6, VAR_10, 1);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_6(VAR_6, VAR_10, 0, 0);
 if (VAR_12)
  return VAR_12;
 if (FUNC_8(VAR_6)) {
  VAR_12 = FUNC_12(VAR_6, VAR_10);
 } else {
  u32 VAR_13 = VAR_10->tfd_queue_msk;

  VAR_12 = FUNC_13(VAR_6->trans,
           VAR_13);
 }
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_6, VAR_10, 0);

 FUNC_4(VAR_6, VAR_7, VAR_8);


 if (VAR_10->reserved_queue != VAR_1) {
  u8 VAR_14 = VAR_10->reserved_queue;
  enum iwl_mvm_queue_status *VAR_15;






  VAR_15 = &VAR_6->queue_info[VAR_14].status;
  if (FUNC_1((*VAR_15 != VAR_4) &&
    (*VAR_15 != VAR_3),
    "sta_id %d reserved txq %d status %d",
    VAR_11, VAR_14, *VAR_15))
   return -VAR_0;

  *VAR_15 = VAR_3;
 }

 if (VAR_7->type == VAR_5 &&
     VAR_9->ap_sta_id == VAR_11) {

  if (VAR_7->bss_conf.assoc)
   return VAR_12;


  VAR_9->ap_sta_id = VAR_2;
 }





 if (FUNC_2(VAR_6->tdls_cs.peer.sta_id == VAR_11)) {
  VAR_6->tdls_cs.peer.sta_id = VAR_2;
  FUNC_3(&VAR_6->tdls_cs.dwork);
 }





 FUNC_16(&VAR_10->lock);
 FUNC_17(&VAR_10->lock);

 VAR_12 = FUNC_9(VAR_6, VAR_10->sta_id);
 FUNC_0(VAR_6->fw_id_to_mac_id[VAR_10->sta_id], ((void*)0));

 return VAR_12;
}
