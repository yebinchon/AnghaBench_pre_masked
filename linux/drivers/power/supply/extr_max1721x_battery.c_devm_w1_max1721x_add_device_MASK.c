
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; } ;
struct w1_slave {int dev; TYPE_1__ reg_num; void* family_data; } ;
struct power_supply_config {struct max17211_device_info* drv_data; } ;
struct TYPE_4__ {int no_thermal; int get_property; int num_properties; int properties; int type; int name; } ;
struct max17211_device_info {unsigned int rsense; int bat; int * w1_dev; TYPE_2__ bat_desc; int SerialNumber; int * DeviceName; int regmap; int * ManufacturerName; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 struct max17211_device_info* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,TYPE_2__*,struct power_supply_config*) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (struct max17211_device_info*,int ) ;
 scalar_t__ FUNC_10 (struct max17211_device_info*,int ,int,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_11 (int ,int ,unsigned int*) ;
 int FUNC_12 (int ,int,char*,unsigned int) ;
 int FUNC_13 (int *,int ,int) ;

__attribute__((used)) static int FUNC_14(struct w1_slave *VAR_18)
{
 struct power_supply_config VAR_19 = {};
 struct max17211_device_info *VAR_20;

 VAR_20 = FUNC_6(&VAR_18->dev, sizeof(*VAR_20), VAR_6);
 if (!VAR_20)
  return -VAR_5;

 VAR_18->family_data = (void *)VAR_20;
 VAR_20->w1_dev = &VAR_18->dev;







 FUNC_12(VAR_20->name, sizeof(VAR_20->name),
  "max1721x-%012X", (unsigned int)VAR_18->reg_num.id);
 VAR_20->bat_desc.name = VAR_20->name;





 VAR_20->bat_desc.no_thermal = 1;
 VAR_20->bat_desc.type = VAR_14;
 VAR_20->bat_desc.properties = VAR_16;
 VAR_20->bat_desc.num_properties = FUNC_0(VAR_16);
 VAR_20->bat_desc.get_property = VAR_15;
 VAR_19.drv_data = VAR_20;


 VAR_20->regmap = FUNC_8(VAR_20->w1_dev,
     &VAR_17);
 if (FUNC_1(VAR_20->regmap)) {
  int VAR_21 = FUNC_2(VAR_20->regmap);

  FUNC_3(VAR_20->w1_dev, "Failed to allocate register map: %d\n",
   VAR_21);
  return VAR_21;
 }


 VAR_20->rsense = 0;
 if (FUNC_11(VAR_20->regmap, VAR_11, &VAR_20->rsense)) {
  FUNC_3(VAR_20->w1_dev, "Can't read RSense. Hardware error.\n");
  return -VAR_4;
 }

 if (!VAR_20->rsense) {
  FUNC_5(VAR_20->w1_dev, "RSense not calibrated, set 10 mOhms!\n");
  VAR_20->rsense = 1000;
 }
 FUNC_4(VAR_20->w1_dev, "RSense: %d mOhms.\n", VAR_20->rsense / 100);

 if (FUNC_10(VAR_20, VAR_10,
   VAR_9, VAR_20->ManufacturerName)) {
  FUNC_3(VAR_20->w1_dev, "Can't read manufacturer. Hardware error.\n");
  return -VAR_4;
 }

 if (!VAR_20->ManufacturerName[0])
  FUNC_13(VAR_20->ManufacturerName, VAR_3,
   2 * VAR_9);

 if (FUNC_10(VAR_20, VAR_8,
   VAR_7, VAR_20->DeviceName)) {
  FUNC_3(VAR_20->w1_dev, "Can't read device. Hardware error.\n");
  return -VAR_4;
 }
 if (!VAR_20->DeviceName[0]) {
  unsigned int VAR_22;

  if (FUNC_11(VAR_20->regmap,
    VAR_13, &VAR_22)) {
   FUNC_3(VAR_20->w1_dev, "Can't read device name reg.\n");
   return -VAR_4;
  }

  switch (VAR_22 & VAR_12) {
  case 129:
   FUNC_13(VAR_20->DeviceName, VAR_0,
    2 * VAR_7);
   break;
  case 128:
   FUNC_13(VAR_20->DeviceName, VAR_1,
    2 * VAR_7);
   break;
  default:
   FUNC_13(VAR_20->DeviceName, VAR_2,
    2 * VAR_7);
  }
 }

 if (FUNC_9(VAR_20, VAR_20->SerialNumber)) {
  FUNC_3(VAR_20->w1_dev, "Can't read serial. Hardware error.\n");
  return -VAR_4;
 }

 VAR_20->bat = FUNC_7(&VAR_18->dev, &VAR_20->bat_desc,
      &VAR_19);
 if (FUNC_1(VAR_20->bat)) {
  FUNC_3(VAR_20->w1_dev, "failed to register battery\n");
  return FUNC_2(VAR_20->bat);
 }

 return 0;
}
