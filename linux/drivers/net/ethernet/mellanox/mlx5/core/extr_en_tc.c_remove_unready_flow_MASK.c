
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_tc_flow {TYPE_3__* priv; } ;
struct mlx5_rep_uplink_priv {int unready_flows_lock; } ;
struct mlx5e_rep_priv {struct mlx5_rep_uplink_priv uplink_priv; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_6__ {TYPE_2__* mdev; } ;
struct TYPE_4__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_5__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 struct mlx5e_rep_priv* FUNC_0 (struct mlx5_eswitch*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_tc_flow*) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_tc_flow *VAR_1)
{
 struct mlx5_rep_uplink_priv *VAR_2;
 struct mlx5e_rep_priv *VAR_3;
 struct mlx5_eswitch *VAR_4;

 VAR_4 = VAR_1->priv->mdev->priv.eswitch;
 VAR_3 = FUNC_0(VAR_4, VAR_0);
 VAR_2 = &VAR_3->uplink_priv;

 FUNC_1(&VAR_2->unready_flows_lock);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_2->unready_flows_lock);
}
