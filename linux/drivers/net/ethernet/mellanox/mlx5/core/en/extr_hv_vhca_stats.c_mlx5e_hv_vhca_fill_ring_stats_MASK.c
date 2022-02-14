
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_priv {int max_opened_tc; struct mlx5e_channel_stats* channel_stats; } ;
struct mlx5e_hv_vhca_per_ring_stats {int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct TYPE_3__ {int bytes; int packets; } ;
struct mlx5e_channel_stats {TYPE_2__* sq; TYPE_1__ rq; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ packets; } ;



__attribute__((used)) static void
FUNC_0(struct mlx5e_priv *VAR_0, int VAR_1,
         struct mlx5e_hv_vhca_per_ring_stats *VAR_2)
{
 struct mlx5e_channel_stats *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_0->channel_stats[VAR_1];
 VAR_2->rx_packets = VAR_3->rq.packets;
 VAR_2->rx_bytes = VAR_3->rq.bytes;

 for (VAR_4 = 0; VAR_4 < VAR_0->max_opened_tc; VAR_4++) {
  VAR_2->tx_packets += VAR_3->sq[VAR_4].packets;
  VAR_2->tx_bytes += VAR_3->sq[VAR_4].bytes;
 }
}
