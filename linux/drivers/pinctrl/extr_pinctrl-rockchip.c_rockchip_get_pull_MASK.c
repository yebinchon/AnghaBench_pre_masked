
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pinctrl {int dev; struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int type; int (* pull_calc_reg ) (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;} ;
struct rockchip_pin_bank {int* pull_type; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int VAR_4 ;




 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regmap*,int,int*) ;
 int** VAR_5 ;
 int FUNC_3 (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pin_bank *VAR_6, int VAR_7)
{
 struct rockchip_pinctrl *VAR_8 = VAR_6->drvdata;
 struct rockchip_pin_ctrl *VAR_9 = VAR_8->ctrl;
 struct regmap *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u8 VAR_14;
 u32 VAR_15;


 if (VAR_9->type == VAR_3)
  return VAR_1;

 VAR_9->pull_calc_reg(VAR_6, VAR_7, &VAR_10, &VAR_11, &VAR_14);

 VAR_12 = FUNC_2(VAR_10, VAR_11, &VAR_15);
 if (VAR_12)
  return VAR_12;

 switch (VAR_9->type) {
 case 134:
 case 133:
  return !(VAR_15 & FUNC_0(VAR_14))
    ? VAR_2
    : VAR_1;
 case 135:
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_13 = VAR_6->pull_type[VAR_7 / 8];
  VAR_15 >>= VAR_14;
  VAR_15 &= (1 << VAR_4) - 1;

  return VAR_5[VAR_13][VAR_15];
 default:
  FUNC_1(VAR_8->dev, "unsupported pinctrl type\n");
  return -VAR_0;
 };
}
