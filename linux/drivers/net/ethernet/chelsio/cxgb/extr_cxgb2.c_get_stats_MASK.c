
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sge_port_stats {int tx_need_hdrroom; int vlan_insert; int vlan_xtract; int tx_tso; int tx_cso; int rx_cso_good; } ;
struct sge_intr_counts {int * cmdQ_full; int pkt_mismatch; int pkt_too_big; int freelistQ_empty; int respQ_overflow; int respQ_empty; int unhandled_irqs; int pure_rsps; int rx_drops; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct ethtool_stats {int dummy; } ;
struct espi_intr_counts {int parity_err; int rx_ovflw; int tx_drops; int rx_drops; int DIP4_err; int DIP2_parity_err; } ;
struct cmac_statistics {int RxJumboOctetsOK; int RxJumboFramesOK; int RxFrameTooLongErrors; int RxOutOfRangeLengthField; int RxInRangeLengthErrors; int RxInternalMACRcvError; int RxJabberErrors; int RxRuntErrors; int RxSequenceErrors; int RxDataErrors; int RxSymbolErrors; int RxAlignErrors; int RxFCSErrors; int RxPauseFrames; int RxBroadcastFramesOK; int RxMulticastFramesOK; int RxUnicastFramesOK; int RxOctetsBad; int RxOctetsOK; int TxJumboOctetsOK; int TxJumboFramesOK; int TxFCSErrors; int TxFramesWithExcessiveDeferral; int TxInternalMACXmitError; int TxLengthErrors; int TxUnderrun; int TxFramesAbortedDueToXSCollisions; int TxTotalCollisions; int TxLateCollisions; int TxFramesWithDeferredXmissions; int TxPauseFrames; int TxBroadcastFramesOK; int TxMulticastFramesOK; int TxUnicastFramesOK; int TxOctetsBad; int TxOctetsOK; } ;
struct cmac {TYPE_2__* ops; } ;
struct adapter {scalar_t__ espi; int sge; TYPE_1__* port; } ;
struct TYPE_4__ {struct cmac_statistics* (* statistics_update ) (struct cmac*,int ) ;} ;
struct TYPE_3__ {struct cmac* mac; } ;


 int VAR_0 ;
 struct cmac_statistics* FUNC_0 (struct cmac*,int ) ;
 struct espi_intr_counts* FUNC_1 (scalar_t__) ;
 struct sge_intr_counts* FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t,struct sge_port_stats*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, struct ethtool_stats *VAR_2,
        u64 *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->ml_priv;
 struct cmac *VAR_5 = VAR_4->port[VAR_1->if_port].mac;
 const struct cmac_statistics *VAR_6;
 const struct sge_intr_counts *VAR_7;
 struct sge_port_stats VAR_8;

 VAR_6 = VAR_5->ops->statistics_update(VAR_5, VAR_0);
 VAR_7 = FUNC_2(VAR_4->sge);
 FUNC_3(VAR_4->sge, VAR_1->if_port, &VAR_8);

 *VAR_3++ = VAR_6->TxOctetsOK;
 *VAR_3++ = VAR_6->TxOctetsBad;
 *VAR_3++ = VAR_6->TxUnicastFramesOK;
 *VAR_3++ = VAR_6->TxMulticastFramesOK;
 *VAR_3++ = VAR_6->TxBroadcastFramesOK;
 *VAR_3++ = VAR_6->TxPauseFrames;
 *VAR_3++ = VAR_6->TxFramesWithDeferredXmissions;
 *VAR_3++ = VAR_6->TxLateCollisions;
 *VAR_3++ = VAR_6->TxTotalCollisions;
 *VAR_3++ = VAR_6->TxFramesAbortedDueToXSCollisions;
 *VAR_3++ = VAR_6->TxUnderrun;
 *VAR_3++ = VAR_6->TxLengthErrors;
 *VAR_3++ = VAR_6->TxInternalMACXmitError;
 *VAR_3++ = VAR_6->TxFramesWithExcessiveDeferral;
 *VAR_3++ = VAR_6->TxFCSErrors;
 *VAR_3++ = VAR_6->TxJumboFramesOK;
 *VAR_3++ = VAR_6->TxJumboOctetsOK;

 *VAR_3++ = VAR_6->RxOctetsOK;
 *VAR_3++ = VAR_6->RxOctetsBad;
 *VAR_3++ = VAR_6->RxUnicastFramesOK;
 *VAR_3++ = VAR_6->RxMulticastFramesOK;
 *VAR_3++ = VAR_6->RxBroadcastFramesOK;
 *VAR_3++ = VAR_6->RxPauseFrames;
 *VAR_3++ = VAR_6->RxFCSErrors;
 *VAR_3++ = VAR_6->RxAlignErrors;
 *VAR_3++ = VAR_6->RxSymbolErrors;
 *VAR_3++ = VAR_6->RxDataErrors;
 *VAR_3++ = VAR_6->RxSequenceErrors;
 *VAR_3++ = VAR_6->RxRuntErrors;
 *VAR_3++ = VAR_6->RxJabberErrors;
 *VAR_3++ = VAR_6->RxInternalMACRcvError;
 *VAR_3++ = VAR_6->RxInRangeLengthErrors;
 *VAR_3++ = VAR_6->RxOutOfRangeLengthField;
 *VAR_3++ = VAR_6->RxFrameTooLongErrors;
 *VAR_3++ = VAR_6->RxJumboFramesOK;
 *VAR_3++ = VAR_6->RxJumboOctetsOK;

 *VAR_3++ = VAR_8.rx_cso_good;
 *VAR_3++ = VAR_8.tx_cso;
 *VAR_3++ = VAR_8.tx_tso;
 *VAR_3++ = VAR_8.vlan_xtract;
 *VAR_3++ = VAR_8.vlan_insert;
 *VAR_3++ = VAR_8.tx_need_hdrroom;

 *VAR_3++ = VAR_7->rx_drops;
 *VAR_3++ = VAR_7->pure_rsps;
 *VAR_3++ = VAR_7->unhandled_irqs;
 *VAR_3++ = VAR_7->respQ_empty;
 *VAR_3++ = VAR_7->respQ_overflow;
 *VAR_3++ = VAR_7->freelistQ_empty;
 *VAR_3++ = VAR_7->pkt_too_big;
 *VAR_3++ = VAR_7->pkt_mismatch;
 *VAR_3++ = VAR_7->cmdQ_full[0];
 *VAR_3++ = VAR_7->cmdQ_full[1];

 if (VAR_4->espi) {
  const struct espi_intr_counts *VAR_9;

  VAR_9 = FUNC_1(VAR_4->espi);
  *VAR_3++ = VAR_9->DIP2_parity_err;
  *VAR_3++ = VAR_9->DIP4_err;
  *VAR_3++ = VAR_9->rx_drops;
  *VAR_3++ = VAR_9->tx_drops;
  *VAR_3++ = VAR_9->rx_ovflw;
  *VAR_3++ = VAR_9->parity_err;
 }
}
