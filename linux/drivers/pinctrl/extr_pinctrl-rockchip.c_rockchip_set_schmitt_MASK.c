
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pinctrl {int dev; struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int (* schmitt_calc_reg ) (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;} ;
struct rockchip_pin_bank {int bank_num; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 (struct regmap*,int,int,int) ;
 int FUNC_3 (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pin_bank *VAR_0,
    int VAR_1, int VAR_2)
{
 struct rockchip_pinctrl *VAR_3 = VAR_0->drvdata;
 struct rockchip_pin_ctrl *VAR_4 = VAR_3->ctrl;
 struct regmap *VAR_5;
 int VAR_6, VAR_7;
 u8 VAR_8;
 u32 VAR_9, VAR_10;

 FUNC_1(VAR_3->dev, "setting input schmitt of GPIO%d-%d to %d\n",
  VAR_0->bank_num, VAR_1, VAR_2);

 VAR_7 = VAR_4->schmitt_calc_reg(VAR_0, VAR_1, &VAR_5, &VAR_6, &VAR_8);
 if (VAR_7)
  return VAR_7;


 VAR_9 = FUNC_0(VAR_8 + 16) | (VAR_2 << VAR_8);
 VAR_10 = FUNC_0(VAR_8 + 16) | FUNC_0(VAR_8);

 return FUNC_2(VAR_5, VAR_6, VAR_10, VAR_9);
}
