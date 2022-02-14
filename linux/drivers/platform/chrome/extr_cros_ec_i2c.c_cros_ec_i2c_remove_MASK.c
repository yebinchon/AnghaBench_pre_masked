
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cros_ec_device {int dummy; } ;


 int FUNC_0 (struct cros_ec_device*) ;
 struct cros_ec_device* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct cros_ec_device *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
