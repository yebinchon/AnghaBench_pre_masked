
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_ops {int get_group_name; int get_groups_count; } ;
struct pinctrl_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {struct pinctrl_ops* pctlops; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pinctrl_dev *VAR_1)
{
 const struct pinctrl_ops *VAR_2 = VAR_1->desc->pctlops;

 if (!VAR_2 ||
     !VAR_2->get_groups_count ||
     !VAR_2->get_group_name)
  return -VAR_0;

 return 0;
}
