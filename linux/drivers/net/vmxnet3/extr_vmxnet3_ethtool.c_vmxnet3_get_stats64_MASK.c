
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmxnet3_tq_driver_stats {scalar_t__ drop_total; } ;
struct vmxnet3_rq_driver_stats {scalar_t__ drop_total; } ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; TYPE_4__* rx_queue; TYPE_3__* rqd_start; TYPE_2__* tx_queue; TYPE_1__* tqd_start; int cmd_lock; } ;
struct rtnl_link_stats64 {int multicast; int rx_dropped; int rx_errors; int rx_bytes; int rx_packets; int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;
struct UPT1_TxStats {scalar_t__ pktsTxError; scalar_t__ bcastBytesTxOK; scalar_t__ mcastBytesTxOK; scalar_t__ ucastBytesTxOK; scalar_t__ bcastPktsTxOK; scalar_t__ mcastPktsTxOK; scalar_t__ ucastPktsTxOK; } ;
struct UPT1_RxStats {scalar_t__ mcastPktsRxOK; scalar_t__ pktsRxError; scalar_t__ bcastBytesRxOK; scalar_t__ mcastBytesRxOK; scalar_t__ ucastBytesRxOK; scalar_t__ bcastPktsRxOK; scalar_t__ ucastPktsRxOK; } ;
struct TYPE_8__ {struct vmxnet3_rq_driver_stats stats; } ;
struct TYPE_7__ {struct UPT1_RxStats stats; } ;
struct TYPE_6__ {struct vmxnet3_tq_driver_stats stats; } ;
struct TYPE_5__ {struct UPT1_TxStats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct net_device *VAR_2,
     struct rtnl_link_stats64 *VAR_3)
{
 struct vmxnet3_adapter *VAR_4;
 struct vmxnet3_tq_driver_stats *VAR_5;
 struct vmxnet3_rq_driver_stats *VAR_6;
 struct UPT1_TxStats *VAR_7;
 struct UPT1_RxStats *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_4 = FUNC_1(VAR_2);


 FUNC_2(&VAR_4->cmd_lock, VAR_9);
 FUNC_0(VAR_4, VAR_1, VAR_0);
 FUNC_3(&VAR_4->cmd_lock, VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_4->num_tx_queues; VAR_10++) {
  VAR_7 = &VAR_4->tqd_start[VAR_10].stats;
  VAR_5 = &VAR_4->tx_queue[VAR_10].stats;
  VAR_3->tx_packets += VAR_7->ucastPktsTxOK +
         VAR_7->mcastPktsTxOK +
         VAR_7->bcastPktsTxOK;
  VAR_3->tx_bytes += VAR_7->ucastBytesTxOK +
       VAR_7->mcastBytesTxOK +
       VAR_7->bcastBytesTxOK;
  VAR_3->tx_errors += VAR_7->pktsTxError;
  VAR_3->tx_dropped += VAR_5->drop_total;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4->num_rx_queues; VAR_10++) {
  VAR_8 = &VAR_4->rqd_start[VAR_10].stats;
  VAR_6 = &VAR_4->rx_queue[VAR_10].stats;
  VAR_3->rx_packets += VAR_8->ucastPktsRxOK +
         VAR_8->mcastPktsRxOK +
         VAR_8->bcastPktsRxOK;

  VAR_3->rx_bytes += VAR_8->ucastBytesRxOK +
       VAR_8->mcastBytesRxOK +
       VAR_8->bcastBytesRxOK;

  VAR_3->rx_errors += VAR_8->pktsRxError;
  VAR_3->rx_dropped += VAR_6->drop_total;
  VAR_3->multicast += VAR_8->mcastPktsRxOK;
 }
}
