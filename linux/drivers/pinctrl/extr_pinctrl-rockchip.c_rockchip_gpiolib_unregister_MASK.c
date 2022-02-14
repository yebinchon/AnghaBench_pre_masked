
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pinctrl {struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int nr_banks; struct rockchip_pin_bank* pin_banks; } ;
struct rockchip_pin_bank {int gpio_chip; int valid; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_0,
      struct rockchip_pinctrl *VAR_1)
{
 struct rockchip_pin_ctrl *VAR_2 = VAR_1->ctrl;
 struct rockchip_pin_bank *VAR_3 = VAR_2->pin_banks;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_banks; ++VAR_4, ++VAR_3) {
  if (!VAR_3->valid)
   continue;
  FUNC_0(&VAR_3->gpio_chip);
 }

 return 0;
}
