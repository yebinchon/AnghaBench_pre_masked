
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ideapad_private {TYPE_1__* adev; struct backlight_device* blightdev; } ;
struct TYPE_4__ {int power; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct ideapad_private *VAR_3)
{
 unsigned long VAR_4;
 struct backlight_device *VAR_5 = VAR_3->blightdev;

 if (!VAR_5)
  return;
 if (FUNC_0(VAR_3->adev->handle, VAR_2, &VAR_4))
  return;
 VAR_5->props.power = VAR_4 ? VAR_1 : VAR_0;
}
