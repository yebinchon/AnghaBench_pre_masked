
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct mvebu_pinctrl_group {int * pins; int data; TYPE_1__* ctrl; } ;
struct mvebu_pinctrl {struct mvebu_pinctrl_group* groups; } ;
struct TYPE_2__ {int (* mpp_set ) (int ,int ,unsigned long) ;} ;


 int VAR_0 ;
 struct mvebu_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
    unsigned VAR_2, unsigned long *VAR_3,
    unsigned VAR_4)
{
 struct mvebu_pinctrl *VAR_5 = FUNC_0(VAR_1);
 struct mvebu_pinctrl_group *VAR_6 = &VAR_5->groups[VAR_2];
 int VAR_7, VAR_8;

 if (!VAR_6->ctrl)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_8 = VAR_6->ctrl->mpp_set(VAR_6->data, VAR_6->pins[0], VAR_3[VAR_7]);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
