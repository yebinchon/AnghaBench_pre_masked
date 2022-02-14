
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct rockchip_pinctrl {struct regmap* regmap_base; struct regmap* regmap_pmu; int dev; } ;
struct rockchip_pin_bank {int recalced_mask; TYPE_1__* iomux; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int type; int offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct regmap*,int,unsigned int*) ;
 int FUNC_3 (struct rockchip_pin_bank*,int,int*,unsigned int*,int*) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pin_bank *VAR_7, int VAR_8)
{
 struct rockchip_pinctrl *VAR_9 = VAR_7->drvdata;
 int VAR_10 = (VAR_8 / 8);
 struct regmap *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 u8 VAR_17;

 if (VAR_10 > 3)
  return -VAR_0;

 if (VAR_7->iomux[VAR_10].type & VAR_3) {
  FUNC_1(VAR_9->dev, "pin %d is unrouted\n", VAR_8);
  return -VAR_0;
 }

 if (VAR_7->iomux[VAR_10].type & VAR_1)
  return VAR_6;

 VAR_11 = (VAR_7->iomux[VAR_10].type & VAR_2)
    ? VAR_9->regmap_pmu : VAR_9->regmap_base;


 VAR_16 = VAR_7->iomux[VAR_10].type;
 VAR_13 = VAR_7->iomux[VAR_10].offset;
 if (VAR_16 & VAR_5) {
  if ((VAR_8 % 8) >= 4)
   VAR_13 += 0x4;
  VAR_17 = (VAR_8 % 4) * 4;
  VAR_15 = 0xf;
 } else if (VAR_16 & VAR_4) {
  if ((VAR_8 % 8) >= 5)
   VAR_13 += 0x4;
  VAR_17 = (VAR_8 % 8 % 5) * 3;
  VAR_15 = 0x7;
 } else {
  VAR_17 = (VAR_8 % 8) * 2;
  VAR_15 = 0x3;
 }

 if (VAR_7->recalced_mask & FUNC_0(VAR_8))
  FUNC_3(VAR_7, VAR_8, &VAR_13, &VAR_17, &VAR_15);

 VAR_14 = FUNC_2(VAR_11, VAR_13, &VAR_12);
 if (VAR_14)
  return VAR_14;

 return ((VAR_12 >> VAR_17) & VAR_15);
}
