
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {scalar_t__ id; int step; scalar_t__ minimum; } ;
typedef scalar_t__ s32 ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static s32 FUNC_0(struct v4l2_ctrl *VAR_1,
      enum led_brightness VAR_2)
{
 if (VAR_1->id != VAR_0)
  --VAR_2;

 return (VAR_2 * VAR_1->step) + VAR_1->minimum;
}
