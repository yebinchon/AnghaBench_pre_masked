
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_dropped; int rx_dropped; int tx_bytes; int rx_bytes; int tx_packets; scalar_t__ rx_packets; } ;
struct TYPE_2__ {int txdropped; int rxdropped; int txbytes; int rxbytes; int xmitfinished; scalar_t__ lro_pkts; scalar_t__ rx_pkts; } ;
struct netxen_adapter {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;


 struct netxen_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 struct netxen_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_packets = VAR_2->stats.rx_pkts + VAR_2->stats.lro_pkts;
 VAR_1->tx_packets = VAR_2->stats.xmitfinished;
 VAR_1->rx_bytes = VAR_2->stats.rxbytes;
 VAR_1->tx_bytes = VAR_2->stats.txbytes;
 VAR_1->rx_dropped = VAR_2->stats.rxdropped;
 VAR_1->tx_dropped = VAR_2->stats.txdropped;
}
