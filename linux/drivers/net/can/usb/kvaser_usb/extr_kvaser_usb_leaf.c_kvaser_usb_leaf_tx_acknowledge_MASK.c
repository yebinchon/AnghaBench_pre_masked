
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct kvaser_usb_tx_urb_context {size_t echo_index; scalar_t__ dlc; } ;
struct TYPE_15__ {int restarts; } ;
struct TYPE_16__ {scalar_t__ state; TYPE_4__ can_stats; scalar_t__ restart_ms; } ;
struct kvaser_usb_net_priv {int tx_contexts_lock; TYPE_6__* netdev; int active_tx_contexts; TYPE_5__ can; struct kvaser_usb_tx_urb_context* tx_contexts; } ;
struct kvaser_usb {size_t nchannels; size_t max_tx_urbs; struct kvaser_usb_net_priv** nets; TYPE_3__* intf; } ;
struct TYPE_12__ {size_t channel; size_t tid; } ;
struct TYPE_13__ {TYPE_1__ tx_acknowledge_header; } ;
struct kvaser_cmd {TYPE_2__ u; } ;
struct can_frame {scalar_t__ can_dlc; int can_id; } ;
struct TYPE_17__ {struct net_device_stats stats; } ;
struct TYPE_14__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (TYPE_6__*,struct can_frame**) ;
 int FUNC_1 (TYPE_6__*,size_t) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(const struct kvaser_usb *VAR_3,
        const struct kvaser_cmd *VAR_4)
{
 struct net_device_stats *VAR_5;
 struct kvaser_usb_tx_urb_context *VAR_6;
 struct kvaser_usb_net_priv *VAR_7;
 unsigned long VAR_8;
 u8 VAR_9, VAR_10;

 VAR_9 = VAR_4->u.tx_acknowledge_header.channel;
 VAR_10 = VAR_4->u.tx_acknowledge_header.tid;

 if (VAR_9 >= VAR_3->nchannels) {
  FUNC_2(&VAR_3->intf->dev,
   "Invalid channel number (%d)\n", VAR_9);
  return;
 }

 VAR_7 = VAR_3->nets[VAR_9];

 if (!FUNC_5(VAR_7->netdev))
  return;

 VAR_5 = &VAR_7->netdev->stats;

 VAR_6 = &VAR_7->tx_contexts[VAR_10 % VAR_3->max_tx_urbs];


 if (VAR_7->can.restart_ms && VAR_7->can.state >= VAR_1) {
  struct sk_buff *VAR_11;
  struct can_frame *VAR_12;

  VAR_11 = FUNC_0(VAR_7->netdev, &VAR_12);
  if (VAR_11) {
   VAR_12->can_id |= VAR_0;

   VAR_5->rx_packets++;
   VAR_5->rx_bytes += VAR_12->can_dlc;
   FUNC_6(VAR_11);
  } else {
   FUNC_3(VAR_7->netdev,
       "No memory left for err_skb\n");
  }

  VAR_7->can.can_stats.restarts++;
  FUNC_4(VAR_7->netdev);

  VAR_7->can.state = VAR_2;
 }

 VAR_5->tx_packets++;
 VAR_5->tx_bytes += VAR_6->dlc;

 FUNC_8(&VAR_7->tx_contexts_lock, VAR_8);

 FUNC_1(VAR_7->netdev, VAR_6->echo_index);
 VAR_6->echo_index = VAR_3->max_tx_urbs;
 --VAR_7->active_tx_contexts;
 FUNC_7(VAR_7->netdev);

 FUNC_9(&VAR_7->tx_contexts_lock, VAR_8);
}
