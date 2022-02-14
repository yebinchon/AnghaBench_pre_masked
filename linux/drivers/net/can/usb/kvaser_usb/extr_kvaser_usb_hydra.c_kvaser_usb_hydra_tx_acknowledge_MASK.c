
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct kvaser_usb_tx_urb_context {size_t echo_index; int dlc; } ;
struct kvaser_usb_net_priv {int tx_contexts_lock; TYPE_3__* netdev; int active_tx_contexts; struct kvaser_usb_tx_urb_context* tx_contexts; } ;
struct kvaser_usb {size_t max_tx_urbs; } ;
struct TYPE_7__ {int flags; } ;
struct kvaser_cmd_ext {TYPE_2__ tx_ack; } ;
struct TYPE_6__ {scalar_t__ cmd_no; } ;
struct kvaser_cmd {TYPE_1__ header; } ;
struct TYPE_8__ {struct net_device_stats stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 size_t FUNC_2 (struct kvaser_cmd const*) ;
 struct kvaser_usb_net_priv* FUNC_3 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_4 (struct kvaser_usb_net_priv*,struct kvaser_cmd_ext*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(const struct kvaser_usb *VAR_3,
         const struct kvaser_cmd *VAR_4)
{
 struct kvaser_usb_tx_urb_context *VAR_5;
 struct kvaser_usb_net_priv *VAR_6;
 unsigned long VAR_7;
 bool VAR_8 = 0;
 u16 VAR_9 = FUNC_2(VAR_4);

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_6)
  return;

 if (!FUNC_6(VAR_6->netdev))
  return;

 if (VAR_4->header.cmd_no == VAR_0) {
  struct kvaser_cmd_ext *VAR_10 = (struct kvaser_cmd_ext *)VAR_4;
  u32 VAR_11 = FUNC_5(VAR_10->tx_ack.flags);

  if (VAR_11 & (VAR_2 |
        VAR_1)) {
   FUNC_4(VAR_6, VAR_10);
   VAR_8 = 1;
  }
 }

 VAR_5 = &VAR_6->tx_contexts[VAR_9 % VAR_3->max_tx_urbs];
 if (!VAR_8) {
  struct net_device_stats *VAR_12 = &VAR_6->netdev->stats;

  VAR_12->tx_packets++;
  VAR_12->tx_bytes += FUNC_0(VAR_5->dlc);
 }

 FUNC_8(&VAR_6->tx_contexts_lock, VAR_7);

 FUNC_1(VAR_6->netdev, VAR_5->echo_index);
 VAR_5->echo_index = VAR_3->max_tx_urbs;
 --VAR_6->active_tx_contexts;
 FUNC_7(VAR_6->netdev);

 FUNC_9(&VAR_6->tx_contexts_lock, VAR_7);
}
