
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_trans_txq_scd_cfg {int tid; int aggregate; int sta_id; int frame_limit; int fifo; } ;
struct iwl_mvm_sta {unsigned long tfd_queue_msk; size_t reserved_queue; int lock; TYPE_2__* tid_data; int sta_id; int vif; } ;
struct iwl_mvm {int trans; TYPE_1__* queue_info; int mutex; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum iwl_mvm_agg_state { ____Placeholder_iwl_mvm_agg_state } iwl_mvm_agg_state ;
struct TYPE_4__ {int seq_number; int txq_id; int state; } ;
struct TYPE_3__ {scalar_t__ status; int reserved; } ;


 unsigned long FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 int FUNC_3 (struct iwl_mvm*,char*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*,int,int,int ) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_sta*,int,int,struct iwl_trans_txq_scd_cfg*,unsigned int) ;
 int FUNC_7 (struct iwl_mvm*,int ,int,int ) ;
 unsigned long FUNC_8 (struct iwl_mvm*,int) ;
 int FUNC_9 (struct iwl_mvm*,unsigned long,int ) ;
 unsigned int FUNC_10 (struct iwl_mvm*,int ,int,int) ;
 scalar_t__ FUNC_11 (struct iwl_mvm*) ;
 int FUNC_12 (struct iwl_mvm*,int ) ;
 int FUNC_13 (struct iwl_mvm*,int,unsigned long,int) ;
 int FUNC_14 (struct iwl_mvm*,int ) ;
 int FUNC_15 (struct iwl_mvm*,int,int,int ,int,unsigned int,int,int ) ;
 int FUNC_16 (struct iwl_mvm*,struct ieee80211_sta*,int ,int) ;
 struct iwl_mvm_sta* FUNC_17 (struct ieee80211_sta*) ;
 int FUNC_18 (struct iwl_mvm*,struct ieee80211_sta*,int,int ) ;
 int FUNC_19 (struct iwl_mvm*,struct ieee80211_sta*,int,int,int) ;
 int FUNC_20 (struct ieee80211_sta*,int) ;
 int FUNC_21 (int ,int,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct iwl_mvm *VAR_14,
       struct ieee80211_sta *VAR_15, u8 VAR_16, int VAR_17)
{
 struct iwl_mvm_sta *VAR_18 = FUNC_17(VAR_15);
 struct iwl_trans_txq_scd_cfg VAR_19 = {
  .fifo = FUNC_14(VAR_14, VAR_16),
  .sta_id = VAR_18->sta_id,
  .tid = VAR_17,
  .frame_limit = VAR_3,
 };
 unsigned int VAR_20 =
  FUNC_10(VAR_14, VAR_18->vif, 0, 0);
 int VAR_21 = -1;
 unsigned long VAR_22 = 0;
 enum iwl_mvm_agg_state VAR_23;
 bool VAR_24 = 0, VAR_25;
 int VAR_26;
 unsigned long VAR_27;
 int VAR_28;

 FUNC_22(&VAR_14->mutex);

 if (FUNC_11(VAR_14))
  return FUNC_16(VAR_14, VAR_15, VAR_16, VAR_17);

 FUNC_23(&VAR_18->lock);
 VAR_27 = VAR_18->tfd_queue_msk;
 VAR_26 = FUNC_1(VAR_18->tid_data[VAR_17].seq_number);
 FUNC_24(&VAR_18->lock);

 if (VAR_17 == VAR_4) {
  VAR_21 = FUNC_7(VAR_14, VAR_18->sta_id,
      VAR_9,
      VAR_7);
  if (VAR_21 >= VAR_9)
   FUNC_2(VAR_14, "Found free MGMT queue #%d\n",
         VAR_21);


 }

 if ((VAR_21 < 0 && VAR_18->reserved_queue != VAR_0) &&
     (VAR_14->queue_info[VAR_18->reserved_queue].status ==
   VAR_11)) {
  VAR_21 = VAR_18->reserved_queue;
  VAR_14->queue_info[VAR_21].reserved = 1;
  FUNC_2(VAR_14, "Using reserved queue #%d\n", VAR_21);
 }

 if (VAR_21 < 0)
  VAR_21 = FUNC_7(VAR_14, VAR_18->sta_id,
      VAR_8,
      VAR_6);
 if (VAR_21 < 0) {

  VAR_21 = FUNC_12(VAR_14, VAR_18->sta_id);
 }


 if (VAR_21 <= 0) {
  VAR_21 = FUNC_9(VAR_14, VAR_27, VAR_16);
  if (VAR_21 > 0) {
   VAR_24 = 1;
   VAR_14->queue_info[VAR_21].status = VAR_12;
  }
 }







 if (VAR_21 > 0 && !VAR_24)
  VAR_14->queue_info[VAR_21].status = VAR_10;


 if (FUNC_4(VAR_21 <= 0)) {
  FUNC_3(VAR_14, "No available queues for tid %d on sta_id %d\n",
   VAR_17, VAR_19.sta_id);
  return VAR_21;
 }







 VAR_19.aggregate = (VAR_21 >= VAR_8 ||
    VAR_21 == VAR_5);

 FUNC_2(VAR_14,
       "Allocating %squeue #%d to sta %d on tid %d\n",
       VAR_24 ? "shared " : "", VAR_21,
       VAR_18->sta_id, VAR_17);

 if (VAR_24) {

  VAR_22 = FUNC_8(VAR_14, VAR_21);

  if (VAR_22) {
   FUNC_2(VAR_14, "Disabling aggs on queue %d\n",
         VAR_21);
   FUNC_13(VAR_14, VAR_21,
           VAR_22, 0);
  }
 }

 VAR_25 = FUNC_6(VAR_14, VAR_15, VAR_21, VAR_26, &VAR_19, VAR_20);







 if (VAR_24)
  FUNC_21(VAR_14->trans, VAR_21, 1);

 FUNC_23(&VAR_18->lock);





 if (VAR_25) {
  VAR_18->tid_data[VAR_17].seq_number += 0x10;
  VAR_26 = (VAR_26 + 1) & VAR_1;
 }
 VAR_18->tid_data[VAR_17].txq_id = VAR_21;
 VAR_18->tfd_queue_msk |= FUNC_0(VAR_21);
 VAR_23 = VAR_18->tid_data[VAR_17].state;

 if (VAR_18->reserved_queue == VAR_21)
  VAR_18->reserved_queue = VAR_0;
 FUNC_24(&VAR_18->lock);

 if (!VAR_24) {
  VAR_28 = FUNC_18(VAR_14, VAR_15, 1, VAR_13);
  if (VAR_28)
   goto out_err;


  if (VAR_23 == VAR_2) {
   VAR_28 = FUNC_19(VAR_14, VAR_15, VAR_17, VAR_21, 1);
   if (VAR_28)
    goto out_err;
  }
 } else {

  VAR_28 = FUNC_15(VAR_14, VAR_21, VAR_17, VAR_16, VAR_26,
          VAR_20, 0,
          FUNC_20(VAR_15, VAR_17));
  if (VAR_28)
   goto out_err;
 }

 return 0;

out_err:
 FUNC_5(VAR_14, VAR_15, VAR_21, VAR_17, 0);

 return VAR_28;
}
