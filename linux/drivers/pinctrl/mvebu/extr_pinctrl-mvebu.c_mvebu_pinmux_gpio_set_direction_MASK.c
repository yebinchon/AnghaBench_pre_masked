
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mvebu_pinctrl_group {int data; TYPE_1__* ctrl; } ;
struct mvebu_pinctrl {int dummy; } ;
struct mvebu_mpp_ctrl_setting {int flags; } ;
struct TYPE_2__ {int (* mpp_gpio_dir ) (int ,unsigned int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mvebu_mpp_ctrl_setting* FUNC_0 (struct mvebu_pinctrl*,struct mvebu_pinctrl_group*) ;
 struct mvebu_pinctrl_group* FUNC_1 (struct mvebu_pinctrl*,unsigned int) ;
 struct mvebu_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_4,
    struct pinctrl_gpio_range *VAR_5, unsigned VAR_6, bool VAR_7)
{
 struct mvebu_pinctrl *VAR_8 = FUNC_2(VAR_4);
 struct mvebu_pinctrl_group *VAR_9;
 struct mvebu_mpp_ctrl_setting *VAR_10;

 VAR_9 = FUNC_1(VAR_8, VAR_6);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_9->ctrl->mpp_gpio_dir)
  return VAR_9->ctrl->mpp_gpio_dir(VAR_9->data, VAR_6, VAR_7);

 VAR_10 = FUNC_0(VAR_8, VAR_9);
 if (!VAR_10)
  return -VAR_1;

 if ((VAR_7 && (VAR_10->flags & VAR_2)) ||
     (!VAR_7 && (VAR_10->flags & VAR_3)))
  return 0;

 return -VAR_1;
}
