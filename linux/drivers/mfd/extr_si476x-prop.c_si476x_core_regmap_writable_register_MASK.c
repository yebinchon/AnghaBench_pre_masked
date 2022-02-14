
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct si476x_core {int dummy; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 struct si476x_core* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct si476x_core*,int ) ;
 scalar_t__ FUNC_2 (struct si476x_core*,int ) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static bool FUNC_4(struct device *VAR_0,
       unsigned int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 struct si476x_core *VAR_3 = FUNC_0(VAR_2);

 return FUNC_2(VAR_3, (u16) VAR_1) &&
  !FUNC_1(VAR_3, (u16) VAR_1);
}
