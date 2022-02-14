
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wsm_tx {int packet_id; int queue_id; } ;
struct TYPE_8__ {TYPE_3__* hw_key; } ;
struct ieee80211_tx_info {TYPE_4__ control; } ;
struct ieee80211_hdr {int frame_control; } ;
struct cw1200_txpriv {size_t offset; int raw_link_id; } ;
struct cw1200_queue {int dummy; } ;
struct TYPE_6__ {int probe_work; } ;
struct cw1200_common {int mode; int link_id_map; scalar_t__ wep_default_key_id; int wep_key_work; int workqueue; int pending_frame_id; TYPE_2__ scan; int unjoin_work; int bss_loss_lock; int bss_loss_confirm_id; scalar_t__ bss_loss_state; int join_status; TYPE_1__* hw; } ;
typedef int __le16 ;
struct TYPE_7__ {scalar_t__ keyidx; scalar_t__ cipher; } ;
struct TYPE_5__ {int wiphy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cw1200_queue*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int *,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct cw1200_common*) ;
 int FUNC_15 (struct cw1200_common*) ;

__attribute__((used)) static bool FUNC_16(struct cw1200_common *VAR_7,
          struct wsm_tx *VAR_8,
          const struct ieee80211_tx_info *VAR_9,
          const struct cw1200_txpriv *VAR_10,
          struct cw1200_queue *VAR_11)
{
 bool VAR_12 = 0;
 const struct ieee80211_hdr *VAR_13 =
  (struct ieee80211_hdr *)&((u8 *)VAR_8)[VAR_10->offset];
 __le16 VAR_14 = VAR_13->frame_control;
 enum {
  do_probe,
  do_drop,
  do_wep,
  do_tx,
 } VAR_15 = do_tx;

 switch (VAR_7->mode) {
 case 128:
  if (VAR_7->join_status == VAR_1)
   VAR_15 = do_tx;
  else if (VAR_7->join_status < VAR_2)
   VAR_15 = do_drop;
  break;
 case 131:
  if (!VAR_7->join_status) {
   VAR_15 = do_drop;
  } else if (!(FUNC_0(VAR_10->raw_link_id) &
        (FUNC_0(0) | VAR_7->link_id_map))) {
   FUNC_13(VAR_7->hw->wiphy,
       "A frame with expired link id is dropped.\n");
   VAR_15 = do_drop;
  }
  if (FUNC_2(VAR_8->packet_id) >
    VAR_3) {






   FUNC_13(VAR_7->hw->wiphy,
       "Too many attempts to requeue a frame; dropped.\n");
   VAR_15 = do_drop;
  }
  break;
 case 132:
  if (VAR_7->join_status != VAR_0)
   VAR_15 = do_drop;
  break;
 case 130:
  VAR_15 = do_tx;
  break;
 case 129:
 default:
  VAR_15 = do_drop;
  break;
 }

 if (VAR_15 == do_tx) {
  if (FUNC_6(VAR_14)) {
   FUNC_11(&VAR_7->bss_loss_lock);
   if (VAR_7->bss_loss_state) {
    VAR_7->bss_loss_confirm_id = VAR_8->packet_id;
    VAR_8->queue_id = VAR_6;
   }
   FUNC_12(&VAR_7->bss_loss_lock);
  } else if (FUNC_7(VAR_14)) {
   VAR_15 = do_probe;
  } else if (FUNC_5(VAR_14) &&
      VAR_7->mode != 131) {
   FUNC_8("[WSM] Issue unjoin command due to tx deauth.\n");
   FUNC_14(VAR_7);
   if (FUNC_10(VAR_7->workqueue,
           &VAR_7->unjoin_work) <= 0)
    FUNC_15(VAR_7);
  } else if (FUNC_4(VAR_14) &&
      VAR_9->control.hw_key &&
      VAR_9->control.hw_key->keyidx != VAR_7->wep_default_key_id &&
      (VAR_9->control.hw_key->cipher == VAR_5 ||
       VAR_9->control.hw_key->cipher == VAR_4)) {
   VAR_15 = do_wep;
  }
 }

 switch (VAR_15) {
 case do_probe:




  FUNC_8("[WSM] Convert probe request to scan.\n");
  FUNC_14(VAR_7);
  VAR_7->pending_frame_id = VAR_8->packet_id;
  if (FUNC_9(VAR_7->workqueue,
           &VAR_7->scan.probe_work, 0) <= 0)
   FUNC_15(VAR_7);
  VAR_12 = 1;
  break;
 case do_drop:
  FUNC_8("[WSM] Drop frame (0x%.4X).\n", VAR_14);
  FUNC_1(FUNC_3(VAR_11, VAR_8->packet_id));
  VAR_12 = 1;
  break;
 case do_wep:
  FUNC_8("[WSM] Issue set_default_wep_key.\n");
  FUNC_14(VAR_7);
  VAR_7->wep_default_key_id = VAR_9->control.hw_key->keyidx;
  VAR_7->pending_frame_id = VAR_8->packet_id;
  if (FUNC_10(VAR_7->workqueue, &VAR_7->wep_key_work) <= 0)
   FUNC_15(VAR_7);
  VAR_12 = 1;
  break;
 case do_tx:
  FUNC_8("[WSM] Transmit frame.\n");
  break;
 default:

  break;
 }
 return VAR_12;
}
