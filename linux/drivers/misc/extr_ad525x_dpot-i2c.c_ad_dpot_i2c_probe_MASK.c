
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int name; int driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
struct ad_dpot_bus_data {int * bops; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ad_dpot_bus_data*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3,
          const struct i2c_device_id *VAR_4)
{
 struct ad_dpot_bus_data VAR_5 = {
  .client = VAR_3,
  .bops = &VAR_2,
 };

 if (!FUNC_2(VAR_3->adapter,
         VAR_1)) {
  FUNC_1(&VAR_3->dev, "SMBUS Word Data not Supported\n");
  return -VAR_0;
 }

 return FUNC_0(&VAR_3->dev, &VAR_5, VAR_4->driver_data, VAR_4->name);
}
