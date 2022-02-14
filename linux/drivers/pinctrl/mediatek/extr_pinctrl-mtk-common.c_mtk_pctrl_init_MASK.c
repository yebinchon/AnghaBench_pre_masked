
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct property {int dummy; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct pinctrl_pin_desc {int dummy; } ;
struct mtk_pinctrl_devdata {int npins; TYPE_1__* pins; } ;
struct TYPE_15__ {int npins; int * pmxops; int * pctlops; int * confops; struct pinctrl_pin_desc* pins; int owner; void* name; } ;
struct mtk_pinctrl {TYPE_2__* chip; struct mtk_pinctrl_devdata const* devdata; struct regmap* pctl_dev; TYPE_7__ pctl_desc; TYPE_6__* dev; struct regmap* regmap2; struct regmap* regmap1; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {int ngpio; int base; TYPE_6__* parent; void* label; } ;
struct TYPE_12__ {struct pinctrl_pin_desc pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_6__*,char*,...) ;
 void* FUNC_3 (TYPE_6__*) ;
 struct pinctrl_pin_desc* FUNC_4 (TYPE_6__*,int,int,int ) ;
 void* FUNC_5 (TYPE_6__*,int,int ) ;
 struct regmap* FUNC_6 (TYPE_6__*,TYPE_7__*,struct mtk_pinctrl*) ;
 int FUNC_7 (TYPE_2__*,struct mtk_pinctrl*) ;
 int FUNC_8 (TYPE_2__*,void*,int ,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct mtk_pinctrl*,struct platform_device*) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct platform_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct property* FUNC_12 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_13 (struct device_node*,char*,int) ;
 int FUNC_14 (struct platform_device*,struct mtk_pinctrl*) ;
 void* FUNC_15 (struct device_node*) ;

int FUNC_16(struct platform_device *VAR_8,
  const struct mtk_pinctrl_devdata *VAR_9,
  struct regmap *VAR_10)
{
 struct pinctrl_pin_desc *VAR_11;
 struct mtk_pinctrl *VAR_12;
 struct device_node *VAR_13 = VAR_8->dev.of_node, *VAR_14;
 struct property *VAR_15;
 int VAR_16, VAR_17;

 VAR_12 = FUNC_5(&VAR_8->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_14(VAR_8, VAR_12);

 VAR_15 = FUNC_12(VAR_13, "pins-are-numbered", ((void*)0));
 if (!VAR_15) {
  FUNC_2(&VAR_8->dev, "only support pins-are-numbered format\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_13(VAR_13, "mediatek,pctl-regmap", 0);
 if (VAR_14) {
  VAR_12->regmap1 = FUNC_15(VAR_14);
  if (FUNC_0(VAR_12->regmap1))
   return FUNC_1(VAR_12->regmap1);
 } else if (VAR_10) {
  VAR_12->regmap1 = VAR_10;
 } else {
  FUNC_2(&VAR_8->dev, "Pinctrl node has not register regmap.\n");
  return -VAR_0;
 }


 VAR_14 = FUNC_13(VAR_13, "mediatek,pctl-regmap", 1);
 if (VAR_14) {
  VAR_12->regmap2 = FUNC_15(VAR_14);
  if (FUNC_0(VAR_12->regmap2))
   return FUNC_1(VAR_12->regmap2);
 }

 VAR_12->devdata = VAR_9;
 VAR_16 = FUNC_11(VAR_8);
 if (VAR_16) {
  FUNC_2(&VAR_8->dev, "build state failed: %d\n", VAR_16);
  return -VAR_0;
 }

 VAR_11 = FUNC_4(&VAR_8->dev, VAR_12->devdata->npins, sizeof(*VAR_11),
       VAR_2);
 if (!VAR_11)
  return -VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_12->devdata->npins; VAR_17++)
  VAR_11[VAR_17] = VAR_12->devdata->pins[VAR_17].pin;

 VAR_12->pctl_desc.name = FUNC_3(&VAR_8->dev);
 VAR_12->pctl_desc.owner = VAR_3;
 VAR_12->pctl_desc.pins = VAR_11;
 VAR_12->pctl_desc.npins = VAR_12->devdata->npins;
 VAR_12->pctl_desc.confops = &VAR_5;
 VAR_12->pctl_desc.pctlops = &VAR_6;
 VAR_12->pctl_desc.pmxops = &VAR_7;
 VAR_12->dev = &VAR_8->dev;

 VAR_12->pctl_dev = FUNC_6(&VAR_8->dev, &VAR_12->pctl_desc,
            VAR_12);
 if (FUNC_0(VAR_12->pctl_dev)) {
  FUNC_2(&VAR_8->dev, "couldn't register pinctrl driver\n");
  return FUNC_1(VAR_12->pctl_dev);
 }

 VAR_12->chip = FUNC_5(&VAR_8->dev, sizeof(*VAR_12->chip), VAR_2);
 if (!VAR_12->chip)
  return -VAR_1;

 *VAR_12->chip = VAR_4;
 VAR_12->chip->ngpio = VAR_12->devdata->npins;
 VAR_12->chip->label = FUNC_3(&VAR_8->dev);
 VAR_12->chip->parent = &VAR_8->dev;
 VAR_12->chip->base = -1;

 VAR_16 = FUNC_7(VAR_12->chip, VAR_12);
 if (VAR_16)
  return -VAR_0;


 VAR_16 = FUNC_8(VAR_12->chip, FUNC_3(&VAR_8->dev),
   0, 0, VAR_12->devdata->npins);
 if (VAR_16) {
  VAR_16 = -VAR_0;
  goto chip_error;
 }

 VAR_16 = FUNC_10(VAR_12, VAR_8);
 if (VAR_16)
  goto chip_error;

 return 0;

chip_error:
 FUNC_9(VAR_12->chip);
 return VAR_16;
}
