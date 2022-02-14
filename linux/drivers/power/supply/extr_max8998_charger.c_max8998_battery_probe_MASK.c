
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct power_supply_config {struct max8998_battery_data* drv_data; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max8998_platform_data {int eoc; int restart; int timeout; } ;
struct max8998_dev {struct i2c_client* i2c; struct max8998_platform_data* pdata; } ;
struct max8998_battery_data {TYPE_1__* dev; int battery; struct max8998_dev* iodev; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct max8998_dev* FUNC_4 (int ) ;
 struct max8998_battery_data* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int *,struct power_supply_config*) ;
 int VAR_6 ;
 int FUNC_7 (struct i2c_client*,int ,int,int) ;
 int FUNC_8 (struct platform_device*,struct max8998_battery_data*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct max8998_dev *VAR_8 = FUNC_4(VAR_7->dev.parent);
 struct max8998_platform_data *VAR_9 = VAR_8->pdata;
 struct power_supply_config VAR_10 = {};
 struct max8998_battery_data *VAR_11;
 struct i2c_client *VAR_12;
 int VAR_13 = 0;

 if (!VAR_9) {
  FUNC_3(VAR_7->dev.parent, "No platform init data supplied\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_5(&VAR_7->dev, sizeof(struct max8998_battery_data),
    VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->dev = &VAR_7->dev;
 VAR_11->iodev = VAR_8;
 FUNC_8(VAR_7, VAR_11);
 VAR_12 = VAR_11->iodev->i2c;




 if (VAR_9->eoc >= 10 && VAR_9->eoc <= 45) {
  FUNC_7(VAR_12, VAR_4,
    (VAR_9->eoc / 5 - 2) << 5, 0x7 << 5);
 } else if (VAR_9->eoc == 0) {
  FUNC_2(VAR_11->dev,
   "EOC value not set: leave it unchanged.\n");
 } else {
  FUNC_3(VAR_11->dev, "Invalid EOC value\n");
  return -VAR_0;
 }


 switch (VAR_9->restart) {
 case 100:
  FUNC_7(VAR_12, VAR_4, 0x1 << 3, 0x3 << 3);
  break;
 case 150:
  FUNC_7(VAR_12, VAR_4, 0x0 << 3, 0x3 << 3);
  break;
 case 200:
  FUNC_7(VAR_12, VAR_4, 0x2 << 3, 0x3 << 3);
  break;
 case -1:
  FUNC_7(VAR_12, VAR_4, 0x3 << 3, 0x3 << 3);
  break;
 case 0:
  FUNC_2(VAR_11->dev,
   "Restart Level not set: leave it unchanged.\n");
  break;
 default:
  FUNC_3(VAR_11->dev, "Invalid Restart Level\n");
  return -VAR_0;
 }


 switch (VAR_9->timeout) {
 case 5:
  FUNC_7(VAR_12, VAR_5, 0x0 << 4, 0x3 << 4);
  break;
 case 6:
  FUNC_7(VAR_12, VAR_5, 0x1 << 4, 0x3 << 4);
  break;
 case 7:
  FUNC_7(VAR_12, VAR_5, 0x2 << 4, 0x3 << 4);
  break;
 case -1:
  FUNC_7(VAR_12, VAR_5, 0x3 << 4, 0x3 << 4);
  break;
 case 0:
  FUNC_2(VAR_11->dev,
   "Full Timeout not set: leave it unchanged.\n");
  break;
 default:
  FUNC_3(VAR_11->dev, "Invalid Full Timeout value\n");
  return -VAR_0;
 }

 VAR_10.drv_data = VAR_11;

 VAR_11->battery = FUNC_6(VAR_11->dev,
            &VAR_6,
            &VAR_10);
 if (FUNC_0(VAR_11->battery)) {
  VAR_13 = FUNC_1(VAR_11->battery);
  FUNC_3(VAR_11->dev, "failed: power supply register: %d\n",
   VAR_13);
  return VAR_13;
 }

 return 0;
}
