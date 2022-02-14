
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct regmap_irq_chip_data {int dummy; } ;
struct regmap {int dummy; } ;
struct pmic_thermal_data {int num_maps; TYPE_2__* maps; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct intel_soc_pmic {struct regmap_irq_chip_data* irq_chip_data; struct regmap* regmap; } ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
struct TYPE_5__ {int num_trips; TYPE_1__* trip_config; } ;
struct TYPE_4__ {int irq_en_mask; int irq_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct intel_soc_pmic* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int,int *,int ,int ,char*,struct platform_device*) ;
 TYPE_3__* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int) ;
 int VAR_3 ;
 int FUNC_5 (struct regmap_irq_chip_data*,int) ;
 int FUNC_6 (struct regmap*,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct regmap_irq_chip_data *VAR_5;
 struct pmic_thermal_data *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct intel_soc_pmic *VAR_13;
 struct regmap *VAR_14;
 struct device *VAR_15;
 u16 VAR_16;
 u8 VAR_17;

 VAR_15 = &VAR_4->dev;
 VAR_13 = FUNC_1(VAR_4->dev.parent);
 if (!VAR_13) {
  FUNC_0(VAR_15, "Failed to get struct intel_soc_pmic pointer\n");
  return -VAR_0;
 }

 VAR_6 = (struct pmic_thermal_data *)
    FUNC_3(VAR_4)->driver_data;
 if (!VAR_6) {
  FUNC_0(VAR_15, "No thermal data initialized!!\n");
  return -VAR_0;
 }

 VAR_14 = VAR_13->regmap;
 VAR_5 = VAR_13->irq_chip_data;

 VAR_12 = 0;
 while ((VAR_8 = FUNC_4(VAR_4, VAR_12)) != -VAR_1) {
  VAR_9 = FUNC_5(VAR_5, VAR_8);
  if (VAR_9 < 0) {
   FUNC_0(VAR_15, "failed to get virq by irq %d\n", VAR_8);
   return VAR_9;
  }

  VAR_7 = FUNC_2(&VAR_4->dev, VAR_9,
    ((void*)0), VAR_3,
    VAR_2, "pmic_thermal", VAR_4);

  if (VAR_7) {
   FUNC_0(VAR_15, "request irq(%d) failed: %d\n", VAR_9, VAR_7);
   return VAR_7;
  }
  VAR_12++;
 }


 for (VAR_10 = 0; VAR_10 < VAR_6->num_maps; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_6->maps[VAR_10].num_trips; VAR_11++) {
   VAR_16 = VAR_6->maps[VAR_10].trip_config[VAR_11].irq_en;
   VAR_17 = VAR_6->maps[VAR_10].trip_config[VAR_11].irq_en_mask;
   VAR_7 = FUNC_6(VAR_14, VAR_16, VAR_17, 0x00);
   if (VAR_7)
    return VAR_7;
  }
 }

 return 0;
}
