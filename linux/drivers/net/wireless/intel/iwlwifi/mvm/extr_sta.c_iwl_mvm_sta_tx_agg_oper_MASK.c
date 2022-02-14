
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct iwl_trans_txq_scd_cfg {size_t tid; size_t frame_limit; int aggregate; int fifo; int sta_id; } ;
struct iwl_mvm_tid_data {size_t ssn; int txq_id; int amsdu_in_ampdu_allowed; int state; } ;
struct TYPE_8__ {int agg_frame_cnt_limit; } ;
struct TYPE_6__ {TYPE_4__ lq; } ;
struct TYPE_7__ {TYPE_2__ rs_drv; } ;
struct iwl_mvm_sta {TYPE_3__ lq_sta; int max_agg_bufsize; int sta_id; int lock; int agg_tids; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {TYPE_1__* queue_info; int trans; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; int tdls; } ;
typedef enum iwl_mvm_queue_status { ____Placeholder_iwl_mvm_queue_status } iwl_mvm_queue_status ;
struct TYPE_5__ {int status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct iwl_mvm*,char*,int ,size_t) ;
 int FUNC_3 (struct iwl_mvm*,char*,...) ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int * VAR_9 ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*,int,size_t,struct iwl_trans_txq_scd_cfg*,unsigned int) ;
 unsigned int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,int ,int) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*,int,int ,int ,size_t,size_t,size_t) ;
 int FUNC_10 (struct iwl_mvm*,TYPE_4__*) ;
 struct iwl_mvm_sta* FUNC_11 (struct ieee80211_sta*) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_sta*,size_t,int,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,size_t) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 size_t* VAR_10 ;

int FUNC_17(struct iwl_mvm *VAR_11, struct ieee80211_vif *VAR_12,
       struct ieee80211_sta *VAR_13, u16 VAR_14, u16 VAR_15,
       bool VAR_16)
{
 struct iwl_mvm_sta *VAR_17 = FUNC_11(VAR_13);
 struct iwl_mvm_tid_data *VAR_18 = &VAR_17->tid_data[VAR_14];
 unsigned int VAR_19 =
  FUNC_6(VAR_11, VAR_12, VAR_13->tdls, 0);
 int VAR_20, VAR_21;
 bool VAR_22 = 1;
 enum iwl_mvm_queue_status VAR_23;
 u16 VAR_24;

 struct iwl_trans_txq_scd_cfg VAR_25 = {
  .sta_id = VAR_17->sta_id,
  .tid = VAR_14,
  .frame_limit = VAR_15,
  .aggregate = 1,
 };





 if (FUNC_4(FUNC_8(VAR_11)))
  return -VAR_1;

 FUNC_1((sizeof(VAR_17->agg_tids) * VAR_0)
       != VAR_6);

 FUNC_15(&VAR_17->lock);
 VAR_24 = VAR_18->ssn;
 VAR_20 = VAR_18->txq_id;
 VAR_18->state = VAR_4;
 VAR_17->agg_tids |= FUNC_0(VAR_14);
 VAR_18->ssn = 0xffff;
 VAR_18->amsdu_in_ampdu_allowed = VAR_16;
 FUNC_16(&VAR_17->lock);

 if (FUNC_7(VAR_11)) {
  if (VAR_15 < VAR_5)
   return -VAR_3;

  VAR_21 = FUNC_12(VAR_11, VAR_13, VAR_14, VAR_20, 1);
  if (VAR_21)
   return -VAR_2;
  goto out;
 }

 VAR_25.fifo = VAR_9[VAR_10[VAR_14]];

 VAR_23 = VAR_11->queue_info[VAR_20].status;


 if (VAR_11->queue_info[VAR_20].status == VAR_7)
  VAR_22 = 0;





 if (!VAR_22 && VAR_15 < VAR_5) {




  VAR_21 = FUNC_13(VAR_11->trans,
           FUNC_0(VAR_20));
  if (VAR_21) {
   FUNC_3(VAR_11,
    "Error draining queue before reconfig\n");
   return VAR_21;
  }

  VAR_21 = FUNC_9(VAR_11, VAR_20, VAR_25.fifo,
        VAR_17->sta_id, VAR_14,
        VAR_15, VAR_24);
  if (VAR_21) {
   FUNC_3(VAR_11,
    "Error reconfiguring TXQ #%d\n", VAR_20);
   return VAR_21;
  }
 }

 if (VAR_22)
  FUNC_5(VAR_11, VAR_13, VAR_20, VAR_24,
       &VAR_25, VAR_19);


 if (VAR_23 != VAR_8) {
  VAR_21 = FUNC_12(VAR_11, VAR_13, VAR_14, VAR_20, 1);
  if (VAR_21)
   return -VAR_2;
 }


 VAR_11->queue_info[VAR_20].status = VAR_7;

out:







 VAR_17->max_agg_bufsize =
  FUNC_14(VAR_17->max_agg_bufsize, VAR_15);
 VAR_17->lq_sta.rs_drv.lq.agg_frame_cnt_limit = VAR_17->max_agg_bufsize;

 FUNC_2(VAR_11, "Tx aggregation enabled on ra = %pM tid = %d\n",
       VAR_13->addr, VAR_14);

 return FUNC_10(VAR_11, &VAR_17->lq_sta.rs_drv.lq);
}
