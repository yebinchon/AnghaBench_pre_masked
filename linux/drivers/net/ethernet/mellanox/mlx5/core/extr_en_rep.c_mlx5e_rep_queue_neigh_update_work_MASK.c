
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int dummy; } ;
struct mlx5e_priv {int wq; } ;
struct mlx5e_neigh_hash_entry {int neigh_update_work; struct neighbour* n; } ;


 int FUNC_0 (struct mlx5e_neigh_hash_entry*) ;
 int FUNC_1 (struct neighbour*) ;
 int FUNC_2 (struct neighbour*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_priv *VAR_0,
      struct mlx5e_neigh_hash_entry *VAR_1,
      struct neighbour *VAR_2)
{




 FUNC_1(VAR_2);




 VAR_1->n = VAR_2;

 if (!FUNC_3(VAR_0->wq, &VAR_1->neigh_update_work)) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_2);
 }
}
