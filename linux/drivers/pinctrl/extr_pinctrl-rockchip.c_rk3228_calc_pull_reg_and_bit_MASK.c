
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rockchip_pinctrl {struct regmap* regmap_base; } ;
struct rockchip_pin_bank {int bank_num; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct rockchip_pin_bank *VAR_4,
        int VAR_5, struct regmap **VAR_6,
        int *VAR_7, u8 *VAR_8)
{
 struct rockchip_pinctrl *VAR_9 = VAR_4->drvdata;

 *VAR_6 = VAR_9->regmap_base;
 *VAR_7 = VAR_3;
 *VAR_7 += VAR_4->bank_num * VAR_0;
 *VAR_7 += ((VAR_5 / VAR_2) * 4);

 *VAR_8 = (VAR_5 % VAR_2);
 *VAR_8 *= VAR_1;
}
