
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct da9052_bl {int brightness; int state; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 struct da9052_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct da9052_bl*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 int VAR_2 = VAR_1->props.brightness;
 struct da9052_bl *VAR_3 = FUNC_0(VAR_1);

 VAR_3->brightness = VAR_2;
 VAR_3->state = VAR_0;

 return FUNC_1(VAR_3);
}
