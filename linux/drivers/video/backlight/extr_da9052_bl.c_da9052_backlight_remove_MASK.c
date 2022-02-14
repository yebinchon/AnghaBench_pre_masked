
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9052_bl {int state; scalar_t__ brightness; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 struct da9052_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct da9052_bl*) ;
 struct backlight_device* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct backlight_device *VAR_2 = FUNC_2(VAR_1);
 struct da9052_bl *VAR_3 = FUNC_0(VAR_2);

 VAR_3->brightness = 0;
 VAR_3->state = VAR_0;
 FUNC_1(VAR_3);

 return 0;
}
