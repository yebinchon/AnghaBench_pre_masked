
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct pinconf_ops {int (* pin_config_get ) (struct pinctrl_dev*,unsigned int,unsigned long*) ;} ;
struct TYPE_2__ {struct pinconf_ops* confops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned long*) ;

int FUNC_2(struct pinctrl_dev *VAR_1, unsigned VAR_2,
      unsigned long *VAR_3)
{
 const struct pinconf_ops *VAR_4 = VAR_1->desc->confops;

 if (!VAR_4 || !VAR_4->pin_config_get) {
  FUNC_0(VAR_1->dev,
   "cannot get pin configuration, .pin_config_get missing in driver\n");
  return -VAR_0;
 }

 return VAR_4->pin_config_get(VAR_1, VAR_2, VAR_3);
}
