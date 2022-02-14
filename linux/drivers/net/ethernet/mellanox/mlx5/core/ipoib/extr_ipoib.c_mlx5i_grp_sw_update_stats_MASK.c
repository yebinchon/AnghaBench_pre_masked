
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_sw_stats {int tx_queue_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; int member_0; } ;
struct mlx5e_sq_stats {scalar_t__ dropped; scalar_t__ bytes; scalar_t__ packets; } ;
struct mlx5e_rq_stats {scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_2__ {int sw; } ;
struct mlx5e_priv {int max_nch; int max_opened_tc; TYPE_1__ stats; struct mlx5e_channel_stats* channel_stats; } ;
struct mlx5e_channel_stats {struct mlx5e_sq_stats* sq; struct mlx5e_rq_stats rq; } ;
typedef int s ;


 int FUNC_0 (int *,struct mlx5e_sw_stats*,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_sw_stats VAR_1 = { 0 };
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->max_nch; VAR_2++) {
  struct mlx5e_channel_stats *VAR_4;
  struct mlx5e_rq_stats *VAR_5;

  VAR_4 = &VAR_0->channel_stats[VAR_2];
  VAR_5 = &VAR_4->rq;

  VAR_1.rx_packets += VAR_5->packets;
  VAR_1.rx_bytes += VAR_5->bytes;

  for (VAR_3 = 0; VAR_3 < VAR_0->max_opened_tc; VAR_3++) {
   struct mlx5e_sq_stats *VAR_6 = &VAR_4->sq[VAR_3];

   VAR_1.tx_packets += VAR_6->packets;
   VAR_1.tx_bytes += VAR_6->bytes;
   VAR_1.tx_queue_dropped += VAR_6->dropped;
  }
 }

 FUNC_0(&VAR_0->stats.sw, &VAR_1, sizeof(VAR_1));
}
