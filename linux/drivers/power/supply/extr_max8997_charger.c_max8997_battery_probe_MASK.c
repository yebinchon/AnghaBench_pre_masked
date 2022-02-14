
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct power_supply_config {struct charger_data* drv_data; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max8997_platform_data {int eoc_mA; int timeout; } ;
struct max8997_dev {int i2c; int dev; } ;
struct charger_data {int battery; struct max8997_dev* iodev; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct max8997_dev* FUNC_3 (int ) ;
 struct max8997_platform_data* FUNC_4 (int ) ;
 struct charger_data* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int *,struct power_supply_config*) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (struct platform_device*,struct charger_data*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 int VAR_7 = 0;
 struct charger_data *VAR_8;
 struct max8997_dev *VAR_9 = FUNC_3(VAR_6->dev.parent);
 struct max8997_platform_data *VAR_10 = FUNC_4(VAR_9->dev);
 struct power_supply_config VAR_11 = {};

 if (!VAR_10)
  return -VAR_0;

 if (VAR_10->eoc_mA) {
  int VAR_12 = (VAR_10->eoc_mA - 50) / 10;
  if (VAR_12 < 0)
   VAR_12 = 0;
  if (VAR_12 > 0xf)
   VAR_12 = 0xf;

  VAR_7 = FUNC_7(VAR_9->i2c,
    VAR_4, VAR_12, 0xf);
  if (VAR_7 < 0) {
   FUNC_2(&VAR_6->dev, "Cannot use i2c bus.\n");
   return VAR_7;
  }
 }

 switch (VAR_10->timeout) {
 case 5:
  VAR_7 = FUNC_7(VAR_9->i2c, VAR_3,
    0x2 << 4, 0x7 << 4);
  break;
 case 6:
  VAR_7 = FUNC_7(VAR_9->i2c, VAR_3,
    0x3 << 4, 0x7 << 4);
  break;
 case 7:
  VAR_7 = FUNC_7(VAR_9->i2c, VAR_3,
    0x4 << 4, 0x7 << 4);
  break;
 case 0:
  VAR_7 = FUNC_7(VAR_9->i2c, VAR_3,
    0x7 << 4, 0x7 << 4);
  break;
 default:
  FUNC_2(&VAR_6->dev, "incorrect timeout value (%d)\n",
    VAR_10->timeout);
  return -VAR_0;
 }
 if (VAR_7 < 0) {
  FUNC_2(&VAR_6->dev, "Cannot use i2c bus.\n");
  return VAR_7;
 }

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_8(VAR_6, VAR_8);


 VAR_8->dev = &VAR_6->dev;
 VAR_8->iodev = VAR_9;

 VAR_11.drv_data = VAR_8;

 VAR_8->battery = FUNC_6(&VAR_6->dev,
       &VAR_5,
       &VAR_11);
 if (FUNC_0(VAR_8->battery)) {
  FUNC_2(&VAR_6->dev, "failed: power supply register\n");
  return FUNC_1(VAR_8->battery);
 }

 return 0;
}
