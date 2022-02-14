
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303_i2c {int chip; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct lan9303_i2c* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 struct lan9303_i2c *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 return FUNC_1(&VAR_2->chip);
}
