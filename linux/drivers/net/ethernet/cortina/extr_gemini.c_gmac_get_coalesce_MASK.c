
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gemini_ethernet_port {int rx_coalesce_nsecs; int irq_every_tx_packets; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int rx_coalesce_usecs; int tx_max_coalesced_frames; } ;


 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
        struct ethtool_coalesce *VAR_1)
{
 struct gemini_ethernet_port *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_coalesced_frames = 1;
 VAR_1->tx_max_coalesced_frames = VAR_2->irq_every_tx_packets;
 VAR_1->rx_coalesce_usecs = VAR_2->rx_coalesce_nsecs / 1000;

 return 0;
}
