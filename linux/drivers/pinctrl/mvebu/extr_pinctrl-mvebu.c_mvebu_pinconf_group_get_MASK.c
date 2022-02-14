
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct mvebu_pinctrl_group {int * pins; int data; TYPE_1__* ctrl; } ;
struct mvebu_pinctrl {struct mvebu_pinctrl_group* groups; } ;
struct TYPE_2__ {int (* mpp_get ) (int ,int ,unsigned long*) ;} ;


 int VAR_0 ;
 struct mvebu_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int ,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
    unsigned VAR_2, unsigned long *VAR_3)
{
 struct mvebu_pinctrl *VAR_4 = FUNC_0(VAR_1);
 struct mvebu_pinctrl_group *VAR_5 = &VAR_4->groups[VAR_2];

 if (!VAR_5->ctrl)
  return -VAR_0;

 return VAR_5->ctrl->mpp_get(VAR_5->data, VAR_5->pins[0], VAR_3);
}
