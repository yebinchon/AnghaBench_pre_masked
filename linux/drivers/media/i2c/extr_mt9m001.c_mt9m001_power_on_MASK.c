
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m001 {scalar_t__ reset_gpio; scalar_t__ standby_gpio; int clk; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;
 struct mt9m001* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_2(VAR_0);
 struct mt9m001 *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->clk);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->standby_gpio) {
  FUNC_1(VAR_2->standby_gpio, 0);
  FUNC_4(1000, 2000);
 }

 if (VAR_2->reset_gpio) {
  FUNC_1(VAR_2->reset_gpio, 1);
  FUNC_4(1000, 2000);
  FUNC_1(VAR_2->reset_gpio, 0);
  FUNC_4(1000, 2000);
 }

 return 0;
}
