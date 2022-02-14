
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maven_data {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_client*,struct maven_data*) ;
 int FUNC_2 (struct maven_data*) ;
 struct maven_data* FUNC_3 (int,int ) ;
 int FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7,
         const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 int VAR_10 = -VAR_0;
 struct maven_data* VAR_11;

 if (!FUNC_0(VAR_9, VAR_6 |
           VAR_5 |
           VAR_3 |
           VAR_4))
  goto ERROR0;
 if (!(VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2))) {
  VAR_10 = -VAR_1;
  goto ERROR0;
 }
 FUNC_1(VAR_7, VAR_11);
 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  goto ERROR4;
 return 0;
ERROR4:;
 FUNC_2(VAR_11);
ERROR0:;
 return VAR_10;
}
