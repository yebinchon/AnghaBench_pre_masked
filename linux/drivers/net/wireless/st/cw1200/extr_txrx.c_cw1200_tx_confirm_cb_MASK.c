
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct wsm_tx_confirm {scalar_t__ packet_id; scalar_t__ status; int ack_failures; int flags; } ;
struct wsm_suspend_resume {int link_id; int stop; int multicast; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_10__ {TYPE_4__* hw_key; } ;
struct TYPE_8__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {TYPE_5__ control; TYPE_3__ status; int flags; } ;
struct cw1200_txpriv {int dummy; } ;
struct cw1200_queue {int dummy; } ;
struct cw1200_common {scalar_t__ mode; int buffered_multicasts; scalar_t__ bss_loss_confirm_id; int bss_loss_lock; scalar_t__ bss_loss_state; int ht_info; int ps_state_lock; int multicast_start_work; int workqueue; scalar_t__ sta_asleep_mask; TYPE_1__* hw; struct cw1200_queue* tx_queue; } ;
struct TYPE_9__ {scalar_t__ cipher; scalar_t__ icv_len; } ;
struct TYPE_7__ {int count; int flags; int idx; } ;
struct TYPE_6__ {int wiphy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct cw1200_common*,int ,int,int) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 size_t FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct cw1200_queue*,scalar_t__,struct sk_buff**,struct cw1200_txpriv const**) ;
 int FUNC_10 (struct cw1200_queue*,scalar_t__) ;
 int FUNC_11 (struct cw1200_queue*,scalar_t__) ;
 int FUNC_12 (struct cw1200_common*,struct wsm_suspend_resume*) ;
 int FUNC_13 (char*,scalar_t__,...) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,char*,int,scalar_t__,scalar_t__) ;

void FUNC_21(struct cw1200_common *VAR_9,
     int VAR_10,
     struct wsm_tx_confirm *VAR_11)
{
 u8 VAR_12 = FUNC_8(VAR_11->packet_id);
 struct cw1200_queue *VAR_13 = &VAR_9->tx_queue[VAR_12];
 struct sk_buff *VAR_14;
 const struct cw1200_txpriv *VAR_15;

 FUNC_13("[TX] TX confirm: %d, %d.\n",
   VAR_11->status, VAR_11->ack_failures);

 if (VAR_9->mode == VAR_4) {

  return;
 }

 if (FUNC_1(VAR_12 >= 4))
  return;

 if (VAR_11->status)
  FUNC_13("TX failed: %d.\n", VAR_11->status);

 if ((VAR_11->status == VAR_6) &&
     (VAR_11->flags & VAR_8)) {

  struct wsm_suspend_resume VAR_16 = {
   .link_id = VAR_10,
   .stop = 1,
   .multicast = !VAR_10,
  };
  FUNC_12(VAR_9, &VAR_16);
  FUNC_20(VAR_9->hw->wiphy, "Requeue for link_id %d (try %d). STAs asleep: 0x%.8X\n",
      VAR_10,
      FUNC_7(VAR_11->packet_id) + 1,
      VAR_9->sta_asleep_mask);
  FUNC_11(VAR_13, VAR_11->packet_id);
  FUNC_17(&VAR_9->ps_state_lock);
  if (!VAR_10) {
   VAR_9->buffered_multicasts = 1;
   if (VAR_9->sta_asleep_mask) {
    FUNC_14(VAR_9->workqueue,
        &VAR_9->multicast_start_work);
   }
  }
  FUNC_19(&VAR_9->ps_state_lock);
 } else if (!FUNC_9(VAR_13, VAR_11->packet_id,
      &VAR_14, &VAR_15)) {
  struct ieee80211_tx_info *VAR_17 = FUNC_0(VAR_14);
  int VAR_18 = VAR_11->ack_failures;
  u8 VAR_19 = 0;
  int VAR_20;

  if (FUNC_6(&VAR_9->ht_info))
   VAR_19 |= VAR_1;

  FUNC_16(&VAR_9->bss_loss_lock);
  if (VAR_9->bss_loss_state &&
      VAR_11->packet_id == VAR_9->bss_loss_confirm_id) {
   if (VAR_11->status) {

    FUNC_2(VAR_9, 0, 0, 1);
   } else {

    FUNC_2(VAR_9, 0, 1, 0);
   }
  }
  FUNC_18(&VAR_9->bss_loss_lock);

  if (!VAR_11->status) {
   VAR_17->flags |= VAR_3;
   ++VAR_18;
   FUNC_4(VAR_9);
   if (VAR_11->flags & VAR_7) {




    FUNC_5(VAR_9);
   }
  } else {
   if (VAR_18)
    ++VAR_18;
  }

  for (VAR_20 = 0; VAR_20 < VAR_0; ++VAR_20) {
   if (VAR_17->status.rates[VAR_20].count >= VAR_18) {
    VAR_17->status.rates[VAR_20].count = VAR_18;
    break;
   }
   VAR_18 -= VAR_17->status.rates[VAR_20].count;
   if (VAR_17->status.rates[VAR_20].flags & VAR_2)
    VAR_17->status.rates[VAR_20].flags |= VAR_19;
  }

  for (++VAR_20; VAR_20 < VAR_0; ++VAR_20) {
   VAR_17->status.rates[VAR_20].count = 0;
   VAR_17->status.rates[VAR_20].idx = -1;
  }


  if (VAR_17->control.hw_key) {
   FUNC_15(VAR_14, VAR_14->len - VAR_17->control.hw_key->icv_len);
   if (VAR_17->control.hw_key->cipher == VAR_5)
    FUNC_15(VAR_14, VAR_14->len - 8);
  }
  FUNC_10(VAR_13, VAR_11->packet_id);
 }

 FUNC_3(VAR_9);
}
