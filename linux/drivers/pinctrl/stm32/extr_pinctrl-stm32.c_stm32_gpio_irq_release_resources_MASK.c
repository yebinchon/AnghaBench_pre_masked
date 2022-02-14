
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_gpio_bank {int gpio_chip; } ;
struct irq_data {int hwirq; TYPE_1__* domain; } ;
struct TYPE_2__ {struct stm32_gpio_bank* host_data; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0)
{
 struct stm32_gpio_bank *VAR_1 = VAR_0->domain->host_data;

 FUNC_0(&VAR_1->gpio_chip, VAR_0->hwirq);
}
