
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ideapad_private {struct backlight_device* blightdev; TYPE_2__* platform_device; TYPE_1__* adev; } ;
struct backlight_properties {unsigned long max_brightness; int type; } ;
struct TYPE_6__ {unsigned long brightness; int power; } ;
struct backlight_device {TYPE_3__ props; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct backlight_device* FUNC_2 (char*,int *,struct ideapad_private*,int *,struct backlight_properties*) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_7 ;
 int FUNC_4 (struct backlight_properties*,int ,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct ideapad_private *VAR_8)
{
 struct backlight_device *VAR_9;
 struct backlight_properties VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;

 if (FUNC_6(VAR_8->adev->handle, VAR_5, &VAR_11))
  return -VAR_1;
 if (FUNC_6(VAR_8->adev->handle, VAR_4, &VAR_12))
  return -VAR_1;
 if (FUNC_6(VAR_8->adev->handle, VAR_6, &VAR_13))
  return -VAR_1;

 FUNC_4(&VAR_10, 0, sizeof(struct backlight_properties));
 VAR_10.max_brightness = VAR_11;
 VAR_10.type = VAR_0;
 VAR_9 = FUNC_2("ideapad",
           &VAR_8->platform_device->dev,
           VAR_8,
           &VAR_7,
           &VAR_10);
 if (FUNC_0(VAR_9)) {
  FUNC_5("Could not register backlight device\n");
  return FUNC_1(VAR_9);
 }

 VAR_8->blightdev = VAR_9;
 VAR_9->props.brightness = VAR_12;
 VAR_9->props.power = VAR_13 ? VAR_3 : VAR_2;
 FUNC_3(VAR_9);

 return 0;
}
