
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int neigh_list; int neigh_ht; } ;
struct mlx5e_rep_priv {TYPE_1__ neigh_update; } ;
struct mlx5e_priv {struct mlx5e_rep_priv* ppriv; } ;
struct mlx5e_neigh_hash_entry {int neigh_list; int rhash_node; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_1,
     struct mlx5e_neigh_hash_entry *VAR_2)
{
 struct mlx5e_rep_priv *VAR_3 = VAR_1->ppriv;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3->neigh_update.neigh_ht,
         &VAR_2->rhash_node,
         VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_2->neigh_list, &VAR_3->neigh_update.neigh_list);

 return VAR_4;
}
