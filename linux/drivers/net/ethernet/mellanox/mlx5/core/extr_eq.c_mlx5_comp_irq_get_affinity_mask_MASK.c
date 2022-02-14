
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq_table; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct cpumask {int dummy; } ;
struct TYPE_3__ {int irq_table; } ;


 int VAR_0 ;
 struct cpumask* FUNC_0 (int ,int) ;

struct cpumask *
FUNC_1(struct mlx5_core_dev *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 + VAR_0;

 return FUNC_0(VAR_1->priv.eq_table->irq_table,
       VAR_3);
}
