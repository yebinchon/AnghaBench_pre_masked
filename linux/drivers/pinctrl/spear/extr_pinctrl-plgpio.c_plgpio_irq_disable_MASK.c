
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ie; } ;
struct plgpio {int (* p2o ) (int) ;int p2o_regs; int lock; TYPE_1__ regs; int base; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct plgpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_1(VAR_1);
 struct plgpio *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = VAR_1->hwirq;
 unsigned long VAR_5;


 if (VAR_3->p2o && (VAR_3->p2o_regs & VAR_0)) {
  VAR_4 = VAR_3->p2o(VAR_4);
  if (VAR_4 == -1)
   return;
 }

 FUNC_3(&VAR_3->lock, VAR_5);
 FUNC_2(VAR_3->base, VAR_4, VAR_3->regs.ie);
 FUNC_4(&VAR_3->lock, VAR_5);
}
