
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_tx_stats {scalar_t__ csum; scalar_t__ no_csum; scalar_t__ tso; scalar_t__ bytes; scalar_t__ pkts; } ;
struct ionic_rx_stats {scalar_t__ csum_error; scalar_t__ csum_complete; scalar_t__ csum_none; scalar_t__ bytes; scalar_t__ pkts; } ;
struct ionic_qcq {TYPE_1__* stats; } ;
struct ionic_lif_sw_stats {int rx_csum_error; int rx_csum_complete; int rx_csum_none; int rx_bytes; int rx_packets; int tx_csum; int tx_no_csum; int tx_tso; int tx_bytes; int tx_packets; } ;
struct ionic_lif {int dummy; } ;
struct TYPE_2__ {struct ionic_rx_stats rx; struct ionic_tx_stats tx; } ;


 int FUNC_0 (struct ionic_lif*) ;
 struct ionic_qcq* FUNC_1 (struct ionic_lif*,int) ;
 struct ionic_qcq* FUNC_2 (struct ionic_lif*,int) ;
 int FUNC_3 (struct ionic_lif_sw_stats*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ionic_lif *VAR_0,
    struct ionic_lif_sw_stats *VAR_1)
{
 struct ionic_tx_stats *VAR_2;
 struct ionic_rx_stats *VAR_3;
 struct ionic_qcq *VAR_4;
 struct ionic_qcq *VAR_5;
 int VAR_6;

 FUNC_3(VAR_1, 0, sizeof(*VAR_1));

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_4 = FUNC_2(VAR_0, VAR_6);
  if (VAR_4 && VAR_4->stats) {
   VAR_2 = &VAR_4->stats->tx;
   VAR_1->tx_packets += VAR_2->pkts;
   VAR_1->tx_bytes += VAR_2->bytes;
   VAR_1->tx_tso += VAR_2->tso;
   VAR_1->tx_no_csum += VAR_2->no_csum;
   VAR_1->tx_csum += VAR_2->csum;
  }

  VAR_5 = FUNC_1(VAR_0, VAR_6);
  if (VAR_5 && VAR_5->stats) {
   VAR_3 = &VAR_5->stats->rx;
   VAR_1->rx_packets += VAR_3->pkts;
   VAR_1->rx_bytes += VAR_3->bytes;
   VAR_1->rx_csum_none += VAR_3->csum_none;
   VAR_1->rx_csum_complete += VAR_3->csum_complete;
   VAR_1->rx_csum_error += VAR_3->csum_error;
  }
 }
}
