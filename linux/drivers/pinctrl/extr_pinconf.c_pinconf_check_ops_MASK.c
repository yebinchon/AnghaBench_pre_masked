
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct pinconf_ops {int pin_config_group_set; int pin_config_set; } ;
struct TYPE_2__ {struct pinconf_ops* confops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(struct pinctrl_dev *VAR_1)
{
 const struct pinconf_ops *VAR_2 = VAR_1->desc->confops;


 if (!VAR_2->pin_config_set && !VAR_2->pin_config_group_set) {
  FUNC_0(VAR_1->dev,
   "pinconf has to be able to set a pins config\n");
  return -VAR_0;
 }
 return 0;
}
