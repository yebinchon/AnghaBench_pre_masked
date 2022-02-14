
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_pinctrl {int irqmux_map; int irqmux_lock; scalar_t__ hwlock; int * irqmux; int dev; } ;
struct TYPE_2__ {int parent; } ;
struct stm32_gpio_bank {int bank_ioport_nr; TYPE_1__ gpio_chip; } ;
struct irq_domain {struct stm32_gpio_bank* host_data; } ;
struct irq_data {size_t hwirq; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 struct stm32_pinctrl* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct irq_domain *VAR_2,
          struct irq_data *VAR_3, bool VAR_4)
{
 struct stm32_gpio_bank *VAR_5 = VAR_2->host_data;
 struct stm32_pinctrl *VAR_6 = FUNC_2(VAR_5->gpio_chip.parent);
 unsigned long VAR_7;
 int VAR_8 = 0;





 FUNC_6(&VAR_6->irqmux_lock, VAR_7);
 if (VAR_6->hwlock)
  VAR_8 = FUNC_3(VAR_6->hwlock, VAR_1);

 if (VAR_8) {
  FUNC_1(VAR_6->dev, "Can't get hwspinlock\n");
  goto unlock;
 }

 if (VAR_6->irqmux_map & FUNC_0(VAR_3->hwirq)) {
  FUNC_1(VAR_6->dev, "irq line %ld already requested.\n",
   VAR_3->hwirq);
  VAR_8 = -VAR_0;
  if (VAR_6->hwlock)
   FUNC_4(VAR_6->hwlock);
  goto unlock;
 } else {
  VAR_6->irqmux_map |= FUNC_0(VAR_3->hwirq);
 }

 FUNC_5(VAR_6->irqmux[VAR_3->hwirq], VAR_5->bank_ioport_nr);

 if (VAR_6->hwlock)
  FUNC_4(VAR_6->hwlock);

unlock:
 FUNC_7(&VAR_6->irqmux_lock, VAR_7);
 return VAR_8;
}
