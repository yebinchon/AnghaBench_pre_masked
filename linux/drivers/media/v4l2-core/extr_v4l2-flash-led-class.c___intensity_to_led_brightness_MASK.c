
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl {scalar_t__ minimum; scalar_t__ step; } ;
typedef int s32 ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;



__attribute__((used)) static enum led_brightness FUNC_0(
     struct v4l2_ctrl *VAR_0, s32 VAR_1)
{
 VAR_1 -= VAR_0->minimum;
 VAR_1 /= (u32) VAR_0->step;







 if (VAR_0->minimum)
  ++VAR_1;

 return VAR_1;
}
