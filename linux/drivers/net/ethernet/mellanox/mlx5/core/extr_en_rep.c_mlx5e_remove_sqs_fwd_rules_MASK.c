
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; TYPE_2__* mdev; } ;
struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_3__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_eswitch*,struct mlx5_eswitch_rep*) ;

void FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5_eswitch *VAR_1 = VAR_0->mdev->priv.eswitch;
 struct mlx5e_rep_priv *VAR_2 = VAR_0->ppriv;
 struct mlx5_eswitch_rep *VAR_3 = VAR_2->rep;

 FUNC_0(VAR_1, VAR_3);
}
