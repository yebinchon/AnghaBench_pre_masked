
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m001 {int clk; int standby_gpio; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;
 struct mt9m001* FUNC_3 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_2(VAR_0);
 struct mt9m001 *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2->standby_gpio, 1);
 FUNC_0(VAR_2->clk);

 return 0;
}
