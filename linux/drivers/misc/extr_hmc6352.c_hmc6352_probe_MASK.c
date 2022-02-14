
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct i2c_client {int name; TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1,
     const struct i2c_device_id *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_1->dev.kobj, &VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_1->dev, "device_create_file failed\n");
  return VAR_3;
 }
 FUNC_1(&VAR_1->dev, "%s HMC6352 compass chip found\n",
       VAR_1->name);
 return 0;
}
