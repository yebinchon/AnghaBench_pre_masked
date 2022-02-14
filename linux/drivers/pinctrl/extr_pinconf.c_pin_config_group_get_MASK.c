
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int mutex; int dev; TYPE_1__* desc; } ;
struct pinconf_ops {int (* pin_config_group_get ) (struct pinctrl_dev*,int,unsigned long*) ;} ;
struct TYPE_2__ {struct pinconf_ops* confops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct pinctrl_dev* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pinctrl_dev*,char const*) ;
 int FUNC_5 (struct pinctrl_dev*,int,unsigned long*) ;

int FUNC_6(const char *VAR_2, const char *VAR_3,
    unsigned long *VAR_4)
{
 struct pinctrl_dev *VAR_5;
 const struct pinconf_ops *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  return VAR_8;
 }

 FUNC_2(&VAR_5->mutex);

 VAR_6 = VAR_5->desc->confops;

 if (!VAR_6 || !VAR_6->pin_config_group_get) {
  FUNC_0(VAR_5->dev,
   "cannot get configuration for pin group, missing group config get function in driver\n");
  VAR_8 = -VAR_1;
  goto unlock;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_3);
 if (VAR_7 < 0) {
  VAR_8 = VAR_7;
  goto unlock;
 }

 VAR_8 = VAR_6->pin_config_group_get(VAR_5, VAR_7, VAR_4);

unlock:
 FUNC_3(&VAR_5->mutex);
 return VAR_8;
}
