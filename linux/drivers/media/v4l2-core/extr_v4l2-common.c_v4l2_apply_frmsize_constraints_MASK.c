
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_frmsize_stepwise {int step_height; int max_height; int min_height; int step_width; int max_width; int min_width; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(u32 *VAR_0, u32 *VAR_1,
        const struct v4l2_frmsize_stepwise *VAR_2)
{
 if (!VAR_2)
  return;





 *VAR_0 = FUNC_0(*VAR_0, VAR_2->min_width, VAR_2->max_width,
          VAR_2->step_width);
 *VAR_1 = FUNC_0(*VAR_1, VAR_2->min_height, VAR_2->max_height,
    VAR_2->step_height);
}
