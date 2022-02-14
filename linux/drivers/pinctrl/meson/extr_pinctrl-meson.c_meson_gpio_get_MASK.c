
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pinctrl {int reg_gpio; } ;
struct meson_bank {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct meson_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct meson_bank*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct meson_pinctrl*,unsigned int,struct meson_bank**) ;
 int FUNC_4 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct meson_pinctrl *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4, VAR_5, VAR_6;
 struct meson_bank *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, VAR_2, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7, VAR_2, VAR_0, &VAR_4, &VAR_5);
 FUNC_4(VAR_3->reg_gpio, VAR_4, &VAR_6);

 return !!(VAR_6 & FUNC_0(VAR_5));
}
