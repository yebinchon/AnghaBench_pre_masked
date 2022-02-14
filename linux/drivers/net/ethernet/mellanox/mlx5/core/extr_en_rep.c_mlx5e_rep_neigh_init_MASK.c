
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct mlx5e_neigh_update_table {int neigh_ht; TYPE_1__ netevent_nb; int neigh_stats_work; int encap_lock; int neigh_list; } ;
struct mlx5e_rep_priv {struct mlx5e_neigh_update_table neigh_update; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5e_rep_priv*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct mlx5e_rep_priv *VAR_3)
{
 struct mlx5e_neigh_update_table *VAR_4 = &VAR_3->neigh_update;
 int VAR_5;

 VAR_5 = FUNC_6(&VAR_4->neigh_ht, &VAR_0);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_4->neigh_list);
 FUNC_3(&VAR_4->encap_lock);
 FUNC_0(&VAR_4->neigh_stats_work,
     VAR_1);
 FUNC_2(VAR_3);

 VAR_3->neigh_update.netevent_nb.notifier_call = VAR_2;
 VAR_5 = FUNC_4(&VAR_3->neigh_update.netevent_nb);
 if (VAR_5)
  goto out_err;
 return 0;

out_err:
 FUNC_5(&VAR_4->neigh_ht);
 return VAR_5;
}
