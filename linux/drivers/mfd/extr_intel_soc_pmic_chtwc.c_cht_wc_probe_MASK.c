
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_pmic {scalar_t__ irq; int irq_chip_data; int regmap; struct device* dev; } ;
struct device {int dummy; } ;
struct i2c_client {scalar_t__ irq; struct device dev; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int *,unsigned long long*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct device*,char*,...) ;
 struct intel_soc_pmic* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int ,int ,int ,int *,int ,int ) ;
 int FUNC_9 (struct device*,int ,scalar_t__,int,int ,int *,int *) ;
 int FUNC_10 (struct device*,int *,struct i2c_client*,int *) ;
 int FUNC_11 (struct i2c_client*,struct intel_soc_pmic*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct intel_soc_pmic *VAR_13;
 acpi_status VAR_14;
 unsigned long long VAR_15;
 int VAR_16;

 VAR_14 = FUNC_5(FUNC_1(VAR_12), "_HRV", ((void*)0), &VAR_15);
 if (FUNC_0(VAR_14)) {
  FUNC_6(VAR_12, "Failed to get PMIC hardware revision\n");
  return -VAR_2;
 }
 if (VAR_15 != VAR_0) {
  FUNC_6(VAR_12, "Invalid PMIC hardware revision: %llu\n", VAR_15);
  return -VAR_2;
 }
 if (VAR_11->irq < 0) {
  FUNC_6(VAR_12, "Invalid IRQ\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_7(VAR_12, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->irq = VAR_11->irq;
 VAR_13->dev = VAR_12;
 FUNC_11(VAR_11, VAR_13);

 VAR_13->regmap = FUNC_10(VAR_12, ((void*)0), VAR_11, &VAR_9);
 if (FUNC_3(VAR_13->regmap))
  return FUNC_4(VAR_13->regmap);

 VAR_16 = FUNC_9(VAR_12, VAR_13->regmap, VAR_13->irq,
           VAR_5 | VAR_6, 0,
           &VAR_10,
           &VAR_13->irq_chip_data);
 if (VAR_16)
  return VAR_16;

 return FUNC_8(VAR_12, VAR_7,
    VAR_8, FUNC_2(VAR_8), ((void*)0), 0,
    FUNC_12(VAR_13->irq_chip_data));
}
