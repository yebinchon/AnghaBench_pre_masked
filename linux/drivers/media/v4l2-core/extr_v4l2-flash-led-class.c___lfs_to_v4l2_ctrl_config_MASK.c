
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_config {int def; int step; int max; int min; } ;
struct led_flash_setting {int val; int step; int max; int min; } ;



__attribute__((used)) static void FUNC_0(struct led_flash_setting *VAR_0,
    struct v4l2_ctrl_config *VAR_1)
{
 VAR_1->min = VAR_0->min;
 VAR_1->max = VAR_0->max;
 VAR_1->step = VAR_0->step;
 VAR_1->def = VAR_0->val;
}
