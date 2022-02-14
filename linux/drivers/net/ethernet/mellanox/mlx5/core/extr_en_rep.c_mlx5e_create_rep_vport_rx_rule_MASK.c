
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_rep_priv {struct mlx5_flow_handle* vport_rx_rule; struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {TYPE_1__* direct_tir; struct mlx5e_rep_priv* ppriv; TYPE_3__* mdev; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_flow_destination {int tir_num; int type; } ;
struct mlx5_eswitch_rep {int vport; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_5__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_6__ {TYPE_2__ priv; } ;
struct TYPE_4__ {int tirn; } ;


 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_flow_handle*) ;
 struct mlx5_flow_handle* FUNC_2 (struct mlx5_eswitch*,int ,struct mlx5_flow_destination*) ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_1)
{
 struct mlx5_eswitch *VAR_2 = VAR_1->mdev->priv.eswitch;
 struct mlx5e_rep_priv *VAR_3 = VAR_1->ppriv;
 struct mlx5_eswitch_rep *VAR_4 = VAR_3->rep;
 struct mlx5_flow_handle *VAR_5;
 struct mlx5_flow_destination VAR_6;

 VAR_6.type = VAR_0;
 VAR_6.tir_num = VAR_1->direct_tir[0].tirn;
 VAR_5 = FUNC_2(VAR_2,
            VAR_4->vport,
            &VAR_6);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_3->vport_rx_rule = VAR_5;
 return 0;
}
