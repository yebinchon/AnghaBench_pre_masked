
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {int irq; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {int fwnode; TYPE_2__ desc; } ;
struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pm8xxx_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct irq_fwspec*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct pm8xxx_gpio *VAR_4 = FUNC_0(VAR_2);
 struct pm8xxx_pin_data *VAR_5 = VAR_4->desc.pins[VAR_3].drv_data;
 struct irq_fwspec VAR_6;
 int VAR_7;

 VAR_6.fwnode = VAR_4->fwnode;
 VAR_6.param_count = 2;
 VAR_6.param[0] = VAR_3 + VAR_1;
 VAR_6.param[1] = VAR_0;

 VAR_7 = FUNC_1(&VAR_6);





 VAR_5->irq = VAR_7;

 return VAR_7;
}
