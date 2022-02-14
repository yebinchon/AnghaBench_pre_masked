
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_rep_priv {struct mlx5_flow_handle* vport_rx_rule; struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; TYPE_2__* mdev; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_flow_destination {int dummy; } ;
struct mlx5_eswitch_rep {int vport; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_3__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;
 int FUNC_1 (struct mlx5_flow_handle*) ;
 int FUNC_2 (struct mlx5_flow_handle*) ;
 struct mlx5_flow_handle* FUNC_3 (struct mlx5_eswitch*,int ,struct mlx5_flow_destination*) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_0,
        struct mlx5_flow_destination *VAR_1)
{
 struct mlx5_eswitch *VAR_2 = VAR_0->mdev->priv.eswitch;
 struct mlx5e_rep_priv *VAR_3 = VAR_0->ppriv;
 struct mlx5_eswitch_rep *VAR_4 = VAR_3->rep;
 struct mlx5_flow_handle *VAR_5;

 VAR_5 = FUNC_3(VAR_2,
            VAR_4->vport,
            VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_2(VAR_3->vport_rx_rule);
 VAR_3->vport_rx_rule = VAR_5;
 return 0;
}
