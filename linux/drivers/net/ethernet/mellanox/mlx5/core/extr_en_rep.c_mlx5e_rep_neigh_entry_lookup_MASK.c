
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_neigh_update_table {int neigh_ht; } ;
struct mlx5e_rep_priv {struct mlx5e_neigh_update_table neigh_update; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; } ;
struct mlx5e_neigh_hash_entry {int dummy; } ;
struct mlx5e_neigh {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5e_neigh_hash_entry*) ;
 struct mlx5e_neigh_hash_entry* FUNC_1 (int *,struct mlx5e_neigh*,int ) ;

__attribute__((used)) static struct mlx5e_neigh_hash_entry *
FUNC_2(struct mlx5e_priv *VAR_1,
        struct mlx5e_neigh *VAR_2)
{
 struct mlx5e_rep_priv *VAR_3 = VAR_1->ppriv;
 struct mlx5e_neigh_update_table *VAR_4 = &VAR_3->neigh_update;
 struct mlx5e_neigh_hash_entry *VAR_5;

 VAR_5 = FUNC_1(&VAR_4->neigh_ht, VAR_2,
         VAR_0);
 return VAR_5 && FUNC_0(VAR_5) ? VAR_5 : ((void*)0);
}
