
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {TYPE_2__* mac; } ;
struct net_device_stats {scalar_t__ tx_window_errors; scalar_t__ tx_heartbeat_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_missed_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; int collisions; scalar_t__ multicast; scalar_t__ rx_errors; scalar_t__ tx_errors; int rx_bytes; int tx_bytes; scalar_t__ rx_packets; scalar_t__ tx_packets; } ;
struct net_device {size_t if_port; struct net_device_stats stats; struct adapter* ml_priv; } ;
struct cmac_statistics {scalar_t__ TxLateCollisions; scalar_t__ TxUnderrun; scalar_t__ TxFramesAbortedDueToXSCollisions; scalar_t__ RxAlignErrors; scalar_t__ RxFCSErrors; scalar_t__ RxJabberErrors; scalar_t__ RxFrameTooLongErrors; int TxTotalCollisions; scalar_t__ RxMulticastFramesOK; scalar_t__ RxRuntErrors; scalar_t__ RxSymbolErrors; scalar_t__ RxSequenceErrors; scalar_t__ RxDataErrors; scalar_t__ TxLengthErrors; int RxOctetsOK; int TxOctetsOK; scalar_t__ RxBroadcastFramesOK; scalar_t__ RxUnicastFramesOK; scalar_t__ TxBroadcastFramesOK; scalar_t__ TxMulticastFramesOK; scalar_t__ TxUnicastFramesOK; } ;
struct adapter {struct port_info* port; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {struct cmac_statistics* (* statistics_update ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 struct cmac_statistics* FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_1)
{
 struct adapter *VAR_2 = VAR_1->ml_priv;
 struct port_info *VAR_3 = &VAR_2->port[VAR_1->if_port];
 struct net_device_stats *VAR_4 = &VAR_1->stats;
 const struct cmac_statistics *VAR_5;


 VAR_5 = VAR_3->mac->ops->statistics_update(VAR_3->mac,
      VAR_0);

 VAR_4->tx_packets = VAR_5->TxUnicastFramesOK +
  VAR_5->TxMulticastFramesOK + VAR_5->TxBroadcastFramesOK;

 VAR_4->rx_packets = VAR_5->RxUnicastFramesOK +
  VAR_5->RxMulticastFramesOK + VAR_5->RxBroadcastFramesOK;

 VAR_4->tx_bytes = VAR_5->TxOctetsOK;
 VAR_4->rx_bytes = VAR_5->RxOctetsOK;

 VAR_4->tx_errors = VAR_5->TxLateCollisions + VAR_5->TxLengthErrors +
  VAR_5->TxUnderrun + VAR_5->TxFramesAbortedDueToXSCollisions;
 VAR_4->rx_errors = VAR_5->RxDataErrors + VAR_5->RxJabberErrors +
  VAR_5->RxFCSErrors + VAR_5->RxAlignErrors +
  VAR_5->RxSequenceErrors + VAR_5->RxFrameTooLongErrors +
  VAR_5->RxSymbolErrors + VAR_5->RxRuntErrors;

 VAR_4->multicast = VAR_5->RxMulticastFramesOK;
 VAR_4->collisions = VAR_5->TxTotalCollisions;


 VAR_4->rx_length_errors = VAR_5->RxFrameTooLongErrors +
  VAR_5->RxJabberErrors;
 VAR_4->rx_over_errors = 0;
 VAR_4->rx_crc_errors = VAR_5->RxFCSErrors;
 VAR_4->rx_frame_errors = VAR_5->RxAlignErrors;
 VAR_4->rx_fifo_errors = 0;
 VAR_4->rx_missed_errors = 0;


 VAR_4->tx_aborted_errors = VAR_5->TxFramesAbortedDueToXSCollisions;
 VAR_4->tx_carrier_errors = 0;
 VAR_4->tx_fifo_errors = VAR_5->TxUnderrun;
 VAR_4->tx_heartbeat_errors = 0;
 VAR_4->tx_window_errors = VAR_5->TxLateCollisions;
 return VAR_4;
}
