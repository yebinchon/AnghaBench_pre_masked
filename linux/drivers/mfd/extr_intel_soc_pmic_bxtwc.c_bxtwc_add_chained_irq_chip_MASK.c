
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int dummy; } ;
struct regmap_irq_chip {int name; } ;
struct intel_soc_pmic {int regmap; int dev; } ;


 int FUNC_0 (int ,char*,int,int ,int) ;
 int FUNC_1 (int ,int ,int,int,int ,struct regmap_irq_chip const*,struct regmap_irq_chip_data**) ;
 int FUNC_2 (struct regmap_irq_chip_data*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_soc_pmic *VAR_0,
    struct regmap_irq_chip_data *VAR_1,
    int VAR_2, int VAR_3,
    const struct regmap_irq_chip *VAR_4,
    struct regmap_irq_chip_data **VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_6 < 0) {
  FUNC_0(VAR_0->dev,
   "Failed to get parent vIRQ(%d) for chip %s, ret:%d\n",
   VAR_2, VAR_4->name, VAR_6);
  return VAR_6;
 }

 return FUNC_1(VAR_0->dev, VAR_0->regmap, VAR_6, VAR_3,
     0, VAR_4, VAR_5);
}
