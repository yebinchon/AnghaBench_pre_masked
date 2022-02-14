
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regmap_config {int dummy; } ;
struct mfd_cell {int dummy; } ;
struct max77620_chip {int irq_base; int chip_id; TYPE_2__* dev; int top_irq_data; int rmap; int chip_irq; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_8__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; int irq; } ;
typedef enum max77620_chip_id { ____Placeholder_max77620_chip_id } max77620_chip_id ;
struct TYPE_7__ {struct max77620_chip* irq_drv_data; } ;


 int FUNC_0 (struct mfd_cell*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;



 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 struct max77620_chip* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,struct mfd_cell const*,int,int *,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int,int,TYPE_1__*,int *) ;
 int FUNC_7 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_8 (struct i2c_client*,struct max77620_chip*) ;
 struct mfd_cell* VAR_6 ;
 struct regmap_config VAR_7 ;
 struct mfd_cell* VAR_8 ;
 int FUNC_9 (struct max77620_chip*) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (struct max77620_chip*) ;
 struct regmap_config VAR_10 ;
 struct max77620_chip* VAR_11 ;
 TYPE_1__ VAR_12 ;
 struct mfd_cell* VAR_13 ;
 struct regmap_config VAR_14 ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_16,
     const struct i2c_device_id *VAR_17)
{
 const struct regmap_config *VAR_18;
 struct max77620_chip *VAR_19;
 const struct mfd_cell *VAR_20;
 int VAR_21;
 bool VAR_22;
 int VAR_23;

 VAR_19 = FUNC_4(&VAR_16->dev, sizeof(*VAR_19), VAR_2);
 if (!VAR_19)
  return -VAR_1;

 FUNC_8(VAR_16, VAR_19);
 VAR_19->dev = &VAR_16->dev;
 VAR_19->irq_base = -1;
 VAR_19->chip_irq = VAR_16->irq;
 VAR_19->chip_id = (enum max77620_chip_id)VAR_17->driver_data;

 switch (VAR_19->chip_id) {
 case 129:
  VAR_20 = VAR_8;
  VAR_21 = FUNC_0(VAR_8);
  VAR_18 = &VAR_10;
  break;
 case 130:
  VAR_20 = VAR_6;
  VAR_21 = FUNC_0(VAR_6);
  VAR_18 = &VAR_7;
  break;
 case 128:
  VAR_20 = VAR_13;
  VAR_21 = FUNC_0(VAR_13);
  VAR_18 = &VAR_14;
  break;
 default:
  FUNC_3(VAR_19->dev, "ChipID is invalid %d\n", VAR_19->chip_id);
  return -VAR_0;
 }

 VAR_19->rmap = FUNC_7(VAR_16, VAR_18);
 if (FUNC_1(VAR_19->rmap)) {
  VAR_23 = FUNC_2(VAR_19->rmap);
  FUNC_3(VAR_19->dev, "Failed to initialise regmap: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_10(VAR_19);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_12.irq_drv_data = VAR_19;
 VAR_23 = FUNC_6(VAR_19->dev, VAR_19->rmap, VAR_16->irq,
           VAR_3 | VAR_4,
           VAR_19->irq_base, &VAR_12,
           &VAR_19->top_irq_data);
 if (VAR_23 < 0) {
  FUNC_3(VAR_19->dev, "Failed to add regmap irq: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_9(VAR_19);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_23 = FUNC_5(VAR_19->dev, VAR_5,
        VAR_20, VAR_21, ((void*)0), 0,
        FUNC_12(VAR_19->top_irq_data));
 if (VAR_23 < 0) {
  FUNC_3(VAR_19->dev, "Failed to add MFD children: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_22 = FUNC_11(VAR_16->dev.of_node);
 if (VAR_22 && !VAR_15) {
  VAR_11 = VAR_19;
  VAR_15 = VAR_9;
 }

 return 0;
}
