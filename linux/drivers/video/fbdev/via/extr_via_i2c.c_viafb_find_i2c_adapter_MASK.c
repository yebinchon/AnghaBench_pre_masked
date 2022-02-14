
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct via_i2c_stuff {struct i2c_adapter adapter; } ;
typedef enum viafb_i2c_adap { ____Placeholder_viafb_i2c_adap } viafb_i2c_adap ;


 struct via_i2c_stuff* VAR_0 ;

struct i2c_adapter *FUNC_0(enum viafb_i2c_adap VAR_1)
{
 struct via_i2c_stuff *VAR_2 = &VAR_0[VAR_1];

 return &VAR_2->adapter;
}
