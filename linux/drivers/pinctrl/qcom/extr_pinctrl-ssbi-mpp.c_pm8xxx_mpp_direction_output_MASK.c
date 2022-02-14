
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {int mode; int output; int input; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_mpp {TYPE_2__ desc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;





 struct pm8xxx_mpp* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct pm8xxx_mpp*,struct pm8xxx_pin_data*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0,
     unsigned VAR_1,
     int VAR_2)
{
 struct pm8xxx_mpp *VAR_3 = FUNC_0(VAR_0);
 struct pm8xxx_pin_data *VAR_4 = VAR_3->desc.pins[VAR_1].drv_data;

 switch (VAR_4->mode) {
 case 129:
  VAR_4->output = 1;
  break;
 case 130:
  VAR_4->input = 0;
  VAR_4->output = 1;
  break;
 case 128:
  VAR_4->input = 0;
  VAR_4->output = 1;
  break;
 }

 FUNC_1(VAR_3, VAR_4);

 return 0;
}
