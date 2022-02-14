
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int monitor_counters_work; int monitor_counters_nb; int mdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_0)
{
 FUNC_1(VAR_0->mdev, &VAR_0->monitor_counters_nb);
 FUNC_0(&VAR_0->monitor_counters_work);
}
