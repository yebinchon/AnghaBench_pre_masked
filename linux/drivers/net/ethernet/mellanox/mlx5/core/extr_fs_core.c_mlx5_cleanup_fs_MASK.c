
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {int fgs_cache; int ftes_cache; int * egress_root_ns; int * rdma_rx_root_ns; int * sniffer_tx_root_ns; int * sniffer_rx_root_ns; struct mlx5_flow_steering* fdb_sub_ns; int * fdb_root_ns; int * root_ns; } ;
struct TYPE_2__ {struct mlx5_flow_steering* steering; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_flow_steering*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_core_dev*) ;

void FUNC_6(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_flow_steering *VAR_1 = VAR_0->priv.steering;

 FUNC_2(VAR_1->root_ns);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_1->fdb_root_ns);
 VAR_1->fdb_root_ns = ((void*)0);
 FUNC_3(VAR_1->fdb_sub_ns);
 VAR_1->fdb_sub_ns = ((void*)0);
 FUNC_2(VAR_1->sniffer_rx_root_ns);
 FUNC_2(VAR_1->sniffer_tx_root_ns);
 FUNC_2(VAR_1->rdma_rx_root_ns);
 FUNC_2(VAR_1->egress_root_ns);
 FUNC_5(VAR_0);
 FUNC_4(VAR_1->ftes_cache);
 FUNC_4(VAR_1->fgs_cache);
 FUNC_3(VAR_1);
}
