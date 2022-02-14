
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int multicast; int tx_errors; int tx_bytes; int tx_packets; int rx_dropped; int rx_errors; int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct aq_stats_s {int mprc; int erpt; int dma_oct_tc; int dma_pkt_tc; int dpc; int erpr; int dma_oct_rc; int dma_pkt_rc; } ;
struct aq_nic_s {int aq_hw; TYPE_1__* aq_hw_ops; struct net_device* ndev; } ;
struct TYPE_3__ {struct aq_stats_s* (* hw_get_hw_stats ) (int ) ;} ;


 struct aq_stats_s* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct aq_nic_s *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->ndev;
 struct aq_stats_s *VAR_2 = VAR_0->aq_hw_ops->hw_get_hw_stats(VAR_0->aq_hw);

 VAR_1->stats.rx_packets = VAR_2->dma_pkt_rc;
 VAR_1->stats.rx_bytes = VAR_2->dma_oct_rc;
 VAR_1->stats.rx_errors = VAR_2->erpr;
 VAR_1->stats.rx_dropped = VAR_2->dpc;
 VAR_1->stats.tx_packets = VAR_2->dma_pkt_tc;
 VAR_1->stats.tx_bytes = VAR_2->dma_oct_tc;
 VAR_1->stats.tx_errors = VAR_2->erpt;
 VAR_1->stats.multicast = VAR_2->mprc;
}
