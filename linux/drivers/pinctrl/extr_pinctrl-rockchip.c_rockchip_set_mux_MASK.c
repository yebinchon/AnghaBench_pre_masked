
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rockchip_pinctrl {struct regmap* regmap_base; struct regmap* regmap_pmu; int dev; } ;
struct rockchip_pin_bank {int recalced_mask; int route_mask; TYPE_1__* iomux; int bank_num; struct rockchip_pinctrl* drvdata; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int type; int offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 (struct regmap*,int,int,int) ;
 int FUNC_3 (struct regmap*,int,int) ;
 scalar_t__ FUNC_4 (struct rockchip_pin_bank*,int,int,int*,int*,int*) ;
 int FUNC_5 (struct rockchip_pin_bank*,int,int*,int*,int*) ;
 int FUNC_6 (struct rockchip_pin_bank*,int,int) ;

__attribute__((used)) static int FUNC_7(struct rockchip_pin_bank *VAR_4, int VAR_5, int VAR_6)
{
 struct rockchip_pinctrl *VAR_7 = VAR_4->drvdata;
 int VAR_8 = (VAR_5 / 8);
 struct regmap *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 u8 VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_11 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_4->iomux[VAR_8].type & VAR_0)
  return 0;

 FUNC_1(VAR_7->dev, "setting mux of GPIO%d-%d to %d\n",
      VAR_4->bank_num, VAR_5, VAR_6);

 VAR_9 = (VAR_4->iomux[VAR_8].type & VAR_1)
    ? VAR_7->regmap_pmu : VAR_7->regmap_base;


 VAR_13 = VAR_4->iomux[VAR_8].type;
 VAR_10 = VAR_4->iomux[VAR_8].offset;
 if (VAR_13 & VAR_3) {
  if ((VAR_5 % 8) >= 4)
   VAR_10 += 0x4;
  VAR_14 = (VAR_5 % 4) * 4;
  VAR_12 = 0xf;
 } else if (VAR_13 & VAR_2) {
  if ((VAR_5 % 8) >= 5)
   VAR_10 += 0x4;
  VAR_14 = (VAR_5 % 8 % 5) * 3;
  VAR_12 = 0x7;
 } else {
  VAR_14 = (VAR_5 % 8) * 2;
  VAR_12 = 0x3;
 }

 if (VAR_4->recalced_mask & FUNC_0(VAR_5))
  FUNC_5(VAR_4, VAR_5, &VAR_10, &VAR_14, &VAR_12);

 if (VAR_4->route_mask & FUNC_0(VAR_5)) {
  if (FUNC_4(VAR_4, VAR_5, VAR_6, &VAR_17,
        &VAR_18, &VAR_19)) {
   struct regmap *VAR_20 = VAR_9;


   switch (VAR_17) {
   case 128:
    VAR_20 = VAR_7->regmap_pmu;
    break;
   case 129:
    VAR_20 = VAR_7->regmap_base;
    break;
   }

   VAR_11 = FUNC_3(VAR_20, VAR_18, VAR_19);
   if (VAR_11)
    return VAR_11;
  }
 }

 VAR_15 = (VAR_12 << (VAR_14 + 16));
 VAR_16 = VAR_15 | (VAR_15 >> 16);
 VAR_15 |= (VAR_6 & VAR_12) << VAR_14;
 VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_16, VAR_15);

 return VAR_11;
}
