
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rockchip_pinctrl {struct regmap* regmap_base; struct regmap* regmap_pmu; } ;
struct rockchip_pin_bank {int bank_num; TYPE_1__* drv; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int offset; scalar_t__ drv_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rockchip_pin_bank *VAR_2,
     int VAR_3, struct regmap **VAR_4,
     int *VAR_5, u8 *VAR_6)
{
 struct rockchip_pinctrl *VAR_7 = VAR_2->drvdata;
 int VAR_8 = (VAR_3 / 8);


 if ((VAR_2->bank_num == 0) || (VAR_2->bank_num == 1))
  *VAR_4 = VAR_7->regmap_pmu;
 else
  *VAR_4 = VAR_7->regmap_base;

 *VAR_5 = VAR_2->drv[VAR_8].offset;
 if ((VAR_2->drv[VAR_8].drv_type == VAR_0) ||
     (VAR_2->drv[VAR_8].drv_type == VAR_1))
  *VAR_6 = (VAR_3 % 8) * 3;
 else
  *VAR_6 = (VAR_3 % 8) * 2;
}
