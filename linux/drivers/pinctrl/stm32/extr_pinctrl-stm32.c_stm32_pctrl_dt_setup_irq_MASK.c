
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_pinctrl {struct regmap** irqmux; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct reg_field {int reg; int lsb; int msb; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*,int,int,int,int) ;
 struct regmap* FUNC_3 (struct device*,struct regmap*,struct reg_field) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device_node*,char*,int,int*) ;
 struct regmap* FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2,
      struct stm32_pinctrl *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 struct device *VAR_5 = &VAR_2->dev;
 struct regmap *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_3->regmap = FUNC_6(VAR_4, "st,syscfg");
 if (FUNC_0(VAR_3->regmap))
  return FUNC_1(VAR_3->regmap);

 VAR_6 = VAR_3->regmap;

 VAR_8 = FUNC_5(VAR_4, "st,syscfg", 1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_4, "st,syscfg", 2, &VAR_10);
 if (VAR_8)
  VAR_10 = VAR_1;

 VAR_11 = FUNC_4(VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct reg_field VAR_12;

  VAR_12.reg = VAR_7 + (VAR_9 / 4) * 4;
  VAR_12.lsb = (VAR_9 % 4) * VAR_11;
  VAR_12.msb = VAR_12.lsb + VAR_11 - 1;

  FUNC_2(VAR_5, "irqmux%d: reg:%#x, lsb:%d, msb:%d\n",
   VAR_9, VAR_12.reg, VAR_12.lsb, VAR_12.msb);

  VAR_3->irqmux[VAR_9] = FUNC_3(VAR_5, VAR_6, VAR_12);
  if (FUNC_0(VAR_3->irqmux[VAR_9]))
   return FUNC_1(VAR_3->irqmux[VAR_9]);
 }

 return 0;
}
