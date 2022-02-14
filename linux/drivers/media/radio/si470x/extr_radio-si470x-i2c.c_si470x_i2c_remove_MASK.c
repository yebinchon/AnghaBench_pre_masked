
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {scalar_t__ gpio_reset; int videodev; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 struct si470x_device* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct si470x_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->videodev);

 if (VAR_1->gpio_reset)
  FUNC_0(VAR_1->gpio_reset, 0);

 return 0;
}
