
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_dcdc {int dvs_vsel; int on_vsel; scalar_t__ dvs_gpio_state; scalar_t__ dvs_gpiod; } ;
struct regulator_dev {int dummy; } ;


 struct wm831x_dcdc* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0)
{
 struct wm831x_dcdc *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->dvs_gpiod && VAR_1->dvs_gpio_state)
  return VAR_1->dvs_vsel;
 else
  return VAR_1->on_vsel;
}
