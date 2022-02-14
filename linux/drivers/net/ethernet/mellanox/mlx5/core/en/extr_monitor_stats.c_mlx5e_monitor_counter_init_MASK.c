
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int update_stats_work; int wq; int monitor_counters_work; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int VAR_0 ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct mlx5e_priv *VAR_1)
{
 FUNC_0(&VAR_1->monitor_counters_work, VAR_0);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1->wq, &VAR_1->update_stats_work);
}
