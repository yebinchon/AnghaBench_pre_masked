
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_neigh_update_table {int min_interval; int neigh_stats_work; } ;
struct mlx5e_rep_priv {struct mlx5e_neigh_update_table neigh_update; } ;
struct mlx5e_priv {int mdev; struct mlx5e_rep_priv* ppriv; } ;


 int FUNC_0 (int ,int *,int ) ;

void FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_rep_priv *VAR_1 = VAR_0->ppriv;
 struct mlx5e_neigh_update_table *VAR_2 = &VAR_1->neigh_update;

 FUNC_0(VAR_0->mdev,
     &VAR_2->neigh_stats_work,
     VAR_2->min_interval);
}
