
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc_pool {scalar_t__ threshold; scalar_t__ used_fcs; scalar_t__ available_fcs; int unused; int partially_used; int fully_used; int pool_lock; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_fc_pool *VAR_0, struct mlx5_core_dev *VAR_1)
{
 VAR_0->dev = VAR_1;
 FUNC_1(&VAR_0->pool_lock);
 FUNC_0(&VAR_0->fully_used);
 FUNC_0(&VAR_0->partially_used);
 FUNC_0(&VAR_0->unused);
 VAR_0->available_fcs = 0;
 VAR_0->used_fcs = 0;
 VAR_0->threshold = 0;
}
