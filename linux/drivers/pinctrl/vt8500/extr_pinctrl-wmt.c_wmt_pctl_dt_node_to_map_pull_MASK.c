
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wmt_pinctrl_data {int * groups; int dev; } ;
struct TYPE_3__ {unsigned long* configs; int num_configs; int group_or_pin; } ;
struct TYPE_4__ {TYPE_1__ configs; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned long* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wmt_pinctrl_data*,int) ;

__attribute__((used)) static int FUNC_3(struct wmt_pinctrl_data *VAR_7,
     struct device_node *VAR_8,
     u32 VAR_9, u32 VAR_10,
     struct pinctrl_map **VAR_11)
{
 int VAR_12;
 unsigned long *VAR_13;
 struct pinctrl_map *VAR_14 = *VAR_11;

 if (VAR_10 > 2) {
  FUNC_0(VAR_7->dev, "invalid wm,pull %d\n", VAR_10);
  return -VAR_0;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_9);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7->dev, "unable to match pin %d to group\n", VAR_9);
  return VAR_12;
 }

 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 switch (VAR_10) {
 case 0:
  VAR_13[0] = VAR_3;
  break;
 case 1:
  VAR_13[0] = VAR_4;
  break;
 case 2:
  VAR_13[0] = VAR_5;
  break;
 default:
  VAR_13[0] = VAR_3;
  FUNC_0(VAR_7->dev, "invalid pull state %d - disabling\n", VAR_10);
 }

 VAR_14->type = VAR_6;
 VAR_14->data.configs.group_or_pin = VAR_7->groups[VAR_12];
 VAR_14->data.configs.configs = VAR_13;
 VAR_14->data.configs.num_configs = 1;
 (*VAR_11)++;

 return 0;
}
