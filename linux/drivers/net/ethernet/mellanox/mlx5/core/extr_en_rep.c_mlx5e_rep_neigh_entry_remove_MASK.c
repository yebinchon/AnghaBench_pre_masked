
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int encap_lock; int neigh_ht; } ;
struct mlx5e_rep_priv {TYPE_2__ neigh_update; } ;
struct mlx5e_neigh_hash_entry {int rhash_node; int neigh_list; TYPE_1__* priv; } ;
struct TYPE_3__ {struct mlx5e_rep_priv* ppriv; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_neigh_hash_entry *VAR_1)
{
 struct mlx5e_rep_priv *VAR_2 = VAR_1->priv->ppriv;

 FUNC_1(&VAR_2->neigh_update.encap_lock);

 FUNC_0(&VAR_1->neigh_list);

 FUNC_3(&VAR_2->neigh_update.neigh_ht,
          &VAR_1->rhash_node,
          VAR_0);
 FUNC_2(&VAR_2->neigh_update.encap_lock);
}
