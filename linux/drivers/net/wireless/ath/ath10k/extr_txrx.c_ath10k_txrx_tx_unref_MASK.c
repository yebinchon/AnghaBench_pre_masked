
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ieee80211_txq {int tid; scalar_t__ sta; scalar_t__ drv_priv; } ;
struct TYPE_4__ {scalar_t__ ack_signal; int is_valid_ack_signal; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct htt_tx_done {scalar_t__ msdu_id; scalar_t__ status; scalar_t__ ack_rssi; } ;
struct device {int dummy; } ;
struct ath10k_txq {int num_fw_queued; } ;
struct ath10k_skb_cb {int paddr; scalar_t__ airtime_est; struct ieee80211_txq* txq; } ;
struct ath10k_htt {scalar_t__ max_num_pending_tx; scalar_t__ num_pending_tx; struct ath10k* ar; int tx_lock; int empty_tx_wq; int pending_tx; } ;
struct TYPE_3__ {scalar_t__ dev_type; } ;
struct ath10k {int hw; TYPE_1__ bus_param; struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ath10k*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ath10k_htt*) ;
 int FUNC_4 (struct ath10k_htt*,scalar_t__) ;
 int FUNC_5 (struct ath10k*,struct sk_buff*) ;
 int FUNC_6 (struct ath10k*,char*,scalar_t__) ;
 int FUNC_7 (struct device*,int ,int ,int ) ;
 struct sk_buff* FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_10 (int ,struct sk_buff*) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ath10k*,scalar_t__) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct ath10k_htt *VAR_13,
    const struct htt_tx_done *VAR_14)
{
 struct ath10k *VAR_15 = VAR_13->ar;
 struct device *VAR_16 = VAR_15->dev;
 struct ieee80211_tx_info *VAR_17;
 struct ieee80211_txq *VAR_18;
 struct ath10k_skb_cb *VAR_19;
 struct ath10k_txq *VAR_20;
 struct sk_buff *VAR_21;

 FUNC_2(VAR_15, VAR_0,
     "htt tx completion msdu_id %u status %d\n",
     VAR_14->msdu_id, VAR_14->status);

 if (VAR_14->msdu_id >= VAR_13->max_num_pending_tx) {
  FUNC_6(VAR_15, "warning: msdu_id %d too big, ignoring\n",
       VAR_14->msdu_id);
  return -VAR_5;
 }

 FUNC_12(&VAR_13->tx_lock);
 VAR_21 = FUNC_8(&VAR_13->pending_tx, VAR_14->msdu_id);
 if (!VAR_21) {
  FUNC_6(VAR_15, "received tx completion for invalid msdu_id: %d\n",
       VAR_14->msdu_id);
  FUNC_13(&VAR_13->tx_lock);
  return -VAR_6;
 }

 VAR_19 = FUNC_0(VAR_21);
 VAR_18 = VAR_19->txq;

 if (VAR_18) {
  VAR_20 = (void *)VAR_18->drv_priv;
  VAR_20->num_fw_queued--;
 }

 FUNC_4(VAR_13, VAR_14->msdu_id);
 FUNC_3(VAR_13);
 if (VAR_13->num_pending_tx == 0)
  FUNC_15(&VAR_13->empty_tx_wq);
 FUNC_13(&VAR_13->tx_lock);

 if (VAR_18 && VAR_18->sta && VAR_19->airtime_est)
  FUNC_9(VAR_18->sta, VAR_18->tid,
            VAR_19->airtime_est, 0);

 if (VAR_15->bus_param.dev_type != VAR_2)
  FUNC_7(VAR_16, VAR_19->paddr, VAR_21->len, VAR_4);

 FUNC_5(VAR_13->ar, VAR_21);

 VAR_17 = FUNC_1(VAR_21);
 FUNC_11(&VAR_17->status, 0, sizeof(VAR_17->status));
 FUNC_14(VAR_15, VAR_14->msdu_id);

 if (!(VAR_17->flags & VAR_10))
  VAR_17->flags |= VAR_11;

 if (VAR_14->status == VAR_9)
  VAR_17->flags &= ~VAR_11;

 if ((VAR_14->status == VAR_7) &&
     (VAR_17->flags & VAR_10))
  VAR_17->flags |= VAR_12;

 if (VAR_14->status == VAR_8) {
  if (VAR_17->flags & VAR_10)
   VAR_17->flags &= ~VAR_12;
  else
   VAR_17->flags &= ~VAR_11;
 }

 if (VAR_14->status == VAR_7 &&
     VAR_14->ack_rssi != VAR_3) {
  VAR_17->status.ack_signal = VAR_1 +
      VAR_14->ack_rssi;
  VAR_17->status.is_valid_ack_signal = 1;
 }

 FUNC_10(VAR_13->ar->hw, VAR_21);


 return 0;
}
