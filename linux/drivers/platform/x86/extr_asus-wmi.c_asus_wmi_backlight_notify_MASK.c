
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct asus_wmi {struct backlight_device* backlight_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct backlight_device*,int ) ;
 int FUNC_1 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_2(struct asus_wmi *VAR_5, int VAR_6)
{
 struct backlight_device *VAR_7 = VAR_5->backlight_device;
 int VAR_8 = VAR_7->props.brightness;
 int VAR_9 = VAR_8;

 if (VAR_6 >= VAR_4 && VAR_6 <= VAR_3)
  VAR_9 = VAR_6 - VAR_4 + 1;
 else if (VAR_6 >= VAR_2 && VAR_6 <= VAR_1)
  VAR_9 = VAR_6 - VAR_2;

 VAR_7->props.brightness = VAR_9;
 FUNC_1(VAR_7);
 FUNC_0(VAR_7, VAR_0);

 return VAR_8;
}
