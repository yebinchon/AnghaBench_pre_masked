
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_tid_data {scalar_t__ rate_n_flags; scalar_t__ tx_time; void* lq_color; } ;
struct iwl_mvm_sta {struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm_compressed_ba_tfd {int tid; int tfd_index; int q_num; } ;
struct iwl_mvm_compressed_ba_notif {int sta_id; int done; int txed; int flags; int wireless_time; int tx_rate; struct iwl_mvm_compressed_ba_tfd* tfd; int tfd_cnt; scalar_t__ reduced_txp; int tlc_rate_info; } ;
struct iwl_mvm_ba_notif {int sta_id; int tid; scalar_t__ reduced_txp; void* txed_2_done; void* txed; int bitmap; int seq_ctl; int sta_addr; int scd_ssn; int scd_flow; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {void** status_driver_data; scalar_t__ tx_time; void* ampdu_len; void* ampdu_ack_len; } ;
struct ieee80211_tx_info {TYPE_1__ status; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 struct iwl_mvm_sta* FUNC_4 (struct iwl_mvm*,int) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_mvm_sta*,scalar_t__) ;
 int FUNC_6 (struct iwl_mvm*,int,int,int,int,struct ieee80211_tx_info*,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct iwl_rx_packet* FUNC_12 (struct iwl_rx_cmd_buffer*) ;

void FUNC_13(struct iwl_mvm *VAR_3, struct iwl_rx_cmd_buffer *VAR_4)
{
 struct iwl_rx_packet *VAR_5 = FUNC_12(VAR_4);
 int VAR_6, VAR_7, VAR_8, VAR_9;
 struct ieee80211_tx_info VAR_10 = {};
 struct iwl_mvm_ba_notif *VAR_11;
 struct iwl_mvm_tid_data *VAR_12;
 struct iwl_mvm_sta *VAR_13;

 VAR_10.flags = VAR_0;

 if (FUNC_3(VAR_3)) {
  struct iwl_mvm_compressed_ba_notif *VAR_14 =
   (void *)VAR_5->data;
  u8 VAR_15 = FUNC_1(VAR_14->tlc_rate_info);
  int VAR_16;

  VAR_6 = VAR_14->sta_id;
  VAR_10.status.ampdu_ack_len = (u8)FUNC_7(VAR_14->done);
  VAR_10.status.ampdu_len = (u8)FUNC_7(VAR_14->txed);
  VAR_10.status.tx_time =
   (u16)FUNC_8(VAR_14->wireless_time);
  VAR_10.status.status_driver_data[0] =
   (void *)(uintptr_t)VAR_14->reduced_txp;

  if (!FUNC_7(VAR_14->tfd_cnt))
   goto out;

  FUNC_10();

  VAR_13 = FUNC_4(VAR_3, VAR_6);
  if (!VAR_13)
   goto out_unlock;


  for (VAR_16 = 0; VAR_16 < FUNC_7(VAR_14->tfd_cnt); VAR_16++) {
   struct iwl_mvm_compressed_ba_tfd *VAR_17 =
    &VAR_14->tfd[VAR_16];

   VAR_7 = VAR_17->tid;
   if (VAR_7 == VAR_2)
    VAR_7 = VAR_1;

   VAR_13->tid_data[VAR_16].lq_color = VAR_15;
   FUNC_6(VAR_3, VAR_6, VAR_7,
        (int)(FUNC_7(VAR_17->q_num)),
        FUNC_7(VAR_17->tfd_index),
        &VAR_10,
        FUNC_8(VAR_14->tx_rate));
  }

  FUNC_5(VAR_3, VAR_13,
       FUNC_8(VAR_14->wireless_time));
out_unlock:
  FUNC_11();
out:
  FUNC_0(VAR_3,
       "BA_NOTIFICATION Received from sta_id = %d, flags %x, sent:%d, acked:%d\n",
       VAR_6, FUNC_8(VAR_14->flags),
       FUNC_7(VAR_14->txed),
       FUNC_7(VAR_14->done));
  return;
 }

 VAR_11 = (void *)VAR_5->data;
 VAR_6 = VAR_11->sta_id;
 VAR_7 = VAR_11->tid;

 VAR_8 = FUNC_7(VAR_11->scd_flow);


 VAR_9 = FUNC_7(VAR_11->scd_ssn);

 FUNC_10();
 VAR_13 = FUNC_4(VAR_3, VAR_6);
 if (FUNC_2(!VAR_13)) {
  FUNC_11();
  return;
 }

 VAR_12 = &VAR_13->tid_data[VAR_7];

 VAR_10.status.ampdu_ack_len = VAR_11->txed_2_done;
 VAR_10.status.ampdu_len = VAR_11->txed;
 VAR_10.status.tx_time = VAR_12->tx_time;
 VAR_10.status.status_driver_data[0] =
  (void *)(uintptr_t)VAR_11->reduced_txp;

 FUNC_11();

 FUNC_6(VAR_3, VAR_6, VAR_7, VAR_8, VAR_9, &VAR_10,
      VAR_12->rate_n_flags);

 FUNC_0(VAR_3,
      "BA_NOTIFICATION Received from %pM, sta_id = %d\n",
      VAR_11->sta_addr, VAR_11->sta_id);

 FUNC_0(VAR_3,
      "TID = %d, SeqCtl = %d, bitmap = 0x%llx, scd_flow = %d, scd_ssn = %d sent:%d, acked:%d\n",
      VAR_11->tid, FUNC_7(VAR_11->seq_ctl),
      FUNC_9(VAR_11->bitmap), VAR_8, VAR_9,
      VAR_11->txed, VAR_11->txed_2_done);

 FUNC_0(VAR_3, "reduced txp from ba notif %d\n",
      VAR_11->reduced_txp);
}
