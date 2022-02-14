
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct mlx5e_sw_stats {int tx_queue_dropped; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct TYPE_2__ {struct mlx5e_sw_stats sw; } ;
struct mlx5e_priv {TYPE_1__ stats; } ;


 int FUNC_0 (struct mlx5e_sw_stats*,int ,int) ;
 int FUNC_1 (struct mlx5e_priv*,struct rtnl_link_stats64*) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_sw_stats *VAR_1 = &VAR_0->stats.sw;
 struct rtnl_link_stats64 VAR_2 = {};

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(VAR_0, &VAR_2);

 VAR_1->rx_packets = VAR_2;
 VAR_1->rx_bytes = VAR_2;
 VAR_1->tx_packets = VAR_2;
 VAR_1->tx_bytes = VAR_2;
 VAR_1->tx_queue_dropped = VAR_2;
}
