
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct regmap_irq_chip {int dummy; } ;
struct regmap_config {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
struct mfd_cell {int dummy; } ;
struct i2c_device_id {uintptr_t driver_data; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
struct da9062 {uintptr_t chip_type; int regmap_irq; TYPE_1__* dev; int regmap; } ;


 int FUNC_0 (struct mfd_cell*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 struct mfd_cell* VAR_8 ;
 struct regmap_irq_chip VAR_9 ;
 struct regmap_config VAR_10 ;
 int FUNC_3 (struct da9062*) ;
 struct mfd_cell* VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct da9062*) ;
 struct regmap_irq_chip VAR_13 ;
 struct regmap_config VAR_14 ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 struct da9062* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_9 (struct i2c_client*,struct da9062*) ;
 int FUNC_10 (TYPE_1__*,int ,struct mfd_cell const*,int,int *,unsigned int,int *) ;
 struct of_device_id* FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ,int,int,struct regmap_irq_chip const*,int *) ;
 int FUNC_13 (int ,int ) ;
 unsigned int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_15,
 const struct i2c_device_id *VAR_16)
{
 struct da9062 *VAR_17;
 const struct of_device_id *VAR_18;
 unsigned int VAR_19;
 const struct mfd_cell *VAR_20;
 const struct regmap_irq_chip *VAR_21;
 const struct regmap_config *VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_17 = FUNC_7(&VAR_15->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 if (VAR_15->dev.of_node) {
  VAR_18 = FUNC_11(VAR_12, VAR_15->dev.of_node);
  if (!VAR_18)
   return -VAR_0;

  VAR_17->chip_type = (uintptr_t)VAR_18->data;
 } else {
  VAR_17->chip_type = VAR_16->driver_data;
 }

 FUNC_9(VAR_15, VAR_17);
 VAR_17->dev = &VAR_15->dev;

 if (!VAR_15->irq) {
  FUNC_5(VAR_17->dev, "No IRQ configured\n");
  return -VAR_0;
 }

 switch (VAR_17->chip_type) {
 case 129:
  VAR_20 = VAR_8;
  VAR_23 = FUNC_0(VAR_8);
  VAR_21 = &VAR_9;
  VAR_22 = &VAR_10;
  break;
 case 128:
  VAR_20 = VAR_11;
  VAR_23 = FUNC_0(VAR_11);
  VAR_21 = &VAR_13;
  VAR_22 = &VAR_14;
  break;
 default:
  FUNC_5(VAR_17->dev, "Unrecognised chip type\n");
  return -VAR_1;
 }

 VAR_17->regmap = FUNC_8(VAR_15, VAR_22);
 if (FUNC_1(VAR_17->regmap)) {
  VAR_24 = FUNC_2(VAR_17->regmap);
  FUNC_5(VAR_17->dev, "Failed to allocate register map: %d\n",
   VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_3(VAR_17);
 if (VAR_24 < 0)
  FUNC_6(VAR_17->dev, "Cannot clear fault log\n");

 VAR_24 = FUNC_4(VAR_17);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_12(VAR_17->regmap, VAR_15->irq,
   VAR_6 | VAR_4 | VAR_5,
   -1, VAR_21,
   &VAR_17->regmap_irq);
 if (VAR_24) {
  FUNC_5(VAR_17->dev, "Failed to request IRQ %d: %d\n",
   VAR_15->irq, VAR_24);
  return VAR_24;
 }

 VAR_19 = FUNC_14(VAR_17->regmap_irq);

 VAR_24 = FUNC_10(VAR_17->dev, VAR_7, VAR_20,
         VAR_23, ((void*)0), VAR_19,
         ((void*)0));
 if (VAR_24) {
  FUNC_5(VAR_17->dev, "Cannot register child devices\n");
  FUNC_13(VAR_15->irq, VAR_17->regmap_irq);
  return VAR_24;
 }

 return VAR_24;
}
