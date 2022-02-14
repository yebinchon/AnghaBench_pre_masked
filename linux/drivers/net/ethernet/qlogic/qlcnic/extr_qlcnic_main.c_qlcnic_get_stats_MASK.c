
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txdropped; int rxdropped; int txbytes; scalar_t__ lrobytes; scalar_t__ rxbytes; int xmitfinished; scalar_t__ lro_pkts; scalar_t__ rx_pkts; } ;
struct qlcnic_adapter {TYPE_1__ stats; int state; } ;
struct net_device_stats {int tx_dropped; int rx_dropped; int tx_bytes; scalar_t__ rx_bytes; int tx_packets; scalar_t__ rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_0(VAR_1);
 struct net_device_stats *VAR_3 = &VAR_1->stats;

 if (FUNC_2(VAR_0, &VAR_2->state))
  FUNC_1(VAR_2);

 VAR_3->rx_packets = VAR_2->stats.rx_pkts + VAR_2->stats.lro_pkts;
 VAR_3->tx_packets = VAR_2->stats.xmitfinished;
 VAR_3->rx_bytes = VAR_2->stats.rxbytes + VAR_2->stats.lrobytes;
 VAR_3->tx_bytes = VAR_2->stats.txbytes;
 VAR_3->rx_dropped = VAR_2->stats.rxdropped;
 VAR_3->tx_dropped = VAR_2->stats.txdropped;

 return VAR_3;
}
