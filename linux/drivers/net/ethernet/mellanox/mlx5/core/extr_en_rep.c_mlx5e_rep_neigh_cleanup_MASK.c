
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_neigh_update_table {int neigh_ht; int encap_lock; int neigh_stats_work; int netevent_nb; } ;
struct mlx5e_rep_priv {struct mlx5e_neigh_update_table neigh_update; int netdev; } ;
struct mlx5e_priv {int wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct mlx5e_priv* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlx5e_rep_priv *VAR_0)
{
 struct mlx5e_neigh_update_table *VAR_1 = &VAR_0->neigh_update;
 struct mlx5e_priv *VAR_2 = FUNC_3(VAR_0->netdev);

 FUNC_5(&VAR_1->netevent_nb);

 FUNC_1(VAR_2->wq);

 FUNC_0(&VAR_0->neigh_update.neigh_stats_work);

 FUNC_2(&VAR_1->encap_lock);
 FUNC_4(&VAR_1->neigh_ht);
}
