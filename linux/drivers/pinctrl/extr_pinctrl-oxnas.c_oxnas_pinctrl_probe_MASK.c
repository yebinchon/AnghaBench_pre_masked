
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct oxnas_pinctrl_data {int desc; TYPE_1__* pctl; } ;
struct oxnas_pinctrl {int pctldev; int nbanks; int gpio_banks; int ngroups; int groups; int nfunctions; int functions; int regmap; TYPE_2__* dev; } ;
struct of_device_id {struct oxnas_pinctrl_data* data; } ;
struct TYPE_6__ {int nbanks; int gpio_banks; int ngroups; int groups; int nfunctions; int functions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,struct oxnas_pinctrl*) ;
 struct oxnas_pinctrl* FUNC_4 (TYPE_2__*,int,int ) ;
 struct of_device_id* FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,TYPE_2__*,struct oxnas_pinctrl*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 const struct of_device_id *VAR_6;
 const struct oxnas_pinctrl_data *VAR_7;
 struct oxnas_pinctrl *VAR_8;

 VAR_6 = FUNC_5(VAR_4, VAR_5->dev.of_node);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = VAR_6->data;
 if (!VAR_7 || !VAR_7->pctl || !VAR_7->desc)
  return -VAR_0;

 VAR_8 = FUNC_4(&VAR_5->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;
 VAR_8->dev = &VAR_5->dev;
 FUNC_3(&VAR_5->dev, VAR_8);

 VAR_8->regmap = FUNC_7(VAR_5->dev.of_node,
             "oxsemi,sys-ctrl");
 if (FUNC_0(VAR_8->regmap)) {
  FUNC_2(&VAR_5->dev, "failed to get sys ctrl regmap\n");
  return -VAR_1;
 }

 VAR_8->functions = VAR_7->pctl->functions;
 VAR_8->nfunctions = VAR_7->pctl->nfunctions;
 VAR_8->groups = VAR_7->pctl->groups;
 VAR_8->ngroups = VAR_7->pctl->ngroups;
 VAR_8->gpio_banks = VAR_7->pctl->gpio_banks;
 VAR_8->nbanks = VAR_7->pctl->nbanks;

 VAR_8->pctldev = FUNC_6(VAR_7->desc, &VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_8->pctldev)) {
  FUNC_2(&VAR_5->dev, "Failed to register pinctrl device\n");
  return FUNC_1(VAR_8->pctldev);
 }

 return 0;
}
