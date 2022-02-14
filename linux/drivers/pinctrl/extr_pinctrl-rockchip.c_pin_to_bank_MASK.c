
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pinctrl {TYPE_1__* ctrl; } ;
struct rockchip_pin_bank {unsigned int pin_base; unsigned int nr_pins; } ;
struct TYPE_2__ {struct rockchip_pin_bank* pin_banks; } ;



__attribute__((used)) static struct rockchip_pin_bank *FUNC_0(struct rockchip_pinctrl *VAR_0,
        unsigned VAR_1)
{
 struct rockchip_pin_bank *VAR_2 = VAR_0->ctrl->pin_banks;

 while (VAR_1 >= (VAR_2->pin_base + VAR_2->nr_pins))
  VAR_2++;

 return VAR_2;
}
