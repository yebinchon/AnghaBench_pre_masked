
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;



 struct i2c_client* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_0,
           unsigned long VAR_1, void *VAR_2)
{
 struct device *VAR_3 = VAR_2;
 struct i2c_client *VAR_4;

 switch (VAR_1) {
 case 128:
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   FUNC_1(VAR_4);
  break;

 default:
  break;
 }

 return 0;
}
