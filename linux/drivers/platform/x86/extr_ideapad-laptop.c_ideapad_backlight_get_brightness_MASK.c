
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ideapad_private {TYPE_1__* adev; } ;
struct backlight_device {int dummy; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ideapad_private* FUNC_0 (struct backlight_device*) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_3)
{
 struct ideapad_private *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 if (!VAR_4)
  return -VAR_0;

 if (FUNC_1(VAR_4->adev->handle, VAR_2, &VAR_5))
  return -VAR_1;
 return VAR_5;
}
