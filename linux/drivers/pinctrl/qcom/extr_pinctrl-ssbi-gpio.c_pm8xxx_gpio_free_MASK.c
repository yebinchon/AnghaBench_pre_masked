
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {int irq; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {TYPE_2__ desc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 struct pm8xxx_gpio* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_1(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct pm8xxx_gpio *VAR_2 = FUNC_0(VAR_0);
 struct pm8xxx_pin_data *VAR_3 = VAR_2->desc.pins[VAR_1].drv_data;

 VAR_3->irq = -1;
}
