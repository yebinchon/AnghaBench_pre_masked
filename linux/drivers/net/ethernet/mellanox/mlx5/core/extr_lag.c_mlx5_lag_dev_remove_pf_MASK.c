
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_lag {TYPE_2__* pf; } ;
struct TYPE_3__ {int * lag; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_4__ {struct mlx5_core_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_lag *VAR_2,
       struct mlx5_core_dev *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->pf[VAR_4].dev == VAR_3)
   break;

 if (VAR_4 == VAR_0)
  return;

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_2->pf[VAR_4], 0, sizeof(*VAR_2->pf));

 VAR_3->priv.lag = ((void*)0);
 FUNC_2(&VAR_1);
}
