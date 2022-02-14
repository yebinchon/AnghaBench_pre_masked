
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ocelot_pinctrl {int map; TYPE_1__* desc; } ;
struct ocelot_pin_caps {int pin; } ;
struct TYPE_4__ {struct ocelot_pin_caps* drv_data; } ;
struct TYPE_3__ {TYPE_2__* pins; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int,struct ocelot_pinctrl*,int) ;
 int FUNC_2 (struct ocelot_pinctrl*,unsigned int,unsigned int) ;
 struct ocelot_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct ocelot_pinctrl *VAR_4 = FUNC_3(VAR_1);
 struct ocelot_pin_caps *VAR_5 = VAR_4->desc->pins[VAR_3].drv_data;
 unsigned int VAR_6 = VAR_5->pin % 32;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_3, VAR_2);
 if (VAR_7 < 0)
  return -VAR_0;
 FUNC_4(VAR_4->map, FUNC_1(0, VAR_4, VAR_5->pin),
      FUNC_0(VAR_6), VAR_7 << VAR_6);
 FUNC_4(VAR_4->map, FUNC_1(1, VAR_4, VAR_5->pin),
      FUNC_0(VAR_6), VAR_7 << (VAR_6 - 1));

 return 0;
}
