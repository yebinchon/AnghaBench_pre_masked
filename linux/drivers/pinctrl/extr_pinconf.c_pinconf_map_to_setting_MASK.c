
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int group_or_pin; int configs; int num_configs; } ;
struct TYPE_6__ {TYPE_1__ configs; } ;
struct pinctrl_setting {int type; TYPE_2__ data; struct pinctrl_dev* pctldev; } ;
struct TYPE_7__ {int configs; int num_configs; int group_or_pin; } ;
struct TYPE_8__ {TYPE_3__ configs; } ;
struct pinctrl_map {TYPE_4__ data; } ;
struct pinctrl_dev {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct pinctrl_dev*,int ) ;
 int FUNC_2 (struct pinctrl_dev*,int ) ;

int FUNC_3(const struct pinctrl_map *VAR_1,
     struct pinctrl_setting *VAR_2)
{
 struct pinctrl_dev *VAR_3 = VAR_2->pctldev;
 int VAR_4;

 switch (VAR_2->type) {
 case 128:
  VAR_4 = FUNC_1(VAR_3,
     VAR_1->data.configs.group_or_pin);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->dev, "could not map pin config for \"%s\"",
    VAR_1->data.configs.group_or_pin);
   return VAR_4;
  }
  VAR_2->data.configs.group_or_pin = VAR_4;
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_3,
      VAR_1->data.configs.group_or_pin);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->dev, "could not map group config for \"%s\"",
    VAR_1->data.configs.group_or_pin);
   return VAR_4;
  }
  VAR_2->data.configs.group_or_pin = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_2->data.configs.num_configs = VAR_1->data.configs.num_configs;
 VAR_2->data.configs.configs = VAR_1->data.configs.configs;

 return 0;
}
