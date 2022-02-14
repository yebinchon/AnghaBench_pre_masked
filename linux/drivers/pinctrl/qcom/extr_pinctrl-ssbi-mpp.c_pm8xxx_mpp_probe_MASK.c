
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct pm8xxx_pin_data {scalar_t__ irq; int reg; } ;
struct TYPE_14__ {int base; int of_gpio_n_cells; int ngpio; int label; int of_node; TYPE_6__* parent; } ;
struct TYPE_13__ {int npins; int custom_conf_items; int custom_params; int num_custom_params; struct pinctrl_pin_desc* pins; } ;
struct pm8xxx_mpp {int npins; TYPE_2__ chip; TYPE_6__* dev; int pctrl; TYPE_1__ desc; int regmap; } ;
struct TYPE_15__ {int of_node; int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct pinctrl_pin_desc {int number; struct pm8xxx_pin_data* drv_data; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*,char*) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_6__*) ;
 void* FUNC_8 (TYPE_6__*,int,int,int ) ;
 struct pm8xxx_mpp* FUNC_9 (TYPE_6__*,int,int ) ;
 int FUNC_10 (TYPE_6__*,TYPE_1__*,struct pm8xxx_mpp*) ;
 int FUNC_11 (TYPE_2__*,struct pm8xxx_mpp*) ;
 int FUNC_12 (TYPE_2__*,int ,int ,int ,int) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (struct platform_device*,int) ;
 int FUNC_15 (struct platform_device*) ;
 int FUNC_16 (struct platform_device*,struct pm8xxx_mpp*) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_17 (struct pm8xxx_mpp*,struct pm8xxx_pin_data*) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 struct pm8xxx_pin_data *VAR_10;
 struct pinctrl_pin_desc *VAR_11;
 struct pm8xxx_mpp *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_9(&VAR_9->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = &VAR_9->dev;
 VAR_15 = FUNC_15(VAR_9);
 if (!VAR_15)
  return -VAR_0;
 if (VAR_15 < 0)
  return VAR_15;
 VAR_12->npins = VAR_15;

 VAR_12->regmap = FUNC_6(VAR_9->dev.parent, ((void*)0));
 if (!VAR_12->regmap) {
  FUNC_5(&VAR_9->dev, "parent regmap unavailable\n");
  return -VAR_2;
 }

 VAR_12->desc = VAR_8;
 VAR_12->desc.npins = VAR_12->npins;

 VAR_11 = FUNC_8(&VAR_9->dev,
       VAR_12->desc.npins,
       sizeof(struct pinctrl_pin_desc),
       VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = FUNC_8(&VAR_9->dev,
    VAR_12->desc.npins,
    sizeof(struct pm8xxx_pin_data),
    VAR_3);
 if (!VAR_10)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_12->desc.npins; VAR_14++) {
  VAR_10[VAR_14].reg = FUNC_3(VAR_14);
  VAR_10[VAR_14].irq = FUNC_14(VAR_9, VAR_14);
  if (VAR_10[VAR_14].irq < 0)
   return VAR_10[VAR_14].irq;

  VAR_13 = FUNC_17(VAR_12, &VAR_10[VAR_14]);
  if (VAR_13)
   return VAR_13;

  VAR_11[VAR_14].number = VAR_14;
  VAR_11[VAR_14].name = VAR_5[VAR_14];
  VAR_11[VAR_14].drv_data = &VAR_10[VAR_14];
 }
 VAR_12->desc.pins = VAR_11;

 VAR_12->desc.num_custom_params = FUNC_0(VAR_6);
 VAR_12->desc.custom_params = VAR_6;




 VAR_12->pctrl = FUNC_10(&VAR_9->dev, &VAR_12->desc, VAR_12);
 if (FUNC_1(VAR_12->pctrl)) {
  FUNC_5(&VAR_9->dev, "couldn't register pm8xxx mpp driver\n");
  return FUNC_2(VAR_12->pctrl);
 }

 VAR_12->chip = VAR_7;
 VAR_12->chip.base = -1;
 VAR_12->chip.parent = &VAR_9->dev;
 VAR_12->chip.of_node = VAR_9->dev.of_node;
 VAR_12->chip.of_gpio_n_cells = 2;
 VAR_12->chip.label = FUNC_7(VAR_12->dev);
 VAR_12->chip.ngpio = VAR_12->npins;
 VAR_13 = FUNC_11(&VAR_12->chip, VAR_12);
 if (VAR_13) {
  FUNC_5(&VAR_9->dev, "failed register gpiochip\n");
  return VAR_13;
 }

 VAR_13 = FUNC_12(&VAR_12->chip,
         FUNC_7(VAR_12->dev),
         0, 0, VAR_12->chip.ngpio);
 if (VAR_13) {
  FUNC_5(VAR_12->dev, "failed to add pin range\n");
  goto unregister_gpiochip;
 }

 FUNC_16(VAR_9, VAR_12);

 FUNC_4(&VAR_9->dev, "Qualcomm pm8xxx mpp driver probed\n");

 return 0;

unregister_gpiochip:
 FUNC_13(&VAR_12->chip);

 return VAR_13;
}
