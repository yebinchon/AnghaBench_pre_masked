
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_profile {int (* cleanup_tx ) (struct mlx5e_priv*) ;int (* cleanup_rx ) (struct mlx5e_priv*) ;int (* disable ) (struct mlx5e_priv*) ;} ;
struct mlx5e_priv {int update_stats_work; int wq; int state; struct mlx5e_profile* profile; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;

void FUNC_6(struct mlx5e_priv *VAR_1)
{
 const struct mlx5e_profile *VAR_2 = VAR_1->profile;

 FUNC_2(VAR_0, &VAR_1->state);

 if (VAR_2->disable)
  VAR_2->disable(VAR_1);
 FUNC_1(VAR_1->wq);

 VAR_2->cleanup_rx(VAR_1);
 VAR_2->cleanup_tx(VAR_1);
 FUNC_0(&VAR_1->update_stats_work);
}
