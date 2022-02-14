
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gemini_ethernet_port {int txq_order; int irq_every_tx_packets; int rx_coalesce_nsecs; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
        struct ethtool_coalesce *VAR_2)
{
 struct gemini_ethernet_port *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->tx_max_coalesced_frames < 1)
  return -VAR_0;
 if (VAR_2->tx_max_coalesced_frames >= 1 << VAR_3->txq_order)
  return -VAR_0;

 VAR_3->irq_every_tx_packets = VAR_2->tx_max_coalesced_frames;
 VAR_3->rx_coalesce_nsecs = VAR_2->rx_coalesce_usecs * 1000;

 return 0;
}
