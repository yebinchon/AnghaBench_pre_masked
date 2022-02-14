
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_pinctrl_group {unsigned int num_settings; struct mvebu_mpp_ctrl_setting* settings; } ;
struct mvebu_pinctrl {int variant; } ;
struct mvebu_mpp_ctrl_setting {int flags; int variant; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct mvebu_mpp_ctrl_setting *FUNC_0(
 struct mvebu_pinctrl *VAR_2, struct mvebu_pinctrl_group *VAR_3)
{
 unsigned VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3->num_settings; VAR_4++) {
  if (VAR_3->settings[VAR_4].flags &
   (VAR_1 | VAR_0)) {
   if (!VAR_2->variant || (VAR_2->variant &
      VAR_3->settings[VAR_4].variant))
    return &VAR_3->settings[VAR_4];
  }
 }
 return ((void*)0);
}
