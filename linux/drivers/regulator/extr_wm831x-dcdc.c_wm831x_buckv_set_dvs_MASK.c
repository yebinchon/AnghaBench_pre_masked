
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_dcdc {int dvs_gpio_state; int dvs_gpiod; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct wm831x_dcdc* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0, int VAR_1)
{
 struct wm831x_dcdc *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 == VAR_2->dvs_gpio_state)
  return 0;

 VAR_2->dvs_gpio_state = VAR_1;
 FUNC_0(VAR_2->dvs_gpiod, VAR_1);






 return 0;
}
