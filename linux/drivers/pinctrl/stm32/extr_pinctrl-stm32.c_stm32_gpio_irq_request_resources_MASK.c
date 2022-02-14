
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_pinctrl {int dev; } ;
struct TYPE_5__ {int parent; } ;
struct stm32_gpio_bank {TYPE_2__ gpio_chip; } ;
struct irq_data {int hwirq; TYPE_1__* domain; } ;
struct TYPE_4__ {struct stm32_gpio_bank* host_data; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct stm32_pinctrl* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_0)
{
 struct stm32_gpio_bank *VAR_1 = VAR_0->domain->host_data;
 struct stm32_pinctrl *VAR_2 = FUNC_1(VAR_1->gpio_chip.parent);
 int VAR_3;

 VAR_3 = FUNC_3(&VAR_1->gpio_chip, VAR_0->hwirq);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(&VAR_1->gpio_chip, VAR_0->hwirq);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "unable to lock HW IRQ %lu for IRQ\n",
   VAR_0->hwirq);
  return VAR_3;
 }

 return 0;
}
