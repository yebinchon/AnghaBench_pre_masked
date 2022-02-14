
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_pinctrl_socdata {scalar_t__ npins; scalar_t__ pins; int functions_count; int functions; int groups_count; int groups; } ;
struct TYPE_4__ {int owner; int * confops; int * pmxops; int * pctlops; scalar_t__ npins; scalar_t__ pins; int name; } ;
struct uniphier_pinctrl_priv {int pctldev; TYPE_2__ pctldesc; struct uniphier_pinctrl_socdata const* socdata; int regmap; } ;
struct device {TYPE_1__* driver; int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int owner; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct uniphier_pinctrl_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_2__*,struct uniphier_pinctrl_priv*) ;
 struct device_node* FUNC_5 (int ) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct platform_device*,struct uniphier_pinctrl_priv*) ;
 int FUNC_8 (struct device_node*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct device*,struct uniphier_pinctrl_priv*) ;
 int VAR_5 ;

int FUNC_10(struct platform_device *VAR_6,
      const struct uniphier_pinctrl_socdata *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct uniphier_pinctrl_priv *VAR_9;
 struct device_node *VAR_10;
 int VAR_11;

 if (!VAR_7 ||
     !VAR_7->pins || !VAR_7->npins ||
     !VAR_7->groups || !VAR_7->groups_count ||
     !VAR_7->functions || !VAR_7->functions_count) {
  FUNC_2(VAR_8, "pinctrl socdata lacks necessary members\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_5(VAR_8->of_node);
 VAR_9->regmap = FUNC_8(VAR_10);
 FUNC_6(VAR_10);

 if (FUNC_0(VAR_9->regmap)) {
  FUNC_2(VAR_8, "failed to get regmap\n");
  return FUNC_1(VAR_9->regmap);
 }

 VAR_9->socdata = VAR_7;
 VAR_9->pctldesc.name = VAR_8->driver->name;
 VAR_9->pctldesc.pins = VAR_7->pins;
 VAR_9->pctldesc.npins = VAR_7->npins;
 VAR_9->pctldesc.pctlops = &VAR_4;
 VAR_9->pctldesc.pmxops = &VAR_5;
 VAR_9->pctldesc.confops = &VAR_3;
 VAR_9->pctldesc.owner = VAR_8->driver->owner;

 VAR_11 = FUNC_9(VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_9->pctldev = FUNC_4(VAR_8, &VAR_9->pctldesc, VAR_9);
 if (FUNC_0(VAR_9->pctldev)) {
  FUNC_2(VAR_8, "failed to register UniPhier pinctrl driver\n");
  return FUNC_1(VAR_9->pctldev);
 }

 FUNC_7(VAR_6, VAR_9);

 return 0;
}
