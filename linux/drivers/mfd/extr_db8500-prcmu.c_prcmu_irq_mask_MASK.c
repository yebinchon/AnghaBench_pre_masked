
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {size_t hwirq; scalar_t__ irq; } ;
struct TYPE_3__ {int dbb_irqs; } ;
struct TYPE_4__ {int mask_work; int dbb_irqs_lock; TYPE_1__ req; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1.dbb_irqs_lock, VAR_4);

 VAR_1.req.dbb_irqs &= ~VAR_2[VAR_3->hwirq];

 FUNC_2(&VAR_1.dbb_irqs_lock, VAR_4);

 if (VAR_3->irq != VAR_0)
  FUNC_0(&VAR_1.mask_work);
}
