
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_device {int dummy; } ;


 struct cros_ec_device* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static inline struct cros_ec_device *FUNC_2(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
