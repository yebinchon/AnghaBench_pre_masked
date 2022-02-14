
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_tx_ring {scalar_t__ xmit_more; scalar_t__ tso_packets; scalar_t__ wake_queue; scalar_t__ queue_stopped; scalar_t__ tx_dropped; scalar_t__ tx_csum; scalar_t__ packets; scalar_t__ bytes; } ;
struct mlx4_en_priv {int* tx_ring_num; int rx_ring_num; TYPE_1__** rx_ring; struct mlx4_en_tx_ring*** tx_ring; int pf_stats; int tx_priority_flowstats; int rx_priority_flowstats; int tx_flowstats; int rx_flowstats; int port_stats; int pkstats; int pstats; int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ csum_complete; scalar_t__ csum_none; scalar_t__ csum_ok; scalar_t__ packets; scalar_t__ bytes; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (struct mlx4_en_dev*,int ,int) ;
 int FUNC_3 (int ) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_4(VAR_2);
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;
 struct mlx4_en_tx_ring **VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_4->dev))
  if (FUNC_2(VAR_4, VAR_3->port, 1))
   FUNC_0(VAR_0, VAR_3, "Failed dumping statistics\n");

 FUNC_1(&VAR_3->pstats, 0, sizeof(VAR_3->pstats));
 FUNC_1(&VAR_3->pkstats, 0, sizeof(VAR_3->pkstats));
 FUNC_1(&VAR_3->port_stats, 0, sizeof(VAR_3->port_stats));
 FUNC_1(&VAR_3->rx_flowstats, 0, sizeof(VAR_3->rx_flowstats));
 FUNC_1(&VAR_3->tx_flowstats, 0, sizeof(VAR_3->tx_flowstats));
 FUNC_1(&VAR_3->rx_priority_flowstats, 0,
        sizeof(VAR_3->rx_priority_flowstats));
 FUNC_1(&VAR_3->tx_priority_flowstats, 0,
        sizeof(VAR_3->tx_priority_flowstats));
 FUNC_1(&VAR_3->pf_stats, 0, sizeof(VAR_3->pf_stats));

 VAR_5 = VAR_3->tx_ring[VAR_1];
 for (VAR_6 = 0; VAR_6 < VAR_3->tx_ring_num[VAR_1]; VAR_6++) {
  VAR_5[VAR_6]->bytes = 0;
  VAR_5[VAR_6]->packets = 0;
  VAR_5[VAR_6]->tx_csum = 0;
  VAR_5[VAR_6]->tx_dropped = 0;
  VAR_5[VAR_6]->queue_stopped = 0;
  VAR_5[VAR_6]->wake_queue = 0;
  VAR_5[VAR_6]->tso_packets = 0;
  VAR_5[VAR_6]->xmit_more = 0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_3->rx_ring_num; VAR_6++) {
  VAR_3->rx_ring[VAR_6]->bytes = 0;
  VAR_3->rx_ring[VAR_6]->packets = 0;
  VAR_3->rx_ring[VAR_6]->csum_ok = 0;
  VAR_3->rx_ring[VAR_6]->csum_none = 0;
  VAR_3->rx_ring[VAR_6]->csum_complete = 0;
 }
}
