
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct ocelot_pinctrl {int map; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ocelot_pinctrl*,unsigned int) ;
 struct ocelot_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1,
         struct pinctrl_gpio_range *VAR_2,
         unsigned int VAR_3, bool VAR_4)
{
 struct ocelot_pinctrl *VAR_5 = FUNC_2(VAR_1);
 unsigned int VAR_6 = VAR_3 % 32;

 FUNC_3(VAR_5->map, FUNC_1(VAR_0, VAR_5, VAR_3), FUNC_0(VAR_6),
      VAR_4 ? 0 : FUNC_0(VAR_6));

 return 0;
}
