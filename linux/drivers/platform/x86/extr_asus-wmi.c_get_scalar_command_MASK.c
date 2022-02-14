
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ brightness; scalar_t__ max_brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct asus_wmi {TYPE_2__* driver; } ;
struct TYPE_4__ {scalar_t__ brightness; } ;


 struct asus_wmi* FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static u32 FUNC_1(struct backlight_device *VAR_0)
{
 struct asus_wmi *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = 0;

 if ((VAR_1->driver->brightness < VAR_0->props.brightness) ||
     VAR_0->props.brightness == VAR_0->props.max_brightness)
  VAR_2 = 0x00008001;
 else if ((VAR_1->driver->brightness > VAR_0->props.brightness) ||
   VAR_0->props.brightness == 0)
  VAR_2 = 0x00008000;

 VAR_1->driver->brightness = VAR_0->props.brightness;

 return VAR_2;
}
