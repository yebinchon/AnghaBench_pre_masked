
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct iwl_mvm_vif {int ap_sta_id; int color; int id; } ;
struct iwl_mvm_txq {int tx_request; int list; void* txq_id; } ;
struct TYPE_9__ {int lock; } ;
struct TYPE_10__ {TYPE_3__ pers; } ;
struct TYPE_11__ {TYPE_4__ rs_drv; } ;
struct iwl_mvm_sta {int sta_id; int tt_tx_protection; int tid_disable_agg; int tx_ant; TYPE_5__ lq_sta; struct iwl_mvm_rxq_dup_data* dup_data; scalar_t__ agg_tids; TYPE_6__* tid_data; scalar_t__ tfd_queue_msk; int sta_type; scalar_t__ tx_protection; int max_agg_bufsize; struct ieee80211_vif* vif; int mac_id_n_color; int lock; } ;
struct iwl_mvm_rxq_dup_data {TYPE_6__* last_seq; } ;
struct iwl_mvm_int_sta {int sta_id; int type; } ;
struct iwl_mvm {int * fw_id_to_mac_id; TYPE_2__* trans; int status; int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {scalar_t__ tdls; int * txq; int addr; } ;
struct TYPE_12__ {void* txq_id; int seq_number; } ;
struct TYPE_8__ {int num_rx_queues; TYPE_1__* trans_cfg; } ;
struct TYPE_7__ {int gen2; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,struct iwl_mvm_int_sta*,int ,int ,int ) ;
 int FUNC_7 (struct iwl_mvm*,int ) ;
 scalar_t__ FUNC_8 (struct iwl_mvm*) ;
 scalar_t__ FUNC_9 (struct iwl_mvm*) ;
 scalar_t__ FUNC_10 (struct iwl_mvm*) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_sta*) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_sta*,int ) ;
 int FUNC_13 (struct iwl_mvm*,struct iwl_mvm_sta*) ;
 struct iwl_mvm_sta* FUNC_14 (struct ieee80211_sta*) ;
 int FUNC_15 (struct iwl_mvm*,struct ieee80211_sta*,int,unsigned int) ;
 int FUNC_16 (struct iwl_mvm*,int *) ;
 struct iwl_mvm_txq* FUNC_17 (int ) ;
 struct iwl_mvm_vif* FUNC_18 (struct ieee80211_vif*) ;
 struct iwl_mvm_rxq_dup_data* FUNC_19 (int,int,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_6__*,int,int) ;
 int FUNC_22 (int ,struct ieee80211_sta*) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ,int *) ;

int FUNC_25(struct iwl_mvm *VAR_13,
      struct ieee80211_vif *VAR_14,
      struct ieee80211_sta *VAR_15)
{
 struct iwl_mvm_vif *VAR_16 = FUNC_18(VAR_14);
 struct iwl_mvm_sta *VAR_17 = FUNC_14(VAR_15);
 struct iwl_mvm_rxq_dup_data *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 bool VAR_22 = 0;
 unsigned int VAR_23 = 0;

 FUNC_20(&VAR_13->mutex);

 if (!FUNC_24(VAR_6, &VAR_13->status))
  VAR_21 = FUNC_7(VAR_13,
        FUNC_5(VAR_14));
 else
  VAR_21 = VAR_17->sta_id;

 if (VAR_21 == VAR_5)
  return -VAR_1;

 FUNC_23(&VAR_17->lock);


 if (FUNC_24(VAR_6, &VAR_13->status)) {
  struct iwl_mvm_int_sta VAR_24 = {
   .sta_id = VAR_21,
   .type = VAR_17->sta_type,
  };





  VAR_20 = FUNC_6(VAR_13, &VAR_24, VAR_15->addr,
       VAR_16->id, VAR_16->color);
  if (VAR_20)
   goto err;

  FUNC_11(VAR_13, VAR_15);
  VAR_22 = 1;
  VAR_23 = FUNC_9(VAR_13) ? 0 : VAR_12;
  goto update_fw;
 }

 VAR_17->sta_id = VAR_21;
 VAR_17->mac_id_n_color = FUNC_1(VAR_16->id,
            VAR_16->color);
 VAR_17->vif = VAR_14;
 if (!VAR_13->trans->trans_cfg->gen2)
  VAR_17->max_agg_bufsize = VAR_9;
 else
  VAR_17->max_agg_bufsize = VAR_10;
 VAR_17->tx_protection = 0;
 VAR_17->tt_tx_protection = 0;
 VAR_17->sta_type = VAR_15->tdls ? VAR_8 : VAR_7;


 VAR_17->tid_disable_agg = 0xffff;
 VAR_17->tfd_queue_msk = 0;


 for (VAR_19 = 0; VAR_19 <= VAR_3; VAR_19++) {
  u16 VAR_25 = VAR_17->tid_data[VAR_19].seq_number;
  FUNC_21(&VAR_17->tid_data[VAR_19], 0, sizeof(VAR_17->tid_data[VAR_19]));
  VAR_17->tid_data[VAR_19].seq_number = VAR_25;





  VAR_17->tid_data[VAR_19].txq_id = VAR_4;
 }

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_15->txq); VAR_19++) {
  struct iwl_mvm_txq *VAR_26 =
   FUNC_17(VAR_15->txq[VAR_19]);

  VAR_26->txq_id = VAR_4;
  FUNC_2(&VAR_26->list);
  FUNC_4(&VAR_26->tx_request, 0);
 }

 VAR_17->agg_tids = 0;

 if (FUNC_8(VAR_13) &&
     !FUNC_24(VAR_6, &VAR_13->status)) {
  int VAR_27;

  VAR_18 = FUNC_19(VAR_13->trans->num_rx_queues,
       sizeof(*VAR_18), VAR_2);
  if (!VAR_18)
   return -VAR_0;
  for (VAR_27 = 0; VAR_27 < VAR_13->trans->num_rx_queues; VAR_27++)
   FUNC_21(VAR_18[VAR_27].last_seq, 0xff,
          sizeof(VAR_18[VAR_27].last_seq));
  VAR_17->dup_data = VAR_18;
 }

 if (!FUNC_9(VAR_13)) {
  VAR_20 = FUNC_12(VAR_13, VAR_15,
       FUNC_5(VAR_14));
  if (VAR_20)
   goto err;
 }





 if (FUNC_10(VAR_13))
  FUNC_13(VAR_13, VAR_17);
 else
  FUNC_23(&VAR_17->lq_sta.rs_drv.pers.lock);

 FUNC_16(VAR_13, &VAR_17->tx_ant);

update_fw:
 VAR_20 = FUNC_15(VAR_13, VAR_15, VAR_22, VAR_23);
 if (VAR_20)
  goto err;

 if (VAR_14->type == VAR_11) {
  if (!VAR_15->tdls) {
   FUNC_3(VAR_16->ap_sta_id != VAR_5);
   VAR_16->ap_sta_id = VAR_21;
  } else {
   FUNC_3(VAR_16->ap_sta_id == VAR_5);
  }
 }

 FUNC_22(VAR_13->fw_id_to_mac_id[VAR_21], VAR_15);

 return 0;

err:
 return VAR_20;
}
