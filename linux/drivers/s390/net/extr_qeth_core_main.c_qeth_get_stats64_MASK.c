
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; int multicast; int rx_dropped; int rx_errors; int rx_bytes; int rx_packets; } ;
struct TYPE_6__ {scalar_t__ tx_dropped; scalar_t__ tx_errors; scalar_t__ tx_bytes; scalar_t__ tx_packets; } ;
struct qeth_qdio_out_q {TYPE_3__ stats; } ;
struct TYPE_5__ {unsigned int no_out_queues; struct qeth_qdio_out_q** out_qs; } ;
struct TYPE_4__ {int rx_multicast; int rx_dropped; int rx_errors; int rx_bytes; int rx_packets; } ;
struct qeth_card {TYPE_2__ qdio; TYPE_1__ stats; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;

void FUNC_1(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct qeth_card *VAR_2 = VAR_0->ml_priv;
 struct qeth_qdio_out_q *VAR_3;
 unsigned int VAR_4;

 FUNC_0(VAR_2, 5, "getstat");

 VAR_1->rx_packets = VAR_2->stats.rx_packets;
 VAR_1->rx_bytes = VAR_2->stats.rx_bytes;
 VAR_1->rx_errors = VAR_2->stats.rx_errors;
 VAR_1->rx_dropped = VAR_2->stats.rx_dropped;
 VAR_1->multicast = VAR_2->stats.rx_multicast;

 for (VAR_4 = 0; VAR_4 < VAR_2->qdio.no_out_queues; VAR_4++) {
  VAR_3 = VAR_2->qdio.out_qs[VAR_4];

  VAR_1->tx_packets += VAR_3->stats.tx_packets;
  VAR_1->tx_bytes += VAR_3->stats.tx_bytes;
  VAR_1->tx_errors += VAR_3->stats.tx_errors;
  VAR_1->tx_dropped += VAR_3->stats.tx_dropped;
 }
}
