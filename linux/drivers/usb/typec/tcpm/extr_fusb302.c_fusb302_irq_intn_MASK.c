
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb302_chip {int irq_while_suspended; int irq_lock; int irq_work; scalar_t__ irq_suspended; int gpio_int_n_irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct fusb302_chip *VAR_3 = VAR_2;
 unsigned long VAR_4;


 FUNC_0(VAR_3->gpio_int_n_irq);

 FUNC_2(&VAR_3->irq_lock, VAR_4);
 if (VAR_3->irq_suspended)
  VAR_3->irq_while_suspended = 1;
 else
  FUNC_1(&VAR_3->irq_work);
 FUNC_3(&VAR_3->irq_lock, VAR_4);

 return VAR_0;
}
