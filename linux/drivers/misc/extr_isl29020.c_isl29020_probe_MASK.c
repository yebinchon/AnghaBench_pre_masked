
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; int name; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1,
     const struct i2c_device_id *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_5(&VAR_1->dev.kobj, &VAR_0);
 if (VAR_3) {
  FUNC_2(&VAR_1->dev, "isl29020: device create file failed\n");
  return VAR_3;
 }
 FUNC_3(&VAR_1->dev, "%s isl29020: ALS chip found\n", VAR_1->name);
 FUNC_1(VAR_1, 0);
 FUNC_4(&VAR_1->dev);
 return VAR_3;
}
