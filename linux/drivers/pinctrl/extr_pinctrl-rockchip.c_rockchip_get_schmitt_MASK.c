
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pinctrl {struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int (* schmitt_calc_reg ) (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;} ;
struct rockchip_pin_bank {struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (struct regmap*,int,int*) ;
 int FUNC_1 (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct rockchip_pin_bank *VAR_0, int VAR_1)
{
 struct rockchip_pinctrl *VAR_2 = VAR_0->drvdata;
 struct rockchip_pin_ctrl *VAR_3 = VAR_2->ctrl;
 struct regmap *VAR_4;
 int VAR_5, VAR_6;
 u8 VAR_7;
 u32 VAR_8;

 VAR_6 = VAR_3->schmitt_calc_reg(VAR_0, VAR_1, &VAR_4, &VAR_5, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_5, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_8 >>= VAR_7;
 return VAR_8 & 0x1;
}
