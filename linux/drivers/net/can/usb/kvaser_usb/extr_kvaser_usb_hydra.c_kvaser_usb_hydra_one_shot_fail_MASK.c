
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int tx_errors; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_5__ {int arbitration_lost; } ;
struct TYPE_6__ {TYPE_2__ can_stats; } ;
struct kvaser_usb_net_priv {TYPE_3__ can; struct net_device* netdev; } ;
struct TYPE_4__ {int flags; } ;
struct kvaser_cmd_ext {TYPE_1__ tx_ack; } ;
struct can_frame {scalar_t__ can_dlc; int can_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct kvaser_usb_net_priv *VAR_5,
        const struct kvaser_cmd_ext *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;
 struct net_device_stats *VAR_8 = &VAR_7->stats;
 struct can_frame *VAR_9;
 struct sk_buff *VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_0(VAR_7, &VAR_9);
 if (!VAR_10) {
  VAR_8->rx_dropped++;
  FUNC_2(VAR_7, "No memory left for err_skb\n");
  return;
 }

 VAR_9->can_id |= VAR_1;
 VAR_11 = FUNC_1(VAR_6->tx_ack.flags);

 if (VAR_11 & VAR_4)
  VAR_9->can_id |= VAR_0;
 if (VAR_11 & VAR_3) {
  VAR_9->can_id |= VAR_2;
  VAR_5->can.can_stats.arbitration_lost++;
 }

 VAR_8->tx_errors++;
 VAR_8->rx_packets++;
 VAR_8->rx_bytes += VAR_9->can_dlc;
 FUNC_3(VAR_10);
}
