
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mvneta_tx_queue {int done_pkts_coal; } ;
struct mvneta_rx_queue {int time_coal; int pkts_coal; } ;
struct mvneta_port {struct mvneta_tx_queue* txqs; struct mvneta_rx_queue* rxqs; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int FUNC_0 (struct mvneta_port*,struct mvneta_rx_queue*,int ) ;
 int FUNC_1 (struct mvneta_port*,struct mvneta_rx_queue*,int ) ;
 int FUNC_2 (struct mvneta_port*,struct mvneta_tx_queue*,int ) ;
 struct mvneta_port* FUNC_3 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
           struct ethtool_coalesce *VAR_3)
{
 struct mvneta_port *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct mvneta_rx_queue *VAR_6 = &VAR_4->rxqs[VAR_5];
  VAR_6->time_coal = VAR_3->rx_coalesce_usecs;
  VAR_6->pkts_coal = VAR_3->rx_max_coalesced_frames;
  FUNC_0(VAR_4, VAR_6, VAR_6->pkts_coal);
  FUNC_1(VAR_4, VAR_6, VAR_6->time_coal);
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct mvneta_tx_queue *VAR_7 = &VAR_4->txqs[VAR_5];
  VAR_7->done_pkts_coal = VAR_3->tx_max_coalesced_frames;
  FUNC_2(VAR_4, VAR_7, VAR_7->done_pkts_coal);
 }

 return 0;
}
