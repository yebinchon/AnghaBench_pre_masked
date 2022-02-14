
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct net_device {int dummy; } ;
struct mlx5e_sw_stats {int tx_queue_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct TYPE_2__ {struct mlx5e_sw_stats sw; } ;
struct mlx5e_priv {TYPE_1__ stats; } ;


 struct mlx5e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlx5e_priv*) ;

void FUNC_2(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_0(VAR_0);
 struct mlx5e_sw_stats *VAR_3 = &VAR_2->stats.sw;

 FUNC_1(VAR_2);

 VAR_1->rx_packets = VAR_3->rx_packets;
 VAR_1->rx_bytes = VAR_3->rx_bytes;
 VAR_1->tx_packets = VAR_3->tx_packets;
 VAR_1->tx_bytes = VAR_3->tx_bytes;
 VAR_1->tx_dropped = VAR_3->tx_queue_dropped;
}
