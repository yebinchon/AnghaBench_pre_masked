
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_platform_data {int dummy; } ;
struct pm860x_chip {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_1 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_3(struct pm860x_chip *VAR_0,
           struct i2c_client *VAR_1,
           struct pm860x_platform_data *VAR_2)
{
 FUNC_2(VAR_1);
 FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_2);
}
