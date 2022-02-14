
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct backlight_device* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct backlight_device *VAR_1 = FUNC_1(VAR_0);

 VAR_1->props.brightness = 0;
 FUNC_0(VAR_1);

 return 0;
}
