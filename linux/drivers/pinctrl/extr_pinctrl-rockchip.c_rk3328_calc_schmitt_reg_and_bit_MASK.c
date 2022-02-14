
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

__attribute__((used)) static int FUNC_0(struct rockchip_pin_bank *VAR_3,
        int VAR_4,
        struct regmap **VAR_5,
        int *VAR_6, u8 *VAR_7)
{
 struct rockchip_pinctrl *VAR_8 = VAR_3->drvdata;

 *VAR_5 = VAR_8->regmap_base;
 *VAR_6 = VAR_1;

 *VAR_6 += VAR_3->bank_num * VAR_0;
 *VAR_6 += ((VAR_4 / VAR_2) * 4);
 *VAR_7 = VAR_4 % VAR_2;

 return 0;
}
