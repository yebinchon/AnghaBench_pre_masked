
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct mlx5e_priv {int mdev; struct mlx5e_rep_priv* ppriv; } ;
struct mlx5_eswitch_rep {scalar_t__ vport; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

bool FUNC_1(struct mlx5e_priv *VAR_1)
{
 struct mlx5e_rep_priv *VAR_2 = VAR_1->ppriv;
 struct mlx5_eswitch_rep *VAR_3;

 if (!FUNC_0(VAR_1->mdev))
  return 0;

 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->rep;
 return (VAR_3->vport == VAR_0);
}
