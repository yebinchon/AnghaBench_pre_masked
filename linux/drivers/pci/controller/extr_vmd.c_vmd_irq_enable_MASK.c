
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmd_irq {int enabled; TYPE_2__* irq; int node; } ;
struct irq_data {TYPE_1__* chip; struct vmd_irq* chip_data; } ;
struct TYPE_4__ {int irq_list; } ;
struct TYPE_3__ {int (* irq_unmask ) (struct irq_data*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct vmd_irq *VAR_2 = VAR_1->chip_data;
 unsigned long VAR_3;

 FUNC_2(&VAR_0, VAR_3);
 FUNC_0(VAR_2->enabled);
 FUNC_1(&VAR_2->node, &VAR_2->irq->irq_list);
 VAR_2->enabled = 1;
 FUNC_3(&VAR_0, VAR_3);

 VAR_1->chip->irq_unmask(VAR_1);
}
