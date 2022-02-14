
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {unsigned long* configs; int num_configs; int group_or_pin; } ;
struct TYPE_5__ {TYPE_1__ configs; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct device_node {int dummy; } ;
struct bcm2835_pinctrl {int dev; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int ,char*,struct device_node*,int) ;
 unsigned long* FUNC_1 (int,int ) ;
 unsigned long FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct bcm2835_pinctrl *VAR_6,
  struct device_node *VAR_7, u32 VAR_8, u32 VAR_9,
  struct pinctrl_map **VAR_10)
{
 struct pinctrl_map *VAR_11 = *VAR_10;
 unsigned long *VAR_12;

 if (VAR_9 > 2) {
  FUNC_0(VAR_6->dev, "%pOF: invalid brcm,pull %d\n", VAR_7, VAR_9);
  return -VAR_1;
 }

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;
 VAR_12[0] = FUNC_2(VAR_0, VAR_9);

 VAR_11->type = VAR_4;
 VAR_11->data.configs.group_or_pin = VAR_5[VAR_8].name;
 VAR_11->data.configs.configs = VAR_12;
 VAR_11->data.configs.num_configs = 1;
 (*VAR_10)++;

 return 0;
}
