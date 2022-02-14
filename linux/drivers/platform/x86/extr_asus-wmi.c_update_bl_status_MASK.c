
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int power; int brightness; } ;
struct backlight_device {TYPE_3__ props; } ;
struct asus_wmi {TYPE_2__* driver; } ;
struct TYPE_5__ {int panel_power; TYPE_1__* quirks; } ;
struct TYPE_4__ {scalar_t__ scalar_panel_brightness; scalar_t__ store_backlight_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int *) ;
 struct asus_wmi* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct asus_wmi*) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_4)
{
 struct asus_wmi *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 != -VAR_2 && VAR_4->props.power != VAR_7) {
  VAR_6 = !!(VAR_4->props.power == VAR_3);
  VAR_8 = FUNC_0(VAR_0,
         VAR_6, ((void*)0));
  if (VAR_5->driver->quirks->store_backlight_power)
   VAR_5->driver->panel_power = VAR_4->props.power;



  if (VAR_5->driver->quirks->scalar_panel_brightness)
   return VAR_8;
 }

 if (VAR_5->driver->quirks->scalar_panel_brightness)
  VAR_6 = FUNC_2(VAR_4);
 else
  VAR_6 = VAR_4->props.brightness;

 VAR_8 = FUNC_0(VAR_1,
        VAR_6, ((void*)0));

 return VAR_8;
}
