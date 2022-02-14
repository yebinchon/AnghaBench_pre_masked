
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {TYPE_1__* desc; } ;
struct pinconf_ops {int (* pin_config_set ) (struct pinctrl_dev*,unsigned int,unsigned long*,size_t) ;} ;
struct TYPE_2__ {struct pinconf_ops* confops; } ;


 int VAR_0 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int,unsigned long*,size_t) ;

int FUNC_1(struct pinctrl_dev *VAR_1, unsigned VAR_2,
         unsigned long *VAR_3, size_t VAR_4)
{
 const struct pinconf_ops *VAR_5;

 VAR_5 = VAR_1->desc->confops;
 if (!VAR_5 || !VAR_5->pin_config_set)
  return -VAR_0;

 return VAR_5->pin_config_set(VAR_1, VAR_2, VAR_3, VAR_4);
}
