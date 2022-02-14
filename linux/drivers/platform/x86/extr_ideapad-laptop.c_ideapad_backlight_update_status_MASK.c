
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ideapad_private {TYPE_1__* adev; } ;
struct TYPE_4__ {int brightness; scalar_t__ power; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ideapad_private* FUNC_0 (struct backlight_device*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_5)
{
 struct ideapad_private *VAR_6 = FUNC_0(VAR_5);

 if (!VAR_6)
  return -VAR_0;

 if (FUNC_1(VAR_6->adev->handle, VAR_3,
    VAR_5->props.brightness))
  return -VAR_1;
 if (FUNC_1(VAR_6->adev->handle, VAR_4,
    VAR_5->props.power == VAR_2 ? 0 : 1))
  return -VAR_1;

 return 0;
}
