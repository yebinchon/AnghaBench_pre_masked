
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pm8xxx_pin_data {int output_value; int mode; int open_drain; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {TYPE_2__ desc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 struct pm8xxx_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct pm8xxx_gpio*,struct pm8xxx_pin_data*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct pm8xxx_gpio *VAR_3 = FUNC_0(VAR_0);
 struct pm8xxx_pin_data *VAR_4 = VAR_3->desc.pins[VAR_1].drv_data;
 u8 VAR_5;

 VAR_4->output_value = !!VAR_2;

 VAR_5 = VAR_4->mode << 2;
 VAR_5 |= VAR_4->open_drain << 1;
 VAR_5 |= VAR_4->output_value;

 FUNC_1(VAR_3, VAR_4, 1, VAR_5);
}
