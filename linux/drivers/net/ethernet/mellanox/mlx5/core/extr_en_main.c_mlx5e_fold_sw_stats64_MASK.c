
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int tx_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct mlx5e_sq_stats {scalar_t__ dropped; scalar_t__ bytes; scalar_t__ packets; } ;
struct mlx5e_rq_stats {scalar_t__ bytes; scalar_t__ packets; } ;
struct mlx5e_priv {int max_nch; int max_opened_tc; struct mlx5e_channel_stats* channel_stats; } ;
struct mlx5e_channel_stats {struct mlx5e_sq_stats* sq; struct mlx5e_rq_stats rq; struct mlx5e_rq_stats xskrq; } ;



void FUNC_0(struct mlx5e_priv *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->max_nch; VAR_2++) {
  struct mlx5e_channel_stats *VAR_3 = &VAR_0->channel_stats[VAR_2];
  struct mlx5e_rq_stats *VAR_4 = &VAR_3->xskrq;
  struct mlx5e_rq_stats *VAR_5 = &VAR_3->rq;
  int VAR_6;

  VAR_1->rx_packets += VAR_5->packets + VAR_4->packets;
  VAR_1->rx_bytes += VAR_5->bytes + VAR_4->bytes;

  for (VAR_6 = 0; VAR_6 < VAR_0->max_opened_tc; VAR_6++) {
   struct mlx5e_sq_stats *VAR_7 = &VAR_3->sq[VAR_6];

   VAR_1->tx_packets += VAR_7->packets;
   VAR_1->tx_bytes += VAR_7->bytes;
   VAR_1->tx_dropped += VAR_7->dropped;
  }
 }
}
