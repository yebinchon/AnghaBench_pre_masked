
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pinctrl_group {unsigned int num_settings; struct mvebu_mpp_ctrl_setting* settings; } ;
struct mvebu_pinctrl {int variant; } ;
struct mvebu_mpp_ctrl_setting {unsigned long val; int variant; } ;



__attribute__((used)) static struct mvebu_mpp_ctrl_setting *FUNC_0(
 struct mvebu_pinctrl *VAR_0, struct mvebu_pinctrl_group *VAR_1,
 unsigned long VAR_2)
{
 unsigned VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->num_settings; VAR_3++) {
  if (VAR_2 == VAR_1->settings[VAR_3].val) {
   if (!VAR_0->variant || (VAR_0->variant &
            VAR_1->settings[VAR_3].variant))
    return &VAR_1->settings[VAR_3];
  }
 }
 return ((void*)0);
}
