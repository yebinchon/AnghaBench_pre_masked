
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pm8xxx_pin_data {int mode; int output_value; int open_drain; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {TYPE_2__ desc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 int VAR_0 ;
 struct pm8xxx_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct pm8xxx_gpio*,struct pm8xxx_pin_data*,int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1,
     unsigned VAR_2,
     int VAR_3)
{
 struct pm8xxx_gpio *VAR_4 = FUNC_0(VAR_1);
 struct pm8xxx_pin_data *VAR_5 = VAR_4->desc.pins[VAR_2].drv_data;
 u8 VAR_6;

 VAR_5->mode = VAR_0;
 VAR_5->output_value = !!VAR_3;

 VAR_6 = VAR_5->mode << 2;
 VAR_6 |= VAR_5->open_drain << 1;
 VAR_6 |= VAR_5->output_value;

 FUNC_1(VAR_4, VAR_5, 1, VAR_6);

 return 0;
}
