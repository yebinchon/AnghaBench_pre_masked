
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct power_supply_config {struct ds278x_info* drv_data; } ;
struct i2c_device_id {size_t driver_data; } ;
struct TYPE_5__ {struct ds278x_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; int name; } ;
struct ds278x_platform_data {int rsns; } ;
struct TYPE_6__ {struct ds278x_info* name; } ;
struct ds278x_info {int id; int capacity; TYPE_2__ battery_desc; int bat_work; int battery; int status; int * ops; struct i2c_client* client; int rsns; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct i2c_client*,struct ds278x_info*) ;
 int FUNC_6 (int *,struct i2c_client*,int ,int ,int ) ;
 int FUNC_7 (int *,int) ;
 struct ds278x_info* FUNC_8 (int ,char*,int ,int) ;
 int FUNC_9 (struct ds278x_info*) ;
 struct ds278x_info* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,struct power_supply_config*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct ds278x_platform_data *VAR_12 = VAR_10->dev.platform_data;
 struct power_supply_config VAR_13 = {};
 struct ds278x_info *VAR_14;
 int VAR_15;
 int VAR_16;





 if (VAR_11->driver_data == VAR_0 && !VAR_12) {
  FUNC_3(&VAR_10->dev, "missing platform data for ds2786\n");
  return -VAR_2;
 }


 FUNC_11(&VAR_7);
 VAR_15 = FUNC_6(&VAR_6, VAR_10, 0, 0, VAR_4);
 FUNC_12(&VAR_7);
 if (VAR_15 < 0)
  goto fail_id;
 VAR_16 = VAR_15;

 VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_4);
 if (!VAR_14) {
  VAR_15 = -VAR_3;
  goto fail_info;
 }

 VAR_14->battery_desc.name = FUNC_8(VAR_4, "%s-%d",
         VAR_10->name, VAR_16);
 if (!VAR_14->battery_desc.name) {
  VAR_15 = -VAR_3;
  goto fail_name;
 }

 if (VAR_11->driver_data == VAR_0)
  VAR_14->rsns = VAR_12->rsns;

 FUNC_5(VAR_10, VAR_14);
 VAR_14->client = VAR_10;
 VAR_14->id = VAR_16;
 VAR_14->ops = &VAR_9[VAR_11->driver_data];
 FUNC_4(&VAR_14->battery_desc);
 VAR_13.drv_data = VAR_14;

 VAR_14->capacity = 100;
 VAR_14->status = VAR_5;

 FUNC_0(&VAR_14->bat_work, VAR_8);

 VAR_14->battery = FUNC_13(&VAR_10->dev,
           &VAR_14->battery_desc, &VAR_13);
 if (FUNC_1(VAR_14->battery)) {
  FUNC_3(&VAR_10->dev, "failed to register battery\n");
  VAR_15 = FUNC_2(VAR_14->battery);
  goto fail_register;
 } else {
  FUNC_14(&VAR_14->bat_work, VAR_1);
 }

 return 0;

fail_register:
 FUNC_9(VAR_14->battery_desc.name);
fail_name:
 FUNC_9(VAR_14);
fail_info:
 FUNC_11(&VAR_7);
 FUNC_7(&VAR_6, VAR_16);
 FUNC_12(&VAR_7);
fail_id:
 return VAR_15;
}
