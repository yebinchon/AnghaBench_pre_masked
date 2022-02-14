
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct intel_soc_pmic {int irq; int regmap; int irq_chip_data_crit; int irq_chip_data; int irq_chip_data_chgr; int irq_chip_data_adc; int irq_chip_data_bcu; int irq_chip_data_tmu; int irq_chip_data_pwrbtn; TYPE_1__* dev; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int *,unsigned long long*) ;
 int VAR_15 ;
 int FUNC_6 (struct intel_soc_pmic*,int ,int ,int,int *,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,struct intel_soc_pmic*) ;
 struct intel_soc_pmic* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ,int *,int ,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int,int,int ,int *,int *) ;
 int FUNC_12 (TYPE_1__*,int *,struct intel_soc_pmic*,int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_25)
{
 int VAR_26;
 acpi_handle VAR_27;
 acpi_status VAR_28;
 unsigned long long VAR_29;
 struct intel_soc_pmic *VAR_30;

 VAR_27 = FUNC_1(&VAR_25->dev);
 VAR_28 = FUNC_5(VAR_27, "_HRV", ((void*)0), &VAR_29);
 if (FUNC_0(VAR_28)) {
  FUNC_7(&VAR_25->dev, "Failed to get PMIC hardware revision\n");
  return -VAR_9;
 }
 if (VAR_29 != VAR_0) {
  FUNC_7(&VAR_25->dev, "Invalid PMIC hardware revision: %llu\n",
   VAR_29);
  return -VAR_9;
 }

 VAR_30 = FUNC_9(&VAR_25->dev, sizeof(*VAR_30), VAR_11);
 if (!VAR_30)
  return -VAR_10;

 VAR_26 = FUNC_13(VAR_25, 0);
 if (VAR_26 < 0)
  return VAR_26;
 VAR_30->irq = VAR_26;

 FUNC_8(&VAR_25->dev, VAR_30);
 VAR_30->dev = &VAR_25->dev;

 VAR_30->regmap = FUNC_12(&VAR_25->dev, ((void*)0), VAR_30,
     &VAR_17);
 if (FUNC_3(VAR_30->regmap)) {
  VAR_26 = FUNC_4(VAR_30->regmap);
  FUNC_7(&VAR_25->dev, "Failed to initialise regmap: %d\n", VAR_26);
  return VAR_26;
 }

 VAR_26 = FUNC_11(&VAR_25->dev, VAR_30->regmap, VAR_30->irq,
           VAR_12 | VAR_13,
           0, &VAR_18,
           &VAR_30->irq_chip_data);
 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add IRQ chip\n");
  return VAR_26;
 }

 VAR_26 = FUNC_6(VAR_30, VAR_30->irq_chip_data,
      VAR_7,
      VAR_12,
      &VAR_23,
      &VAR_30->irq_chip_data_pwrbtn);
 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add PWRBTN IRQ chip\n");
  return VAR_26;
 }

 VAR_26 = FUNC_6(VAR_30, VAR_30->irq_chip_data,
      VAR_8,
      VAR_12,
      &VAR_24,
      &VAR_30->irq_chip_data_tmu);
 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add TMU IRQ chip\n");
  return VAR_26;
 }


 VAR_26 = FUNC_6(VAR_30, VAR_30->irq_chip_data,
      VAR_2,
      VAR_12,
      &VAR_20,
      &VAR_30->irq_chip_data_bcu);


 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add BUC IRQ chip\n");
  return VAR_26;
 }


 VAR_26 = FUNC_6(VAR_30, VAR_30->irq_chip_data,
      VAR_1,
      VAR_12,
      &VAR_19,
      &VAR_30->irq_chip_data_adc);


 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add ADC IRQ chip\n");
  return VAR_26;
 }


 VAR_26 = FUNC_6(VAR_30, VAR_30->irq_chip_data,
      VAR_3,
      VAR_12,
      &VAR_21,
      &VAR_30->irq_chip_data_chgr);


 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add CHGR IRQ chip\n");
  return VAR_26;
 }


 VAR_26 = FUNC_6(VAR_30, VAR_30->irq_chip_data,
      VAR_4,
      VAR_12,
      &VAR_22,
      &VAR_30->irq_chip_data_crit);


 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add CRIT IRQ chip\n");
  return VAR_26;
 }

 VAR_26 = FUNC_10(&VAR_25->dev, VAR_14, VAR_15,
       FUNC_2(VAR_15), ((void*)0), 0, ((void*)0));
 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to add devices\n");
  return VAR_26;
 }

 VAR_26 = FUNC_15(&VAR_25->dev.kobj, &VAR_16);
 if (VAR_26) {
  FUNC_7(&VAR_25->dev, "Failed to create sysfs group %d\n", VAR_26);
  return VAR_26;
 }
 FUNC_14(VAR_30->regmap, VAR_5,
    VAR_6, 0);

 return 0;
}
