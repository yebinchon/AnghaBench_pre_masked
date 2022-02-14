
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {int dummy; } ;
struct gb_i2c_device {int functionality; } ;


 struct gb_i2c_device* FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_0)
{
 struct gb_i2c_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->functionality;
}
