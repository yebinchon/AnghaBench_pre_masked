
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lmu {struct regmap* regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct regulator_dev* ena_gpiod; struct regmap* regmap; struct device* dev; } ;
struct regmap {int dummy; } ;
struct device {int parent; } ;
struct platform_device {int id; struct device dev; } ;
typedef struct regulator_dev gpio_desc ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 struct ti_lmu* FUNC_3 (int ) ;
 struct regulator_dev* FUNC_4 (struct device*,int *,struct regulator_config*) ;
 int FUNC_5 (struct regulator_dev*) ;
 int * VAR_0 ;
 struct regulator_dev* FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct regmap*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct ti_lmu *VAR_2 = FUNC_3(VAR_1->dev.parent);
 struct regmap *VAR_3 = VAR_2->regmap;
 struct regulator_config VAR_4 = { };
 struct regulator_dev *VAR_5;
 struct device *VAR_6 = &VAR_1->dev;
 int VAR_7 = VAR_1->id;
 struct gpio_desc *VAR_8;
 int VAR_9;

 VAR_4.dev = VAR_6;
 VAR_4.regmap = VAR_3;





 VAR_8 = FUNC_6(VAR_6, VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (VAR_8) {
  VAR_4.ena_gpiod = VAR_8;
  VAR_9 = FUNC_7(VAR_3, VAR_7);
  if (VAR_9) {
   FUNC_5(VAR_8);
   FUNC_2(VAR_6, "External pin err: %d\n", VAR_9);
   return VAR_9;
  }
 }

 VAR_5 = FUNC_4(VAR_6, &VAR_0[VAR_7], &VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_9 = FUNC_1(VAR_5);
  FUNC_2(VAR_6, "[%d] regulator register err: %d\n", VAR_7, VAR_9);
  return VAR_9;
 }

 return 0;
}
