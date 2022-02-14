
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device_stats {unsigned long rx_packets; unsigned long rx_bytes; unsigned long tx_packets; unsigned long tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct enetc_ndev_priv {int num_rx_rings; int num_tx_rings; TYPE_4__** tx_ring; TYPE_2__** rx_ring; } ;
struct TYPE_7__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_5__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 struct enetc_ndev_priv* FUNC_0 (struct net_device*) ;

struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct enetc_ndev_priv *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_0->stats;
 unsigned long VAR_3 = 0, VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_rx_rings; VAR_5++) {
  VAR_3 += VAR_1->rx_ring[VAR_5]->stats.packets;
  VAR_4 += VAR_1->rx_ring[VAR_5]->stats.bytes;
 }

 VAR_2->rx_packets = VAR_3;
 VAR_2->rx_bytes = VAR_4;
 VAR_4 = 0;
 VAR_3 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_tx_rings; VAR_5++) {
  VAR_3 += VAR_1->tx_ring[VAR_5]->stats.packets;
  VAR_4 += VAR_1->tx_ring[VAR_5]->stats.bytes;
 }

 VAR_2->tx_packets = VAR_3;
 VAR_2->tx_bytes = VAR_4;

 return VAR_2;
}
