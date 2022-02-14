
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct ocelot_pinctrl {int map; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,struct ocelot_pinctrl*,unsigned int) ;
 struct ocelot_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0,
          struct pinctrl_gpio_range *VAR_1,
          unsigned int VAR_2)
{
 struct ocelot_pinctrl *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = VAR_2 % 32;

 FUNC_3(VAR_3->map, FUNC_1(0, VAR_3, VAR_2),
      FUNC_0(VAR_4), 0);
 FUNC_3(VAR_3->map, FUNC_1(1, VAR_3, VAR_2),
      FUNC_0(VAR_4), 0);

 return 0;
}
