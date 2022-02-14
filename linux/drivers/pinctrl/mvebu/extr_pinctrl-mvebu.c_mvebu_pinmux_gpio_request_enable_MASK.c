
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mvebu_pinctrl_group {int gid; int data; TYPE_1__* ctrl; } ;
struct mvebu_pinctrl {int dummy; } ;
struct mvebu_mpp_ctrl_setting {unsigned long val; } ;
struct TYPE_2__ {int (* mpp_gpio_req ) (int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pinctrl_dev*,int ,unsigned long*,int) ;
 struct mvebu_mpp_ctrl_setting* FUNC_1 (struct mvebu_pinctrl*,struct mvebu_pinctrl_group*) ;
 struct mvebu_pinctrl_group* FUNC_2 (struct mvebu_pinctrl*,unsigned int) ;
 struct mvebu_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2,
   struct pinctrl_gpio_range *VAR_3, unsigned VAR_4)
{
 struct mvebu_pinctrl *VAR_5 = FUNC_3(VAR_2);
 struct mvebu_pinctrl_group *VAR_6;
 struct mvebu_mpp_ctrl_setting *VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_6->ctrl->mpp_gpio_req)
  return VAR_6->ctrl->mpp_gpio_req(VAR_6->data, VAR_4);

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = VAR_7->val;

 return FUNC_0(VAR_2, VAR_6->gid, &VAR_8, 1);
}
