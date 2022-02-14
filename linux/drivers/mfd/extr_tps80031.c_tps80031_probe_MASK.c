
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps80031_platform_data {scalar_t__ use_power_off; int irq_base; } ;
struct tps80031 {int irq_data; int * dev; int chip_info; int es_version; struct i2c_client** regmap; struct i2c_client** clients; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {scalar_t__ addr; int irq; int dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,...) ;
 struct tps80031_platform_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ,int ) ;
 struct i2c_client* FUNC_6 (int *,int ,scalar_t__) ;
 struct tps80031* FUNC_7 (int *,int,int ) ;
 struct i2c_client* FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,struct tps80031*) ;
 int FUNC_10 (int *,int,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 int FUNC_13 (struct tps80031*,struct tps80031_platform_data*) ;
 int FUNC_14 (struct tps80031*,int ,int ) ;
 scalar_t__ VAR_9 ;
 struct tps80031* VAR_10 ;
 int FUNC_15 (struct tps80031*,struct tps80031_platform_data*) ;
 int FUNC_16 (int *,int ,int ,int *) ;
 int * VAR_11 ;
 scalar_t__* VAR_12 ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct tps80031_platform_data *VAR_15 = FUNC_4(&VAR_13->dev);
 struct tps80031 *VAR_16;
 int VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19;
 int VAR_20;

 if (!VAR_15) {
  FUNC_3(&VAR_13->dev, "tps80031 requires platform data\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_7(&VAR_13->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  if (VAR_12[VAR_20] == VAR_13->addr)
   VAR_16->clients[VAR_20] = VAR_13;
  else
   VAR_16->clients[VAR_20] = FUNC_6(&VAR_13->dev,
      VAR_13->adapter, VAR_12[VAR_20]);
  if (FUNC_1(VAR_16->clients[VAR_20])) {
   FUNC_3(&VAR_13->dev, "can't attach client %d\n", VAR_20);
   return FUNC_2(VAR_16->clients[VAR_20]);
  }

  FUNC_9(VAR_16->clients[VAR_20], VAR_16);
  VAR_16->regmap[VAR_20] = FUNC_8(VAR_16->clients[VAR_20],
     &VAR_11[VAR_20]);
  if (FUNC_1(VAR_16->regmap[VAR_20])) {
   VAR_17 = FUNC_2(VAR_16->regmap[VAR_20]);
   FUNC_3(&VAR_13->dev,
    "regmap %d init failed, err %d\n", VAR_20, VAR_17);
   return VAR_17;
  }
 }

 VAR_17 = FUNC_16(&VAR_13->dev, VAR_6,
   VAR_4, &VAR_18);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev,
   "Silicon version number read failed: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_16(&VAR_13->dev, VAR_6,
   VAR_3, &VAR_19);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev,
   "Silicon eeprom version read failed: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_5(&VAR_13->dev, "ES version 0x%02x and EPROM version 0x%02x\n",
     VAR_18, VAR_19);
 VAR_16->es_version = VAR_18;
 VAR_16->dev = &VAR_13->dev;
 FUNC_9(VAR_13, VAR_16);
 VAR_16->chip_info = VAR_14->driver_data;

 VAR_17 = FUNC_14(VAR_16, VAR_13->irq, VAR_15->irq_base);
 if (VAR_17) {
  FUNC_3(&VAR_13->dev, "IRQ init failed: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_15(VAR_16, VAR_15);

 FUNC_13(VAR_16, VAR_15);

 VAR_17 = FUNC_10(VAR_16->dev, -1,
   VAR_8, FUNC_0(VAR_8),
   ((void*)0), 0,
   FUNC_12(VAR_16->irq_data));
 if (VAR_17 < 0) {
  FUNC_3(&VAR_13->dev, "mfd_add_devices failed: %d\n", VAR_17);
  goto fail_mfd_add;
 }

 if (VAR_15->use_power_off && !VAR_7) {
  VAR_10 = VAR_16;
  VAR_7 = VAR_9;
 }
 return 0;

fail_mfd_add:
 FUNC_11(VAR_13->irq, VAR_16->irq_data);
 return VAR_17;
}
