
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int irqn; scalar_t__ cons_index; } ;
struct mlx5_eq_comp {TYPE_1__ core; int irq_nb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;

u32 FUNC_3(struct mlx5_eq_comp *VAR_0)
{
 u32 VAR_1;

 FUNC_0(VAR_0->core.irqn);
 VAR_1 = VAR_0->core.cons_index;
 FUNC_2(&VAR_0->irq_nb, 0, ((void*)0));
 VAR_1 = VAR_0->core.cons_index - VAR_1;
 FUNC_1(VAR_0->core.irqn);

 return VAR_1;
}
