
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct reg_field {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int platform_data; } ;
struct i2c_client {int irq; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_3__ {int notifier_call; } ;
struct bq25890_device {scalar_t__ chip_id; TYPE_1__ usb_nb; int usb_phy; int usb_work; int * rmap_fields; int rmap; int lock; struct device* dev; struct i2c_client* client; } ;


 int FUNC_0 (struct reg_field*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (struct bq25890_device*,int ) ;
 int FUNC_6 (struct bq25890_device*) ;
 int FUNC_7 (struct bq25890_device*) ;
 int VAR_12 ;
 int FUNC_8 (struct bq25890_device*) ;
 int FUNC_9 (struct bq25890_device*) ;
 struct reg_field* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct device*,char*,...) ;
 struct bq25890_device* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int ,struct reg_field const) ;
 int FUNC_13 (struct i2c_client*,int *) ;
 int FUNC_14 (struct device*,int,int *,int ,int,int ,struct bq25890_device*) ;
 int FUNC_15 (struct device*,int ) ;
 int FUNC_16 (struct i2c_adapter*,int ) ;
 int FUNC_17 (struct i2c_client*,struct bq25890_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,TYPE_1__*) ;
 int FUNC_20 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_17,
    const struct i2c_device_id *VAR_18)
{
 struct i2c_adapter *VAR_19 = VAR_17->adapter;
 struct device *VAR_20 = &VAR_17->dev;
 struct bq25890_device *VAR_21;
 int VAR_22;
 int VAR_23;

 if (!FUNC_16(VAR_19, VAR_8)) {
  FUNC_10(VAR_20, "No support for SMBUS_BYTE_DATA\n");
  return -VAR_4;
 }

 VAR_21 = FUNC_11(VAR_20, sizeof(*VAR_21), VAR_7);
 if (!VAR_21)
  return -VAR_5;

 VAR_21->client = VAR_17;
 VAR_21->dev = VAR_20;

 FUNC_18(&VAR_21->lock);

 VAR_21->rmap = FUNC_13(VAR_17, &VAR_14);
 if (FUNC_2(VAR_21->rmap)) {
  FUNC_10(VAR_20, "failed to allocate register map\n");
  return FUNC_4(VAR_21->rmap);
 }

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_13); VAR_23++) {
  const struct reg_field *VAR_24 = VAR_13;

  VAR_21->rmap_fields[VAR_23] = FUNC_12(VAR_20, VAR_21->rmap,
            VAR_24[VAR_23]);
  if (FUNC_2(VAR_21->rmap_fields[VAR_23])) {
   FUNC_10(VAR_20, "cannot allocate regmap field\n");
   return FUNC_4(VAR_21->rmap_fields[VAR_23]);
  }
 }

 FUNC_17(VAR_17, VAR_21);

 VAR_21->chip_id = FUNC_5(VAR_21, VAR_6);
 if (VAR_21->chip_id < 0) {
  FUNC_10(VAR_20, "Cannot read chip ID.\n");
  return VAR_21->chip_id;
 }

 if ((VAR_21->chip_id != VAR_0) && (VAR_21->chip_id != VAR_2)
   && (VAR_21->chip_id != VAR_3)) {
  FUNC_10(VAR_20, "Chip with ID=%d, not supported!\n", VAR_21->chip_id);
  return -VAR_4;
 }

 if (!VAR_20->platform_data) {
  VAR_22 = FUNC_6(VAR_21);
  if (VAR_22 < 0) {
   FUNC_10(VAR_20, "Cannot read device properties.\n");
   return VAR_22;
  }
 } else {
  return -VAR_4;
 }

 VAR_22 = FUNC_7(VAR_21);
 if (VAR_22 < 0) {
  FUNC_10(VAR_20, "Cannot initialize the chip.\n");
  return VAR_22;
 }

 if (VAR_17->irq <= 0)
  VAR_17->irq = FUNC_8(VAR_21);

 if (VAR_17->irq < 0) {
  FUNC_10(VAR_20, "No irq resource found.\n");
  return VAR_17->irq;
 }


 VAR_21->usb_phy = FUNC_15(VAR_20, VAR_11);
 if (!FUNC_3(VAR_21->usb_phy)) {
  FUNC_1(&VAR_21->usb_work, VAR_16);
  VAR_21->usb_nb.notifier_call = VAR_15;
  FUNC_19(VAR_21->usb_phy, &VAR_21->usb_nb);
 }

 VAR_22 = FUNC_14(VAR_20, VAR_17->irq, ((void*)0),
     VAR_12,
     VAR_10 | VAR_9,
     VAR_1, VAR_21);
 if (VAR_22)
  goto irq_fail;

 VAR_22 = FUNC_9(VAR_21);
 if (VAR_22 < 0) {
  FUNC_10(VAR_20, "Failed to register power supply\n");
  goto irq_fail;
 }

 return 0;

irq_fail:
 if (!FUNC_3(VAR_21->usb_phy))
  FUNC_20(VAR_21->usb_phy, &VAR_21->usb_nb);

 return VAR_22;
}
