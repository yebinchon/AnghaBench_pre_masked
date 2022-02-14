
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_field {int dummy; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int platform_data; TYPE_1__* driver; } ;
struct i2c_client {int irq; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct bq24257_device {int chip; int iilimit_autoset_enable; struct device* dev; int pg; int iilimit_setup_work; int * rmap_fields; int rmap; int lock; struct i2c_client* client; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
typedef enum bq2425x_chip { ____Placeholder_bq2425x_chip } bq2425x_chip ;
struct TYPE_2__ {int acpi_match_table; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct reg_field*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct acpi_device_id* FUNC_5 (int ,struct device*) ;
 int FUNC_6 (struct bq24257_device*,int ,int) ;
 int FUNC_7 (struct bq24257_device*) ;
 int FUNC_8 (struct bq24257_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct bq24257_device*) ;
 int FUNC_10 (struct bq24257_device*) ;
 struct reg_field* VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_11 (struct device*,char*,...) ;
 int FUNC_12 (struct device*,char*) ;
 struct bq24257_device* FUNC_13 (struct device*,int,int ) ;
 int FUNC_14 (struct device*,int ,struct reg_field const) ;
 int FUNC_15 (struct i2c_client*,int *) ;
 int FUNC_16 (struct device*,int ,int *,int ,int,int ,struct bq24257_device*) ;
 int FUNC_17 (struct i2c_adapter*,int ) ;
 int FUNC_18 (struct i2c_client*,struct bq24257_device*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_15,
    const struct i2c_device_id *VAR_16)
{
 struct i2c_adapter *VAR_17 = VAR_15->adapter;
 struct device *VAR_18 = &VAR_15->dev;
 const struct acpi_device_id *VAR_19;
 struct bq24257_device *VAR_20;
 int VAR_21;
 int VAR_22;

 if (!FUNC_17(VAR_17, VAR_6)) {
  FUNC_11(VAR_18, "No support for SMBUS_BYTE_DATA\n");
  return -VAR_1;
 }

 VAR_20 = FUNC_13(VAR_18, sizeof(*VAR_20), VAR_5);
 if (!VAR_20)
  return -VAR_2;

 VAR_20->client = VAR_15;
 VAR_20->dev = VAR_18;

 if (FUNC_0(VAR_18)) {
  VAR_19 = FUNC_5(VAR_18->driver->acpi_match_table,
         &VAR_15->dev);
  if (!VAR_19) {
   FUNC_11(VAR_18, "Failed to match ACPI device\n");
   return -VAR_1;
  }
  VAR_20->chip = (enum bq2425x_chip)VAR_19->driver_data;
 } else {
  VAR_20->chip = (enum bq2425x_chip)VAR_16->driver_data;
 }

 FUNC_19(&VAR_20->lock);

 VAR_20->rmap = FUNC_15(VAR_15, &VAR_13);
 if (FUNC_3(VAR_20->rmap)) {
  FUNC_11(VAR_18, "failed to allocate register map\n");
  return FUNC_4(VAR_20->rmap);
 }

 for (VAR_22 = 0; VAR_22 < FUNC_1(VAR_12); VAR_22++) {
  const struct reg_field *VAR_23 = VAR_12;

  VAR_20->rmap_fields[VAR_22] = FUNC_14(VAR_18, VAR_20->rmap,
            VAR_23[VAR_22]);
  if (FUNC_3(VAR_20->rmap_fields[VAR_22])) {
   FUNC_11(VAR_18, "cannot allocate regmap field\n");
   return FUNC_4(VAR_20->rmap_fields[VAR_22]);
  }
 }

 FUNC_18(VAR_15, VAR_20);

 if (!VAR_18->platform_data) {
  VAR_21 = FUNC_7(VAR_20);
  if (VAR_21 < 0) {
   FUNC_11(VAR_18, "Cannot read device properties.\n");
   return VAR_21;
  }
 } else {
  return -VAR_1;
 }






 if (VAR_20->chip == VAR_0)
  VAR_20->iilimit_autoset_enable = 0;

 if (VAR_20->iilimit_autoset_enable)
  FUNC_2(&VAR_20->iilimit_setup_work,
      VAR_10);







 if (VAR_20->chip != VAR_0)
  FUNC_9(VAR_20);

 if (FUNC_4(VAR_20->pg) == -VAR_3)
  return FUNC_4(VAR_20->pg);
 else if (!VAR_20->pg)
  FUNC_12(VAR_20->dev, "using SW-based power-good detection\n");


 VAR_21 = FUNC_6(VAR_20, VAR_4, 1);
 if (VAR_21 < 0)
  return VAR_21;






 VAR_21 = FUNC_6(VAR_20, VAR_4, 0);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_21 = FUNC_8(VAR_20);
 if (VAR_21 < 0) {
  FUNC_11(VAR_18, "Cannot initialize the chip.\n");
  return VAR_21;
 }

 VAR_21 = FUNC_10(VAR_20);
 if (VAR_21 < 0) {
  FUNC_11(VAR_18, "Failed to register power supply\n");
  return VAR_21;
 }

 VAR_21 = FUNC_16(VAR_18, VAR_15->irq, ((void*)0),
     VAR_11,
     VAR_8 |
     VAR_9 | VAR_7,
     VAR_14[VAR_20->chip], VAR_20);
 if (VAR_21) {
  FUNC_11(VAR_18, "Failed to request IRQ #%d\n", VAR_15->irq);
  return VAR_21;
 }

 return 0;
}
