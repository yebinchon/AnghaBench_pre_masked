
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {scalar_t__ mode; int output_value; scalar_t__ irq; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {TYPE_2__ desc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pm8xxx_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct pm8xxx_gpio *VAR_5 = FUNC_0(VAR_3);
 struct pm8xxx_pin_data *VAR_6 = VAR_5->desc.pins[VAR_4].drv_data;
 bool VAR_7;
 int VAR_8;

 if (VAR_6->mode == VAR_2) {
  VAR_8 = VAR_6->output_value;
 } else if (VAR_6->irq >= 0) {
  VAR_8 = FUNC_1(VAR_6->irq, VAR_1, &VAR_7);
  if (!VAR_8)
   VAR_8 = !!VAR_7;
 } else
  VAR_8 = -VAR_0;

 return VAR_8;
}
