
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 int VAR_2 = VAR_1->props.brightness;

 if (VAR_0)
  FUNC_1("setting brightness to %d\n", VAR_2);

 FUNC_0(VAR_2);
 return 0;
}
