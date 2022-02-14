
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int tx_bytes; int tx_drop; int tx_pkts; } ;
struct recv_priv {int rx_bytes; int rx_drop; int rx_pkts; } ;
struct net_device_stats {int rx_bytes; int tx_bytes; int rx_dropped; int tx_dropped; int rx_packets; int tx_packets; } ;
struct net_device {int dummy; } ;
struct adapter {struct net_device_stats stats; struct recv_priv recvpriv; struct xmit_priv xmitpriv; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct adapter *VAR_1 = (struct adapter *)FUNC_0(VAR_0);
 struct xmit_priv *VAR_2 = &VAR_1->xmitpriv;
 struct recv_priv *VAR_3 = &VAR_1->recvpriv;

 VAR_1->stats.tx_packets = VAR_2->tx_pkts;
 VAR_1->stats.rx_packets = VAR_3->rx_pkts;
 VAR_1->stats.tx_dropped = VAR_2->tx_drop;
 VAR_1->stats.rx_dropped = VAR_3->rx_drop;
 VAR_1->stats.tx_bytes = VAR_2->tx_bytes;
 VAR_1->stats.rx_bytes = VAR_3->rx_bytes;
 return &VAR_1->stats;
}
