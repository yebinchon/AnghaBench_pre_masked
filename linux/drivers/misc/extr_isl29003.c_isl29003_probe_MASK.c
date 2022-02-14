
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isl29003_data {int lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,struct isl29003_data*) ;
 int VAR_5 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct isl29003_data*) ;
 struct isl29003_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
        const struct i2c_device_id *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 struct isl29003_data *VAR_9;
 int VAR_10 = 0;

 if (!FUNC_1(VAR_8, VAR_4))
  return -VAR_1;

 VAR_9 = FUNC_5(sizeof(struct isl29003_data), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->client = VAR_6;
 FUNC_2(VAR_6, VAR_9);
 FUNC_6(&VAR_9->lock);


 VAR_10 = FUNC_3(VAR_6);
 if (VAR_10)
  goto exit_kfree;


 VAR_10 = FUNC_7(&VAR_6->dev.kobj, &VAR_5);
 if (VAR_10)
  goto exit_kfree;

 FUNC_0(&VAR_6->dev, "driver version %s enabled\n", VAR_0);
 return 0;

exit_kfree:
 FUNC_4(VAR_9);
 return VAR_10;
}
