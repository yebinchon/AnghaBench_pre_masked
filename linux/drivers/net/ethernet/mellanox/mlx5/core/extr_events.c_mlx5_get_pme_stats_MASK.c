
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_pme_stats {int dummy; } ;
struct TYPE_4__ {TYPE_1__* events; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_3__ {struct mlx5_pme_stats pme_stats; } ;



void FUNC_0(struct mlx5_core_dev *VAR_0, struct mlx5_pme_stats *VAR_1)
{
 *VAR_1 = VAR_0->priv.events->pme_stats;
}
