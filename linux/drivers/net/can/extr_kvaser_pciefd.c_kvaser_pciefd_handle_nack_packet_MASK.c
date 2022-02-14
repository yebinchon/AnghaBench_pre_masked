
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_dropped; int rx_packets; int rx_bytes; int tx_errors; } ;
struct kvaser_pciefd_rx_packet {int* header; } ;
struct TYPE_5__ {int arbitration_lost; } ;
struct TYPE_6__ {TYPE_3__* dev; TYPE_1__ can_stats; } ;
struct kvaser_pciefd_can {TYPE_2__ can; } ;
struct can_frame {scalar_t__ can_dlc; int can_id; } ;
struct TYPE_7__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (TYPE_3__*,struct can_frame**) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct kvaser_pciefd_can *VAR_4,
          struct kvaser_pciefd_rx_packet *VAR_5)
{
 struct sk_buff *VAR_6;
 struct net_device_stats *VAR_7 = &VAR_4->can.dev->stats;
 struct can_frame *VAR_8;

 VAR_6 = FUNC_0(VAR_4->can.dev, &VAR_8);

 VAR_7->tx_errors++;
 if (VAR_5->header[0] & VAR_3) {
  if (VAR_6)
   VAR_8->can_id |= VAR_2;
  VAR_4->can.can_stats.arbitration_lost++;
 } else if (VAR_6) {
  VAR_8->can_id |= VAR_0;
 }

 if (VAR_6) {
  VAR_8->can_id |= VAR_1;
  VAR_7->rx_bytes += VAR_8->can_dlc;
  VAR_7->rx_packets++;
  FUNC_2(VAR_6);
 } else {
  VAR_7->rx_dropped++;
  FUNC_1(VAR_4->can.dev, "No memory left for err_skb\n");
 }
}
