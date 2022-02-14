
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fc_stats {int fc_pool; } ;
struct mlx5_fc {scalar_t__ bulk; } ;
struct TYPE_2__ {struct mlx5_fc_stats fc_stats; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_fc*) ;
 int FUNC_1 (int *,struct mlx5_fc*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0, struct mlx5_fc *VAR_1)
{
 struct mlx5_fc_stats *VAR_2 = &VAR_0->priv.fc_stats;

 if (VAR_1->bulk)
  FUNC_1(&VAR_2->fc_pool, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
