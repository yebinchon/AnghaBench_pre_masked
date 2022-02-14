
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int group_or_pin; int num_configs; int configs; } ;
struct TYPE_6__ {TYPE_2__ configs; } ;
struct pinctrl_setting {int type; TYPE_3__ data; struct pinctrl_dev* pctldev; } ;
struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct pinconf_ops {int (* pin_config_set ) (struct pinctrl_dev*,int ,int ,int ) ;int (* pin_config_group_set ) (struct pinctrl_dev*,int ,int ,int ) ;} ;
struct TYPE_4__ {struct pinconf_ops* confops; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pinctrl_dev*,int ,int ,int ) ;
 int FUNC_2 (struct pinctrl_dev*,int ,int ,int ) ;

int FUNC_3(const struct pinctrl_setting *VAR_1)
{
 struct pinctrl_dev *VAR_2 = VAR_1->pctldev;
 const struct pinconf_ops *VAR_3 = VAR_2->desc->confops;
 int VAR_4;

 if (!VAR_3) {
  FUNC_0(VAR_2->dev, "missing confops\n");
  return -VAR_0;
 }

 switch (VAR_1->type) {
 case 128:
  if (!VAR_3->pin_config_set) {
   FUNC_0(VAR_2->dev, "missing pin_config_set op\n");
   return -VAR_0;
  }
  VAR_4 = VAR_3->pin_config_set(VAR_2,
    VAR_1->data.configs.group_or_pin,
    VAR_1->data.configs.configs,
    VAR_1->data.configs.num_configs);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2->dev,
    "pin_config_set op failed for pin %d\n",
    VAR_1->data.configs.group_or_pin);
   return VAR_4;
  }
  break;
 case 129:
  if (!VAR_3->pin_config_group_set) {
   FUNC_0(VAR_2->dev,
    "missing pin_config_group_set op\n");
   return -VAR_0;
  }
  VAR_4 = VAR_3->pin_config_group_set(VAR_2,
    VAR_1->data.configs.group_or_pin,
    VAR_1->data.configs.configs,
    VAR_1->data.configs.num_configs);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2->dev,
    "pin_config_group_set op failed for group %d\n",
    VAR_1->data.configs.group_or_pin);
   return VAR_4;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
