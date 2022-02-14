
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_priv {TYPE_2__* mdev; } ;
struct mlx5_core_health {scalar_t__ fatal_error; } ;
struct TYPE_3__ {struct mlx5_core_health health; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;



__attribute__((used)) static int FUNC_0(struct mlx5e_priv *VAR_0)
{
 struct mlx5_core_health *VAR_1 = &VAR_0->mdev->priv.health;

 return VAR_1->fatal_error ? 1 : 0;
}
