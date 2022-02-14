
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_pmic_config {int irq_flags; int n_cell_devs; int cell_dev; int irq_chip; int regmap_config; } ;
struct intel_soc_pmic {int irq_chip_data; int irq; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int *,unsigned long long*) ;
 int VAR_4 ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,struct intel_soc_pmic*) ;
 int FUNC_8 (struct device*,char*,int) ;
 struct intel_soc_pmic* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 struct intel_soc_pmic_config VAR_5 ;
 struct intel_soc_pmic_config VAR_6 ;
 int FUNC_13 (struct device*,int,int ,int ,int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int,int ,int ,int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_8,
        const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct intel_soc_pmic_config *VAR_11;
 struct intel_soc_pmic *VAR_12;
 unsigned long long VAR_13;
 acpi_status VAR_14;
 int VAR_15;





 VAR_14 = FUNC_5(FUNC_1(VAR_10), "_HRV", ((void*)0), &VAR_13);
 if (FUNC_0(VAR_14)) {
  FUNC_6(VAR_10, "Failed to get PMIC hardware revision\n");
  return -VAR_0;
 }

 switch (VAR_13) {
 case 129:
  VAR_11 = &VAR_5;
  break;
 case 128:
  VAR_11 = &VAR_6;
  break;
 default:
  FUNC_8(VAR_10, "Unknown hardware rev %llu, assuming BYT\n", VAR_13);
  VAR_11 = &VAR_5;
 }

 VAR_12 = FUNC_9(VAR_10, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_7(VAR_10, VAR_12);

 VAR_12->regmap = FUNC_10(VAR_8, VAR_11->regmap_config);
 if (FUNC_3(VAR_12->regmap))
  return FUNC_4(VAR_12->regmap);

 VAR_12->irq = VAR_8->irq;

 VAR_15 = FUNC_15(VAR_12->regmap, VAR_12->irq,
      VAR_11->irq_flags | VAR_3,
      0, VAR_11->irq_chip,
      &VAR_12->irq_chip_data);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_11(VAR_12->irq);
 if (VAR_15)
  FUNC_8(VAR_10, "Can't enable IRQ as wake source: %d\n", VAR_15);


 FUNC_12(&VAR_7);


 FUNC_14(VAR_4, FUNC_2(VAR_4));

 VAR_15 = FUNC_13(VAR_10, -1, VAR_11->cell_dev,
         VAR_11->n_cell_devs, ((void*)0), 0,
         FUNC_17(VAR_12->irq_chip_data));
 if (VAR_15)
  goto err_del_irq_chip;

 return 0;

err_del_irq_chip:
 FUNC_16(VAR_12->irq, VAR_12->irq_chip_data);
 return VAR_15;
}
