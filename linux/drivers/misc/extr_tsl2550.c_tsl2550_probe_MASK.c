
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tsl2550_data {int operating_mode; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {int* platform_data; int kobj; } ;
struct i2c_client {TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 int FUNC_2 (struct i2c_adapter*,int) ;
 int FUNC_3 (struct i2c_client*,struct tsl2550_data*) ;
 int FUNC_4 (struct tsl2550_data*) ;
 struct tsl2550_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_7 ;
 int FUNC_8 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 struct tsl2550_data *VAR_11;
 int *VAR_12, VAR_13 = 0;

 if (!FUNC_2(VAR_10, VAR_6
         | VAR_5)) {
  VAR_13 = -VAR_2;
  goto exit;
 }

 VAR_11 = FUNC_5(sizeof(struct tsl2550_data), VAR_4);
 if (!VAR_11) {
  VAR_13 = -VAR_3;
  goto exit;
 }
 VAR_11->client = VAR_8;
 FUNC_3(VAR_8, VAR_11);


 VAR_12 = VAR_8->dev.platform_data;
 if (VAR_12) {
  if (*VAR_12 < 0 || *VAR_12 > 1) {
   FUNC_0(&VAR_8->dev, "invalid operating_mode (%d)\n",
     *VAR_12);
   VAR_13 = -VAR_1;
   goto exit_kfree;
  }
  VAR_11->operating_mode = *VAR_12;
 } else
  VAR_11->operating_mode = 0;
 FUNC_1(&VAR_8->dev, "%s operating mode\n",
   VAR_11->operating_mode ? "extended" : "standard");

 FUNC_6(&VAR_11->update_lock);


 VAR_13 = FUNC_8(VAR_8);
 if (VAR_13)
  goto exit_kfree;


 VAR_13 = FUNC_7(&VAR_8->dev.kobj, &VAR_7);
 if (VAR_13)
  goto exit_kfree;

 FUNC_1(&VAR_8->dev, "support ver. %s enabled\n", VAR_0);

 return 0;

exit_kfree:
 FUNC_4(VAR_11);
exit:
 return VAR_13;
}
