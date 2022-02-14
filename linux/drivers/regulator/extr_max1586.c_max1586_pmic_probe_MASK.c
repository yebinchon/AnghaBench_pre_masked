
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct max1586_data* driver_data; scalar_t__ init_data; TYPE_2__* dev; } ;
struct of_device_id {int dummy; } ;
struct max1586_platform_data {int v3_gain; int num_subdevs; TYPE_1__* subdevs; } ;
struct max1586_data {int min_uV; int max_uV; int v3_curr_sel; scalar_t__ v6_curr_sel; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_12__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_13__ {int min_uV; int uV_step; int name; } ;
struct TYPE_11__ {int id; scalar_t__ platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct max1586_platform_data* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 struct max1586_data* FUNC_5 (TYPE_2__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_2__*,TYPE_4__*,struct regulator_config*) ;
 int FUNC_7 (struct i2c_client*,struct max1586_data*) ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 int FUNC_8 (TYPE_2__*,struct max1586_platform_data*) ;
 struct of_device_id* FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_11,
     const struct i2c_device_id *VAR_12)
{
 struct max1586_platform_data *VAR_13, VAR_14;
 struct regulator_config VAR_15 = { };
 struct max1586_data *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 const struct of_device_id *VAR_20;

 VAR_13 = FUNC_3(&VAR_11->dev);
 if (VAR_11->dev.of_node && !VAR_13) {
  VAR_20 = FUNC_9(FUNC_10(VAR_9),
     &VAR_11->dev);
  if (!VAR_20) {
   FUNC_2(&VAR_11->dev, "Error: No device match found\n");
   return -VAR_1;
  }
  VAR_19 = FUNC_8(&VAR_11->dev, &VAR_14);
  if (VAR_19 < 0)
   return VAR_19;
  VAR_13 = &VAR_14;
 }

 VAR_16 = FUNC_5(&VAR_11->dev, sizeof(struct max1586_data),
   VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->client = VAR_11;

 if (!VAR_13->v3_gain)
  return -VAR_0;

 VAR_16->min_uV = VAR_7 / 1000 * VAR_13->v3_gain / 1000;
 VAR_16->max_uV = VAR_5 / 1000 * VAR_13->v3_gain / 1000;


 VAR_16->v3_curr_sel = 24;
 VAR_16->v6_curr_sel = 0;

 for (VAR_17 = 0; VAR_17 < VAR_13->num_subdevs && VAR_17 <= VAR_8; VAR_17++) {
  struct regulator_dev *VAR_21;

  VAR_18 = VAR_13->subdevs[VAR_17].id;
  if (!VAR_13->subdevs[VAR_17].platform_data)
   continue;
  if (VAR_18 < VAR_4 || VAR_18 > VAR_8) {
   FUNC_2(&VAR_11->dev, "invalid regulator id %d\n", VAR_18);
   return -VAR_0;
  }

  if (VAR_18 == VAR_4) {
   VAR_10[VAR_18].min_uV = VAR_16->min_uV;
   VAR_10[VAR_18].uV_step =
     (VAR_16->max_uV - VAR_16->min_uV) /
     VAR_6;
  }

  VAR_15.dev = &VAR_11->dev;
  VAR_15.init_data = VAR_13->subdevs[VAR_17].platform_data;
  VAR_15.driver_data = VAR_16;

  VAR_21 = FUNC_6(&VAR_11->dev,
        &VAR_10[VAR_18], &VAR_15);
  if (FUNC_0(VAR_21)) {
   FUNC_2(&VAR_11->dev, "failed to register %s\n",
    VAR_10[VAR_18].name);
   return FUNC_1(VAR_21);
  }
 }

 FUNC_7(VAR_11, VAR_16);
 FUNC_4(&VAR_11->dev, "Maxim 1586 regulator driver loaded\n");
 return 0;
}
