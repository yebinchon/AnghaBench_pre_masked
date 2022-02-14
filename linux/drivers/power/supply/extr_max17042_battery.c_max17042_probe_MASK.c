
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct power_supply_desc {int dummy; } ;
struct power_supply_config {int of_node; struct max17042_chip* drv_data; } ;
struct max17042_chip {int init_complete; int work; TYPE_4__* regmap; TYPE_4__* battery; TYPE_7__* pdata; int chip_type; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {int of_node; TYPE_1__* driver; } ;
struct i2c_client {struct device dev; scalar_t__ irq; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct acpi_device_id {int driver_data; } ;
struct TYPE_16__ {scalar_t__ r_sns; int num_init_data; int enable_current_sense; TYPE_2__* init_data; } ;
struct TYPE_15__ {TYPE_3__* desc; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int data; int addr; } ;
struct TYPE_12__ {int acpi_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_19 ;
 struct acpi_device_id* FUNC_3 (int ,struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,struct max17042_chip*) ;
 struct max17042_chip* FUNC_6 (struct device*,int,int ) ;
 TYPE_4__* FUNC_7 (struct device*,struct power_supply_desc const*,struct power_supply_config*) ;
 TYPE_4__* FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct device*,scalar_t__,int *,int ,unsigned int,int ,struct max17042_chip*) ;
 int FUNC_10 (struct i2c_adapter*,int ) ;
 int FUNC_11 (struct i2c_client*,struct max17042_chip*) ;
 TYPE_7__* FUNC_12 (struct max17042_chip*) ;
 int VAR_20 ;
 struct power_supply_desc VAR_21 ;
 struct power_supply_desc VAR_22 ;
 int VAR_23 ;
 int FUNC_13 (struct max17042_chip*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_14 (TYPE_4__*,int ,int*) ;
 int FUNC_15 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_16 (TYPE_4__*,int ,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_26,
   const struct i2c_device_id *VAR_27)
{
 struct i2c_adapter *VAR_28 = VAR_26->adapter;
 const struct power_supply_desc *VAR_29 = &VAR_22;
 struct power_supply_config VAR_30 = {};
 const struct acpi_device_id *VAR_31 = ((void*)0);
 struct device *VAR_32 = &VAR_26->dev;
 struct max17042_chip *VAR_33;
 int VAR_34;
 int VAR_35;
 u32 VAR_36;

 if (!FUNC_10(VAR_28, VAR_7))
  return -VAR_3;

 VAR_33 = FUNC_6(&VAR_26->dev, sizeof(*VAR_33), VAR_6);
 if (!VAR_33)
  return -VAR_5;

 VAR_33->client = VAR_26;
 if (VAR_27) {
  VAR_33->chip_type = VAR_27->driver_data;
 } else {
  VAR_31 = FUNC_3(VAR_32->driver->acpi_match_table, VAR_32);
  if (!VAR_31)
   return -VAR_4;

  VAR_33->chip_type = VAR_31->driver_data;
 }
 VAR_33->regmap = FUNC_8(VAR_26, &VAR_23);
 if (FUNC_1(VAR_33->regmap)) {
  FUNC_4(&VAR_26->dev, "Failed to initialize regmap\n");
  return -VAR_2;
 }

 VAR_33->pdata = FUNC_12(VAR_33);
 if (!VAR_33->pdata) {
  FUNC_4(&VAR_26->dev, "no platform data provided\n");
  return -VAR_2;
 }

 FUNC_11(VAR_26, VAR_33);
 VAR_30.drv_data = VAR_33;
 VAR_30.of_node = VAR_32->of_node;



 if (!VAR_33->pdata->enable_current_sense)
  VAR_29 = &VAR_21;

 if (VAR_33->pdata->r_sns == 0)
  VAR_33->pdata->r_sns = VAR_14;

 if (VAR_33->pdata->init_data)
  for (VAR_35 = 0; VAR_35 < VAR_33->pdata->num_init_data; VAR_35++)
   FUNC_16(VAR_33->regmap,
     VAR_33->pdata->init_data[VAR_35].addr,
     VAR_33->pdata->init_data[VAR_35].data);

 if (!VAR_33->pdata->enable_current_sense) {
  FUNC_16(VAR_33->regmap, VAR_12, 0x0000);
  FUNC_16(VAR_33->regmap, VAR_16, 0x0003);
  FUNC_16(VAR_33->regmap, VAR_15, 0x0007);
 }

 VAR_33->battery = FUNC_7(&VAR_26->dev, VAR_29,
         &VAR_30);
 if (FUNC_1(VAR_33->battery)) {
  FUNC_4(&VAR_26->dev, "failed: power supply register\n");
  return FUNC_2(VAR_33->battery);
 }

 if (VAR_26->irq) {
  unsigned int VAR_37 = VAR_11 | VAR_8;





  if (VAR_31)
   VAR_37 |= VAR_10 | VAR_9;

  VAR_34 = FUNC_9(&VAR_26->dev, VAR_26->irq,
      ((void*)0),
      VAR_25, VAR_37,
      VAR_33->battery->desc->name,
      VAR_33);
  if (!VAR_34) {
   FUNC_15(VAR_33->regmap, VAR_13,
     VAR_0,
     VAR_0);
   FUNC_13(VAR_33, 1);
  } else {
   VAR_26->irq = 0;
   if (VAR_34 != -VAR_1)
    FUNC_4(&VAR_26->dev, "Failed to get IRQ\n");
  }
 }

 if (!VAR_26->irq)
  FUNC_16(VAR_33->regmap, VAR_17, 0xff00);

 FUNC_14(VAR_33->regmap, VAR_18, &VAR_36);
 if (VAR_36 & VAR_19) {
  FUNC_0(&VAR_33->work, VAR_20);
  VAR_34 = FUNC_5(&VAR_26->dev, VAR_24, VAR_33);
  if (VAR_34)
   return VAR_34;
  FUNC_17(&VAR_33->work);
 } else {
  VAR_33->init_complete = 1;
 }

 return 0;
}
