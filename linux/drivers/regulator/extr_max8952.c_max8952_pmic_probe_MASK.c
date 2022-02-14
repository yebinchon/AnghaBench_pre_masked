
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct regulator_dev* ena_gpiod; scalar_t__ of_node; struct max8952_data* driver_data; TYPE_2__* init_data; TYPE_3__* dev; } ;
struct max8952_platform_data {int default_mode; int* dvs_mode; int sync_freq; int ramp_speed; TYPE_2__* reg_data; } ;
struct max8952_data {int vid0; int vid1; struct regulator_dev* vid1_gpiod; struct regulator_dev* vid0_gpiod; struct max8952_platform_data* pdata; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_13__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_3__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef struct regulator_dev gpio_desc ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;
struct TYPE_11__ {scalar_t__ boot_on; } ;
struct TYPE_12__ {TYPE_1__ constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 struct max8952_platform_data* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 void* FUNC_5 (TYPE_3__*,char*,int,int) ;
 struct max8952_data* FUNC_6 (TYPE_3__*,int,int ) ;
 struct regulator_dev* FUNC_7 (TYPE_3__*,int *,struct regulator_config*) ;
 struct regulator_dev* FUNC_8 (TYPE_3__*,char*,int) ;
 int FUNC_9 (struct regulator_dev*,int ) ;
 int FUNC_10 (struct i2c_adapter*,int ) ;
 int FUNC_11 (struct i2c_client*,struct max8952_data*) ;
 struct max8952_platform_data* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct max8952_data*,int ) ;
 int FUNC_14 (struct max8952_data*,int ,int) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_16,
  const struct i2c_device_id *VAR_17)
{
 struct i2c_adapter *VAR_18 = VAR_16->adapter;
 struct max8952_platform_data *VAR_19 = FUNC_3(&VAR_16->dev);
 struct regulator_config VAR_20 = { };
 struct max8952_data *VAR_21;
 struct regulator_dev *VAR_22;
 struct gpio_desc *VAR_23;
 enum gpiod_flags VAR_24;

 int VAR_25 = 0;

 if (VAR_16->dev.of_node)
  VAR_19 = FUNC_12(&VAR_16->dev);

 if (!VAR_19) {
  FUNC_2(&VAR_16->dev, "Require the platform data\n");
  return -VAR_0;
 }

 if (!FUNC_10(VAR_18, VAR_7))
  return -VAR_1;

 VAR_21 = FUNC_6(&VAR_16->dev, sizeof(struct max8952_data),
          VAR_3);
 if (!VAR_21)
  return -VAR_2;

 VAR_21->client = VAR_16;
 VAR_21->pdata = VAR_19;

 VAR_20.dev = &VAR_16->dev;
 VAR_20.init_data = VAR_19->reg_data;
 VAR_20.driver_data = VAR_21;
 VAR_20.of_node = VAR_16->dev.of_node;

 if (VAR_19->reg_data->constraints.boot_on)
  VAR_24 = VAR_5;
 else
  VAR_24 = VAR_6;
 VAR_24 |= VAR_4;




 VAR_23 = FUNC_8(&VAR_16->dev,
       "max8952,en",
       VAR_24);
 if (FUNC_0(VAR_23))
  return FUNC_1(VAR_23);
 if (VAR_23)
  VAR_20.ena_gpiod = VAR_23;

 VAR_22 = FUNC_7(&VAR_16->dev, &VAR_15, &VAR_20);
 if (FUNC_0(VAR_22)) {
  VAR_25 = FUNC_1(VAR_22);
  FUNC_2(&VAR_16->dev, "regulator init failed (%d)\n", VAR_25);
  return VAR_25;
 }

 VAR_21->vid0 = VAR_19->default_mode & 0x1;
 VAR_21->vid1 = (VAR_19->default_mode >> 1) & 0x1;


 VAR_24 = VAR_21->vid0 ? VAR_5 : VAR_6;
 VAR_21->vid0_gpiod = FUNC_5(&VAR_16->dev,
           "max8952,vid",
           0, VAR_24);
 if (FUNC_0(VAR_21->vid0_gpiod))
  return FUNC_1(VAR_21->vid0_gpiod);
 VAR_24 = VAR_21->vid1 ? VAR_5 : VAR_6;
 VAR_21->vid1_gpiod = FUNC_5(&VAR_16->dev,
           "max8952,vid",
           1, VAR_24);
 if (FUNC_0(VAR_21->vid1_gpiod))
  return FUNC_1(VAR_21->vid1_gpiod);


 if (!VAR_21->vid0_gpiod || !VAR_21->vid1_gpiod) {
  FUNC_4(&VAR_16->dev, "VID0/1 gpio invalid: "
    "DVS not available.\n");
  VAR_21->vid0 = 0;
  VAR_21->vid1 = 0;

  if (VAR_21->vid0_gpiod)
   FUNC_9(VAR_21->vid0_gpiod, 0);
  if (VAR_21->vid1_gpiod)
   FUNC_9(VAR_21->vid1_gpiod, 0);


  FUNC_14(VAR_21, VAR_8, 0x60);

  FUNC_2(&VAR_16->dev, "DVS modes disabled because VID0 and VID1"
    " do not have proper controls.\n");
 } else {
  FUNC_14(VAR_21, VAR_8, 0x0);
 }

 FUNC_14(VAR_21, VAR_9,
   (FUNC_13(VAR_21,
       VAR_9) & 0xC0) |
   (VAR_19->dvs_mode[0] & 0x3F));
 FUNC_14(VAR_21, VAR_10,
   (FUNC_13(VAR_21,
       VAR_10) & 0xC0) |
   (VAR_19->dvs_mode[1] & 0x3F));
 FUNC_14(VAR_21, VAR_11,
   (FUNC_13(VAR_21,
       VAR_11) & 0xC0) |
   (VAR_19->dvs_mode[2] & 0x3F));
 FUNC_14(VAR_21, VAR_12,
   (FUNC_13(VAR_21,
       VAR_12) & 0xC0) |
   (VAR_19->dvs_mode[3] & 0x3F));

 FUNC_14(VAR_21, VAR_14,
   (FUNC_13(VAR_21, VAR_14) & 0x3F) |
   ((VAR_19->sync_freq & 0x3) << 6));
 FUNC_14(VAR_21, VAR_13,
   (FUNC_13(VAR_21, VAR_13) & 0x1F) |
   ((VAR_19->ramp_speed & 0x7) << 5));

 FUNC_11(VAR_16, VAR_21);

 return 0;
}
