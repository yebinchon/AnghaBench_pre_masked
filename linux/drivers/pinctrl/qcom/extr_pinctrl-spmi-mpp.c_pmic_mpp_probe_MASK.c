
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int base; int ngpio; int of_gpio_n_cells; int can_sleep; void* label; struct device* parent; } ;
struct pmic_mpp_state {TYPE_1__ chip; struct device* dev; int ctrl; int map; } ;
struct pmic_mpp_pad {scalar_t__ irq; scalar_t__ base; } ;
struct device {int parent; int of_node; } ;
struct platform_device {struct device dev; } ;
struct pinctrl_pin_desc {int number; int name; struct pmic_mpp_pad* drv_data; } ;
struct pinctrl_desc {int npins; int num_custom_params; int custom_conf_items; int * custom_params; struct pinctrl_pin_desc* pins; void* name; int owner; int * confops; int * pmxops; int * pctlops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,int *) ;
 void* FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,int,int,int ) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,struct pinctrl_desc*,struct pmic_mpp_state*) ;
 int FUNC_10 (TYPE_1__*,struct pmic_mpp_state*) ;
 int FUNC_11 (TYPE_1__*,void*,int ,int ,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_14 (struct platform_device*,int) ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (struct platform_device*,struct pmic_mpp_state*) ;
 int VAR_5 ;
 int * VAR_6 ;
 TYPE_1__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct pmic_mpp_state*,struct pmic_mpp_pad*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct pinctrl_pin_desc *VAR_14;
 struct pinctrl_desc *VAR_15;
 struct pmic_mpp_pad *VAR_16, *VAR_17;
 struct pmic_mpp_state *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 VAR_19 = FUNC_13(VAR_13->of_node, "reg", &VAR_22);
 if (VAR_19 < 0) {
  FUNC_4(VAR_13, "missing base address");
  return VAR_19;
 }

 VAR_20 = FUNC_15(VAR_12);
 if (!VAR_20)
  return -VAR_0;
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_1(VAR_20 > FUNC_0(VAR_8));

 VAR_18 = FUNC_8(VAR_13, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 FUNC_16(VAR_12, VAR_18);

 VAR_18->dev = &VAR_12->dev;
 VAR_18->map = FUNC_5(VAR_13->parent, ((void*)0));

 VAR_14 = FUNC_7(VAR_13, VAR_20, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_17 = FUNC_7(VAR_13, VAR_20, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_15 = FUNC_8(VAR_13, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->pctlops = &VAR_10;
 VAR_15->pmxops = &VAR_11;
 VAR_15->confops = &VAR_9;
 VAR_15->owner = VAR_4;
 VAR_15->name = FUNC_6(VAR_13);
 VAR_15->pins = VAR_14;
 VAR_15->npins = VAR_20;

 VAR_15->num_custom_params = FUNC_0(VAR_6);
 VAR_15->custom_params = VAR_6;




 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++, VAR_14++) {
  VAR_16 = &VAR_17[VAR_21];
  VAR_14->drv_data = VAR_16;
  VAR_14->number = VAR_21;
  VAR_14->name = VAR_8[VAR_21];

  VAR_16->irq = FUNC_14(VAR_12, VAR_21);
  if (VAR_16->irq < 0)
   return VAR_16->irq;

  VAR_16->base = VAR_22 + VAR_21 * VAR_3;

  VAR_19 = FUNC_17(VAR_18, VAR_16);
  if (VAR_19 < 0)
   return VAR_19;
 }

 VAR_18->chip = VAR_7;
 VAR_18->chip.parent = VAR_13;
 VAR_18->chip.base = -1;
 VAR_18->chip.ngpio = VAR_20;
 VAR_18->chip.label = FUNC_6(VAR_13);
 VAR_18->chip.of_gpio_n_cells = 2;
 VAR_18->chip.can_sleep = 0;

 VAR_18->ctrl = FUNC_9(VAR_13, VAR_15, VAR_18);
 if (FUNC_2(VAR_18->ctrl))
  return FUNC_3(VAR_18->ctrl);

 VAR_19 = FUNC_10(&VAR_18->chip, VAR_18);
 if (VAR_19) {
  FUNC_4(VAR_18->dev, "can't add gpio chip\n");
  return VAR_19;
 }

 VAR_19 = FUNC_11(&VAR_18->chip, FUNC_6(VAR_13), 0, 0, VAR_20);
 if (VAR_19) {
  FUNC_4(VAR_13, "failed to add pin range\n");
  goto err_range;
 }

 return 0;

err_range:
 FUNC_12(&VAR_18->chip);
 return VAR_19;
}
