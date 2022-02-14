
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_irq_table {int dummy; } ;
struct TYPE_2__ {struct mlx5_irq_table* irq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_irq_table* FUNC_0 (int,int ) ;

int FUNC_1(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_irq_table *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->priv.irq_table = VAR_3;
 return 0;
}
