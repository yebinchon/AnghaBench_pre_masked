
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_irq_table {int nvec; } ;
struct TYPE_3__ {struct mlx5_irq_table* irq_table; } ;
struct mlx5_core_dev {int pdev; TYPE_1__ priv; } ;
struct TYPE_4__ {int nh; } ;


 int FUNC_0 (int ,int *) ;
 TYPE_2__* FUNC_1 (struct mlx5_core_dev*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_irq_table *VAR_1 = VAR_0->priv.irq_table;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nvec; VAR_2++)
  FUNC_0(FUNC_2(VAR_0->pdev, VAR_2),
    &FUNC_1(VAR_0, VAR_2)->nh);
}
