
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pinctrl {TYPE_1__* ctrl; } ;
struct rockchip_pin_bank {unsigned int bank_num; } ;
struct TYPE_2__ {int nr_banks; struct rockchip_pin_bank* pin_banks; } ;


 int VAR_0 ;
 struct rockchip_pin_bank* FUNC_0 (int ) ;

__attribute__((used)) static struct rockchip_pin_bank *FUNC_1(
     struct rockchip_pinctrl *VAR_1,
     unsigned VAR_2)
{
 struct rockchip_pin_bank *VAR_3 = VAR_1->ctrl->pin_banks;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->ctrl->nr_banks; VAR_4++, VAR_3++) {
  if (VAR_3->bank_num == VAR_2)
   return VAR_3;
 }

 return FUNC_0(-VAR_0);
}
