
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sbs_info {int last_state; int work; int power_supply; int regmap; struct i2c_client* client; } ;
struct power_supply_config {struct sbs_info* drv_data; int of_node; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {int of_node; } ;
struct i2c_client {int name; TYPE_1__ dev; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct sbs_info* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int *,struct power_supply_config*) ;
 int FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int *,int ,int,int ,struct sbs_info*) ;
 int FUNC_10 (struct i2c_client*,struct sbs_info*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_10,
       const struct i2c_device_id *VAR_11)
{
 struct power_supply_config VAR_12 = {};
 struct sbs_info *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_6(&VAR_10->dev, sizeof(struct sbs_info), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->client = VAR_10;
 VAR_12.of_node = VAR_10->dev.of_node;
 VAR_12.drv_data = VAR_13;

 FUNC_10(VAR_10, VAR_13);

 VAR_13->regmap = FUNC_8(VAR_10, &VAR_9);
 if (FUNC_1(VAR_13->regmap))
  return FUNC_2(VAR_13->regmap);





 VAR_14 = FUNC_12(VAR_13->regmap, VAR_5, &VAR_15);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "Failed to get device status\n");
  return VAR_14;
 }
 VAR_13->last_state = VAR_15;

 VAR_13->power_supply = FUNC_7(&VAR_10->dev, &VAR_7,
       &VAR_12);
 if (FUNC_1(VAR_13->power_supply)) {
  FUNC_3(&VAR_10->dev, "Failed to register power supply\n");
  return FUNC_2(VAR_13->power_supply);
 }






 if (VAR_10->irq) {
  VAR_14 = FUNC_9(&VAR_10->dev, VAR_10->irq,
     ((void*)0), VAR_8,
     VAR_3 | VAR_2,
     FUNC_5(&VAR_10->dev), VAR_13);
  if (VAR_14) {
   FUNC_3(&VAR_10->dev, "Failed to request irq, %d\n", VAR_14);
   return VAR_14;
  }
 } else {
  FUNC_0(&VAR_13->work, VAR_6);
  FUNC_13(&VAR_13->work,
          FUNC_11(VAR_4));
 }

 FUNC_4(&VAR_10->dev,
   "%s: smart charger device registered\n", VAR_10->name);

 return 0;
}
