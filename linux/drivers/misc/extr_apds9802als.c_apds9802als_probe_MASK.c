
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct als_data {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct i2c_client*,struct als_data*) ;
 int FUNC_4 (struct als_data*) ;
 struct als_data* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 int VAR_5;
 struct als_data *VAR_6;

 VAR_6 = FUNC_5(sizeof(struct als_data), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(&VAR_3->dev, "Memory allocation failed\n");
  return -VAR_0;
 }
 FUNC_3(VAR_3, VAR_6);
 VAR_5 = FUNC_9(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "device create file failed\n");
  goto als_error1;
 }
 FUNC_2(&VAR_3->dev, "ALS chip found\n");
 FUNC_0(VAR_3);
 FUNC_6(&VAR_6->mutex);

 FUNC_8(&VAR_3->dev);
 FUNC_7(&VAR_3->dev);

 return VAR_5;
als_error1:
 FUNC_4(VAR_6);
 return VAR_5;
}
