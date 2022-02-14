
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pm8xxx_pin_data {unsigned int function; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {TYPE_2__ desc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 struct pm8xxx_gpio* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pm8xxx_gpio*,struct pm8xxx_pin_data*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
     unsigned VAR_1,
     unsigned VAR_2)
{
 struct pm8xxx_gpio *VAR_3 = FUNC_0(VAR_0);
 struct pm8xxx_pin_data *VAR_4 = VAR_3->desc.pins[VAR_2].drv_data;
 u8 VAR_5;

 VAR_4->function = VAR_1;
 VAR_5 = VAR_4->function << 1;

 FUNC_1(VAR_3, VAR_4, 4, VAR_5);

 return 0;
}
