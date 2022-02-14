
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct mvebu_pinctrl_group {int gid; } ;
struct mvebu_pinctrl_function {int name; int * groups; } ;
struct mvebu_pinctrl {int dev; struct mvebu_pinctrl_group* groups; struct mvebu_pinctrl_function* functions; } ;
struct mvebu_mpp_ctrl_setting {unsigned long val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct pinctrl_dev*,int ,unsigned long*,int) ;
 struct mvebu_mpp_ctrl_setting* FUNC_2 (struct mvebu_pinctrl*,struct mvebu_pinctrl_group*,int ) ;
 struct mvebu_pinctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1, unsigned VAR_2,
       unsigned VAR_3)
{
 struct mvebu_pinctrl *VAR_4 = FUNC_3(VAR_1);
 struct mvebu_pinctrl_function *VAR_5 = &VAR_4->functions[VAR_2];
 struct mvebu_pinctrl_group *VAR_6 = &VAR_4->groups[VAR_3];
 struct mvebu_mpp_ctrl_setting *VAR_7;
 int VAR_8;
 unsigned long VAR_9;

 VAR_7 = FUNC_2(VAR_4, VAR_6,
           VAR_5->name);
 if (!VAR_7) {
  FUNC_0(VAR_4->dev,
   "unable to find setting %s in group %s\n",
   VAR_5->name, VAR_5->groups[VAR_3]);
  return -VAR_0;
 }

 VAR_9 = VAR_7->val;
 VAR_8 = FUNC_1(VAR_1, VAR_6->gid, &VAR_9, 1);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "cannot set group %s to %s\n",
   VAR_5->groups[VAR_3], VAR_5->name);
  return VAR_8;
 }

 return 0;
}
