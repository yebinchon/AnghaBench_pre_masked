
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* configs; int num_configs; int group_or_pin; } ;
struct TYPE_4__ {TYPE_1__ configs; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct pcs_function {int nconfs; struct pcs_conf_vals* conf; } ;
struct pcs_device {int dev; } ;
struct pcs_conf_vals {int dummy; } ;
struct pcs_conf_type {char* member_0; int param; int name; int member_1; } ;
struct device_node {int name; } ;


 int FUNC_0 (struct pcs_conf_type const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 void* FUNC_1 (int ,int,int,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,int ,int *) ;
 int FUNC_3 (struct pcs_device*,struct device_node*,int ,int ,struct pcs_conf_vals**,unsigned long**) ;
 int FUNC_4 (struct pcs_device*,struct device_node*,int ,int ,struct pcs_conf_vals**,unsigned long**) ;

__attribute__((used)) static int FUNC_5(struct pcs_device *VAR_4, struct device_node *VAR_5,
        struct pcs_function *VAR_6,
        struct pinctrl_map **VAR_7)

{
 struct pinctrl_map *VAR_8 = *VAR_7;
 int VAR_9 = 0, VAR_10 = 0;
 unsigned long *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct pcs_conf_vals *VAR_13 = ((void*)0);
 static const struct pcs_conf_type VAR_14[] = {
  { "pinctrl-single,drive-strength", 132, },
  { "pinctrl-single,slew-rate", 128, },
  { "pinctrl-single,input-schmitt", 131, },
  { "pinctrl-single,low-power-mode", 129, },
 };
 static const struct pcs_conf_type VAR_15[] = {
  { "pinctrl-single,bias-pullup", 133, },
  { "pinctrl-single,bias-pulldown", 134, },
  { "pinctrl-single,input-schmitt-enable",
   130, },
 };


 if (!VAR_2)
  return 0;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_14); VAR_9++) {
  if (FUNC_2(VAR_5, VAR_14[VAR_9].name, ((void*)0)))
   VAR_10++;
 }
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_15); VAR_9++) {
  if (FUNC_2(VAR_5, VAR_15[VAR_9].name, ((void*)0)))
   VAR_10++;
 }
 if (!VAR_10)
  return 0;

 VAR_6->conf = FUNC_1(VAR_4->dev,
      VAR_10, sizeof(struct pcs_conf_vals),
      VAR_1);
 if (!VAR_6->conf)
  return -VAR_0;
 VAR_6->nconfs = VAR_10;
 VAR_13 = &(VAR_6->conf[0]);
 VAR_8++;
 VAR_11 = FUNC_1(VAR_4->dev, VAR_10, sizeof(unsigned long),
    VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_12 = &VAR_11[0];

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_14); VAR_9++)
  FUNC_3(VAR_4, VAR_5, VAR_14[VAR_9].name, VAR_14[VAR_9].param,
         &VAR_13, &VAR_12);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_15); VAR_9++)
  FUNC_4(VAR_4, VAR_5, VAR_15[VAR_9].name, VAR_15[VAR_9].param,
         &VAR_13, &VAR_12);
 VAR_8->type = VAR_3;
 VAR_8->data.configs.group_or_pin = VAR_5->name;
 VAR_8->data.configs.configs = VAR_11;
 VAR_8->data.configs.num_configs = VAR_10;
 return 0;
}
