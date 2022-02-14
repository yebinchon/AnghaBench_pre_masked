
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov7670_info {void* resetb_gpio; void* pwdn_gpio; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,char*) ;
 void* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1, struct ov7670_info *VAR_2)
{
 VAR_2->pwdn_gpio = FUNC_3(&VAR_1->dev, "powerdown",
   VAR_0);
 if (FUNC_0(VAR_2->pwdn_gpio)) {
  FUNC_2(&VAR_1->dev, "can't get %s GPIO\n", "powerdown");
  return FUNC_1(VAR_2->pwdn_gpio);
 }

 VAR_2->resetb_gpio = FUNC_3(&VAR_1->dev, "reset",
   VAR_0);
 if (FUNC_0(VAR_2->resetb_gpio)) {
  FUNC_2(&VAR_1->dev, "can't get %s GPIO\n", "reset");
  return FUNC_1(VAR_2->resetb_gpio);
 }

 FUNC_4(3000, 5000);

 return 0;
}
