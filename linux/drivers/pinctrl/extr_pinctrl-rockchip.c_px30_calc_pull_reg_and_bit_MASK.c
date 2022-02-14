
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rockchip_pinctrl {struct regmap* regmap_base; struct regmap* regmap_pmu; } ;
struct rockchip_pin_bank {int bank_num; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct rockchip_pin_bank *VAR_5,
           int VAR_6, struct regmap **VAR_7,
           int *VAR_8, u8 *VAR_9)
{
 struct rockchip_pinctrl *VAR_10 = VAR_5->drvdata;


 if (VAR_5->bank_num == 0) {
  *VAR_7 = VAR_10->regmap_pmu;
  *VAR_8 = VAR_4;
 } else {
  *VAR_7 = VAR_10->regmap_base;
  *VAR_8 = VAR_2;


  *VAR_8 -= 0x10;
  *VAR_8 += VAR_5->bank_num * VAR_0;
 }

 *VAR_8 += ((VAR_6 / VAR_3) * 4);
 *VAR_9 = (VAR_6 % VAR_3);
 *VAR_9 *= VAR_1;
}
