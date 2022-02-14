
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct meson_pinctrl {int dummy; } ;


 int FUNC_0 (struct meson_pinctrl*,unsigned int,int ) ;
 struct meson_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
   struct pinctrl_gpio_range *VAR_1, unsigned int VAR_2)
{
 struct meson_pinctrl *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2, 0);
}
