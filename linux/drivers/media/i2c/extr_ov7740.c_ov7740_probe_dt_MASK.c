
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov7740 {void* pwdn_gpio; void* resetb_gpio; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,char*) ;
 void* FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2,
      struct ov7740 *VAR_3)
{
 VAR_3->resetb_gpio = FUNC_3(&VAR_2->dev, "reset",
   VAR_0);
 if (FUNC_0(VAR_3->resetb_gpio)) {
  FUNC_2(&VAR_2->dev, "can't get %s GPIO\n", "reset");
  return FUNC_1(VAR_3->resetb_gpio);
 }

 VAR_3->pwdn_gpio = FUNC_3(&VAR_2->dev, "powerdown",
   VAR_1);
 if (FUNC_0(VAR_3->pwdn_gpio)) {
  FUNC_2(&VAR_2->dev, "can't get %s GPIO\n", "powerdown");
  return FUNC_1(VAR_3->pwdn_gpio);
 }

 return 0;
}
