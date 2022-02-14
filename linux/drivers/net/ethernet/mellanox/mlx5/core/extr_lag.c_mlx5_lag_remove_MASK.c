
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ notifier_call; } ;
struct mlx5_lag {int bond_work; TYPE_2__ nb; TYPE_1__* pf; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_lag*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_lag*) ;
 int FUNC_3 (struct mlx5_lag*) ;
 struct mlx5_lag* FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (struct mlx5_lag*,struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_lag*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_lag *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 if (!VAR_2)
  return;

 if (FUNC_0(VAR_2))
  FUNC_2(VAR_2);

 FUNC_5(VAR_2, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->pf[VAR_3].dev)
   break;

 if (VAR_3 == VAR_0) {
  if (VAR_2->nb.notifier_call)
   FUNC_7(&VAR_2->nb);
  FUNC_6(VAR_2);
  FUNC_1(&VAR_2->bond_work);
  FUNC_3(VAR_2);
 }
}
