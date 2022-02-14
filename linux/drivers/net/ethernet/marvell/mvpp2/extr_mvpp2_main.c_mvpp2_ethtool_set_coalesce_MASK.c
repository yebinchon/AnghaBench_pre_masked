
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mvpp2_tx_queue {int done_pkts_coal; } ;
struct mvpp2_rx_queue {int pkts_coal; int time_coal; } ;
struct mvpp2_port {int nrxqs; int ntxqs; scalar_t__ has_tx_irqs; struct mvpp2_tx_queue** txqs; int tx_time_coal; struct mvpp2_rx_queue** rxqs; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int tx_coalesce_usecs; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int FUNC_0 (struct mvpp2_port*,struct mvpp2_rx_queue*) ;
 int FUNC_1 (struct mvpp2_port*,struct mvpp2_rx_queue*) ;
 int FUNC_2 (struct mvpp2_port*,struct mvpp2_tx_queue*) ;
 int FUNC_3 (struct mvpp2_port*) ;
 struct mvpp2_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
          struct ethtool_coalesce *VAR_1)
{
 struct mvpp2_port *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nrxqs; VAR_3++) {
  struct mvpp2_rx_queue *VAR_4 = VAR_2->rxqs[VAR_3];

  VAR_4->time_coal = VAR_1->rx_coalesce_usecs;
  VAR_4->pkts_coal = VAR_1->rx_max_coalesced_frames;
  FUNC_0(VAR_2, VAR_4);
  FUNC_1(VAR_2, VAR_4);
 }

 if (VAR_2->has_tx_irqs) {
  VAR_2->tx_time_coal = VAR_1->tx_coalesce_usecs;
  FUNC_3(VAR_2);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->ntxqs; VAR_3++) {
  struct mvpp2_tx_queue *VAR_5 = VAR_2->txqs[VAR_3];

  VAR_5->done_pkts_coal = VAR_1->tx_max_coalesced_frames;

  if (VAR_2->has_tx_irqs)
   FUNC_2(VAR_2, VAR_5);
 }

 return 0;
}
