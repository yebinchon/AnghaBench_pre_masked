
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger_platform_data {scalar_t__ irq_gpio; scalar_t__ use_mains; scalar_t__ use_usb; } ;
struct smb347_charger {void* battery; void* mains; struct smb347_charger_platform_data const* pdata; void* usb; void* regmap; struct device* dev; int lock; } ;
struct power_supply_config {char** supplied_to; struct smb347_charger* drv_data; int num_supplicants; } ;
struct i2c_device_id {int dummy; } ;
struct device {struct smb347_charger_platform_data* platform_data; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct smb347_charger* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct smb347_charger*) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (struct device*,int *,struct power_supply_config*) ;
 int FUNC_9 (void*) ;
 int VAR_3 ;
 int FUNC_10 (struct smb347_charger*) ;
 int FUNC_11 (struct smb347_charger*) ;
 int FUNC_12 (struct smb347_charger*,struct i2c_client*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 static char *VAR_9[] = { "smb347-battery" };
 const struct smb347_charger_platform_data *VAR_10;
 struct power_supply_config VAR_11 = {}, VAR_12 = {};
 struct device *VAR_13 = &VAR_7->dev;
 struct smb347_charger *VAR_14;
 int VAR_15;

 VAR_10 = VAR_13->platform_data;
 if (!VAR_10)
  return -VAR_0;

 if (!VAR_10->use_mains && !VAR_10->use_usb)
  return -VAR_0;

 VAR_14 = FUNC_4(VAR_13, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_6(VAR_7, VAR_14);

 FUNC_7(&VAR_14->lock);
 VAR_14->dev = &VAR_7->dev;
 VAR_14->pdata = VAR_10;

 VAR_14->regmap = FUNC_5(VAR_7, &VAR_5);
 if (FUNC_1(VAR_14->regmap))
  return FUNC_2(VAR_14->regmap);

 VAR_15 = FUNC_10(VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_11.supplied_to = VAR_9;
 VAR_11.num_supplicants = FUNC_0(VAR_9);
 VAR_11.drv_data = VAR_14;
 if (VAR_14->pdata->use_mains) {
  VAR_14->mains = FUNC_8(VAR_13, &VAR_4,
         &VAR_11);
  if (FUNC_1(VAR_14->mains))
   return FUNC_2(VAR_14->mains);
 }

 if (VAR_14->pdata->use_usb) {
  VAR_14->usb = FUNC_8(VAR_13, &VAR_6,
       &VAR_11);
  if (FUNC_1(VAR_14->usb)) {
   if (VAR_14->pdata->use_mains)
    FUNC_9(VAR_14->mains);
   return FUNC_2(VAR_14->usb);
  }
 }

 VAR_12.drv_data = VAR_14;
 VAR_14->battery = FUNC_8(VAR_13, &VAR_3,
          &VAR_12);
 if (FUNC_1(VAR_14->battery)) {
  if (VAR_14->pdata->use_usb)
   FUNC_9(VAR_14->usb);
  if (VAR_14->pdata->use_mains)
   FUNC_9(VAR_14->mains);
  return FUNC_2(VAR_14->battery);
 }





 if (VAR_10->irq_gpio >= 0) {
  VAR_15 = FUNC_12(VAR_14, VAR_7);
  if (VAR_15 < 0) {
   FUNC_3(VAR_13, "failed to initialize IRQ: %d\n", VAR_15);
   FUNC_3(VAR_13, "disabling IRQ support\n");
  } else {
   FUNC_11(VAR_14);
  }
 }

 return 0;
}
