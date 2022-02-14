
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pinctrl {int dev; struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int type; int (* pull_calc_reg ) (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;} ;
struct rockchip_pin_bank {int* pull_type; int bank_num; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;




 int FUNC_2 (int ,char*,int ,int,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct regmap*,int,int,int) ;
 int FUNC_5 (struct regmap*,int,int) ;
 int** VAR_4 ;
 int FUNC_6 (struct rockchip_pin_bank*,int,struct regmap**,int*,int*) ;

__attribute__((used)) static int FUNC_7(struct rockchip_pin_bank *VAR_5,
     int VAR_6, int VAR_7)
{
 struct rockchip_pinctrl *VAR_8 = VAR_5->drvdata;
 struct rockchip_pin_ctrl *VAR_9 = VAR_8->ctrl;
 struct regmap *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u8 VAR_15;
 u32 VAR_16, VAR_17;

 FUNC_2(VAR_8->dev, "setting pull of GPIO%d-%d to %d\n",
   VAR_5->bank_num, VAR_6, VAR_7);


 if (VAR_9->type == VAR_2)
  return VAR_7 ? -VAR_0 : 0;

 VAR_9->pull_calc_reg(VAR_5, VAR_6, &VAR_10, &VAR_11, &VAR_15);

 switch (VAR_9->type) {
 case 134:
 case 133:
  VAR_16 = FUNC_1(VAR_15 + 16);
  if (VAR_7 == VAR_1)
   VAR_16 |= FUNC_1(VAR_15);
  VAR_12 = FUNC_5(VAR_10, VAR_11, VAR_16);
  break;
 case 135:
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_14 = VAR_5->pull_type[VAR_6 / 8];
  VAR_12 = -VAR_0;
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4[VAR_14]);
   VAR_13++) {
   if (VAR_4[VAR_14][VAR_13] == VAR_7) {
    VAR_12 = VAR_13;
    break;
   }
  }

  if (VAR_12 < 0) {
   FUNC_3(VAR_8->dev, "unsupported pull setting %d\n",
    VAR_7);
   return VAR_12;
  }


  VAR_16 = ((1 << VAR_3) - 1) << (VAR_15 + 16);
  VAR_17 = VAR_16 | (VAR_16 >> 16);
  VAR_16 |= (VAR_12 << VAR_15);

  VAR_12 = FUNC_4(VAR_10, VAR_11, VAR_17, VAR_16);
  break;
 default:
  FUNC_3(VAR_8->dev, "unsupported pinctrl type\n");
  return -VAR_0;
 }

 return VAR_12;
}
