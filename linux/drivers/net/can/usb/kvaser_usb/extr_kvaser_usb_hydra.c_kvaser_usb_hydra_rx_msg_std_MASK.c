
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct kvaser_usb_net_priv {TYPE_2__* netdev; } ;
struct kvaser_usb {int cfg; } ;
struct TYPE_4__ {int flags; int data; int dlc; int id; int err_frame_data; } ;
struct kvaser_cmd {TYPE_1__ rx_can; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int data; } ;
typedef int ktime_t ;
struct TYPE_5__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (TYPE_2__*,struct can_frame**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct kvaser_usb_net_priv*,int *,int ) ;
 int FUNC_4 (int ,struct kvaser_cmd const*) ;
 struct kvaser_usb_net_priv* FUNC_5 (struct kvaser_usb const*,struct kvaser_cmd const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 struct skb_shared_hwtstamps* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(const struct kvaser_usb *VAR_8,
     const struct kvaser_cmd *VAR_9)
{
 struct kvaser_usb_net_priv *VAR_10 = ((void*)0);
 struct can_frame *VAR_11;
 struct sk_buff *VAR_12;
 struct skb_shared_hwtstamps *VAR_13;
 struct net_device_stats *VAR_14;
 u8 VAR_15;
 ktime_t VAR_16;

 VAR_10 = FUNC_5(VAR_8, VAR_9);
 if (!VAR_10)
  return;

 VAR_14 = &VAR_10->netdev->stats;

 VAR_15 = VAR_9->rx_can.flags;
 VAR_16 = FUNC_4(VAR_8->cfg, VAR_9);

 if (VAR_15 & VAR_4) {
  FUNC_3(VAR_10, &VAR_9->rx_can.err_frame_data,
          VAR_16);
  return;
 }

 VAR_12 = FUNC_0(VAR_10->netdev, &VAR_11);
 if (!VAR_12) {
  VAR_14->rx_dropped++;
  return;
 }

 VAR_13 = FUNC_9(VAR_12);
 VAR_13->hwtstamp = VAR_16;

 VAR_11->can_id = FUNC_6(VAR_9->rx_can.id);

 if (VAR_11->can_id & VAR_7) {
  VAR_11->can_id &= VAR_1;
  VAR_11->can_id |= VAR_0;
 } else {
  VAR_11->can_id &= VAR_3;
 }

 if (VAR_15 & VAR_5)
  FUNC_2(VAR_10->netdev);

 VAR_11->can_dlc = FUNC_1(VAR_9->rx_can.dlc);

 if (VAR_15 & VAR_6)
  VAR_11->can_id |= VAR_2;
 else
  FUNC_7(VAR_11->data, VAR_9->rx_can.data, VAR_11->can_dlc);

 VAR_14->rx_packets++;
 VAR_14->rx_bytes += VAR_11->can_dlc;
 FUNC_8(VAR_12);
}
