
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct regmap_config {char* name; } ;
struct regmap {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pinctrl_desc {int npins; int num_custom_params; int custom_params; int owner; int * confops; TYPE_2__* pmxops; int * pctlops; scalar_t__ pins; int name; } ;
struct imx_pinctrl_soc_info {int npins; int flags; int gpio_set_direction; int num_custom_params; int custom_params; scalar_t__ pins; scalar_t__ gpr_compatible; } ;
struct imx_pinctrl {int pctl; TYPE_1__* dev; struct imx_pinctrl_soc_info const* info; int mutex; int input_sel_base; struct regmap* base; TYPE_5__* pin_regs; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {int mux_reg; int conf_reg; } ;
struct TYPE_11__ {int gpio_set_direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_5__* FUNC_5 (TYPE_1__*,int,int,int ) ;
 void* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,struct pinctrl_desc*,struct imx_pinctrl*,int *) ;
 struct regmap* FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct imx_pinctrl*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct platform_device*,struct imx_pinctrl*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct device_node*,int ) ;
 int FUNC_13 (struct device_node*) ;
 struct device_node* FUNC_14 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_15 (struct device_node*,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct platform_device*,struct imx_pinctrl*) ;
 int FUNC_18 (TYPE_1__*,struct regmap*,struct regmap_config*) ;
 struct regmap* FUNC_19 (scalar_t__) ;

int FUNC_20(struct platform_device *VAR_8,
        const struct imx_pinctrl_soc_info *VAR_9)
{
 struct regmap_config VAR_10 = { .name = "gpr" };
 struct device_node *VAR_11 = VAR_8->dev.of_node;
 struct pinctrl_desc *VAR_12;
 struct device_node *VAR_13;
 struct imx_pinctrl *VAR_14;
 struct regmap *VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_9 || !VAR_9->pins || !VAR_9->npins) {
  FUNC_2(&VAR_8->dev, "wrong pinctrl info\n");
  return -VAR_0;
 }

 if (VAR_9->gpr_compatible) {
  VAR_15 = FUNC_19(VAR_9->gpr_compatible);
  if (!FUNC_0(VAR_15))
   FUNC_18(&VAR_8->dev, VAR_15, &VAR_10);
 }


 VAR_14 = FUNC_6(&VAR_8->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 if (!(VAR_9->flags & VAR_3)) {
  VAR_14->pin_regs = FUNC_5(&VAR_8->dev, VAR_9->npins,
           sizeof(*VAR_14->pin_regs),
           VAR_2);
  if (!VAR_14->pin_regs)
   return -VAR_1;

  for (VAR_17 = 0; VAR_17 < VAR_9->npins; VAR_17++) {
   VAR_14->pin_regs[VAR_17].mux_reg = -1;
   VAR_14->pin_regs[VAR_17].conf_reg = -1;
  }

  VAR_14->base = FUNC_8(VAR_8, 0);
  if (FUNC_0(VAR_14->base))
   return FUNC_1(VAR_14->base);

  if (FUNC_15(VAR_11, "fsl,input-sel")) {
   VAR_13 = FUNC_14(VAR_11, "fsl,input-sel", 0);
   if (!VAR_13) {
    FUNC_2(&VAR_8->dev, "iomuxc fsl,input-sel property not found\n");
    return -VAR_0;
   }

   VAR_14->input_sel_base = FUNC_12(VAR_13, 0);
   FUNC_13(VAR_13);
   if (!VAR_14->input_sel_base) {
    FUNC_2(&VAR_8->dev,
     "iomuxc input select base address not found\n");
    return -VAR_1;
   }
  }
 }

 VAR_12 = FUNC_6(&VAR_8->dev, sizeof(*VAR_12),
     VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->name = FUNC_4(&VAR_8->dev);
 VAR_12->pins = VAR_9->pins;
 VAR_12->npins = VAR_9->npins;
 VAR_12->pctlops = &VAR_5;
 VAR_12->pmxops = &VAR_7;
 VAR_12->confops = &VAR_6;
 VAR_12->owner = VAR_4;


 VAR_12->custom_params = VAR_9->custom_params;
 VAR_12->num_custom_params = VAR_9->num_custom_params;


 VAR_7.gpio_set_direction = VAR_9->gpio_set_direction;

 FUNC_11(&VAR_14->mutex);

 VAR_14->info = VAR_9;
 VAR_14->dev = &VAR_8->dev;
 FUNC_17(VAR_8, VAR_14);
 VAR_16 = FUNC_7(&VAR_8->dev,
          VAR_12, VAR_14,
          &VAR_14->pctl);
 if (VAR_16) {
  FUNC_2(&VAR_8->dev, "could not register IMX pinctrl driver\n");
  goto free;
 }

 VAR_16 = FUNC_10(VAR_8, VAR_14);
 if (VAR_16) {
  FUNC_2(&VAR_8->dev, "fail to probe dt properties\n");
  goto free;
 }

 FUNC_3(&VAR_8->dev, "initialized IMX pinctrl driver\n");

 return FUNC_16(VAR_14->pctl);

free:
 FUNC_9(VAR_14);

 return VAR_16;
}
