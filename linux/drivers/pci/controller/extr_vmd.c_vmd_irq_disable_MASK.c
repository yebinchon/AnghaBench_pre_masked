
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmd_irq {int enabled; int node; } ;
struct irq_data {TYPE_1__* chip; struct vmd_irq* chip_data; } ;
struct TYPE_2__ {int (* irq_mask ) (struct irq_data*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct vmd_irq *VAR_2 = VAR_1->chip_data;
 unsigned long VAR_3;

 VAR_1->chip->irq_mask(VAR_1);

 FUNC_1(&VAR_0, VAR_3);
 if (VAR_2->enabled) {
  FUNC_0(&VAR_2->node);
  VAR_2->enabled = 0;
 }
 FUNC_2(&VAR_0, VAR_3);
}
