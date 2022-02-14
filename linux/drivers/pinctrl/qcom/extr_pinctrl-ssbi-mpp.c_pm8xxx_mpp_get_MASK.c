
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {int irq; int output_value; int input; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_mpp {TYPE_2__ desc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 int VAR_0 ;
 struct pm8xxx_mpp* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct pm8xxx_mpp *VAR_3 = FUNC_0(VAR_1);
 struct pm8xxx_pin_data *VAR_4 = VAR_3->desc.pins[VAR_2].drv_data;
 bool VAR_5;
 int VAR_6;

 if (!VAR_4->input)
  return !!VAR_4->output_value;

 VAR_6 = FUNC_1(VAR_4->irq, VAR_0, &VAR_5);
 if (!VAR_6)
  VAR_6 = !!VAR_5;

 return VAR_6;
}
