
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_register {int value; scalar_t__ addr; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0,
         const struct sensor_register *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_3 == 0 && VAR_1[VAR_2].addr; VAR_2++)
  VAR_3 = FUNC_0(VAR_0, VAR_1[VAR_2].addr, VAR_1[VAR_2].value);

 return VAR_3;
}
