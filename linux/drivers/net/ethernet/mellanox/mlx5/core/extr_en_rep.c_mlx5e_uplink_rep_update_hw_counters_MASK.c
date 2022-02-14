
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {void* tx_bytes; void* tx_packets; void* rx_bytes; void* rx_packets; } ;
struct mlx5e_pport_stats {int dummy; } ;
struct TYPE_2__ {struct rtnl_link_stats64 vf_vport; struct mlx5e_pport_stats pport; } ;
struct mlx5e_priv {TYPE_1__ stats; } ;


 void* FUNC_0 (struct mlx5e_pport_stats*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5e_priv*) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_4)
{
 struct mlx5e_pport_stats *VAR_5 = &VAR_4->stats.pport;
 struct rtnl_link_stats64 *VAR_6;

 FUNC_1(VAR_4);

 VAR_6 = &VAR_4->stats.vf_vport;

 VAR_6->rx_packets = FUNC_0(VAR_5, VAR_0);
 VAR_6->rx_bytes = FUNC_0(VAR_5, VAR_2);
 VAR_6->tx_packets = FUNC_0(VAR_5, VAR_1);
 VAR_6->tx_bytes = FUNC_0(VAR_5, VAR_3);
}
