
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct gb_i2c_device {int dummy; } ;


 int FUNC_0 (struct gb_i2c_device*,struct i2c_msg*,int) ;
 struct gb_i2c_device* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_0, struct i2c_msg *VAR_1,
         int VAR_2)
{
 struct gb_i2c_device *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
