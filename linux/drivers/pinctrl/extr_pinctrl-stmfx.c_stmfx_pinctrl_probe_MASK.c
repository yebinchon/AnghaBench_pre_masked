
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int name; int irq_bus_sync_unlock; int irq_bus_lock; int irq_set_type; int irq_unmask; int irq_mask; } ;
struct TYPE_13__ {char* label; int base; int can_sleep; struct device_node* of_node; int ngpio; int set_config; int set; int get; int direction_output; int direction_input; int get_direction; TYPE_5__* parent; } ;
struct TYPE_16__ {char* name; int link_consumers; int npins; int owner; int pins; int * confops; int * pctlops; } ;
struct stmfx_pinctrl {int gpio_valid_mask; TYPE_5__* dev; TYPE_2__ irq_chip; TYPE_1__ gpio_chip; TYPE_7__ pctl_desc; int pctl_dev; int lock; struct stmfx* stmfx; } ;
struct stmfx {int dev; } ;
struct TYPE_15__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 struct stmfx* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,char*,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_1__*,struct stmfx_pinctrl*) ;
 struct stmfx_pinctrl* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_7__*,struct stmfx_pinctrl*,int *) ;
 int FUNC_8 (TYPE_5__*,int,int *,int ,int ,int ,struct stmfx_pinctrl*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct device_node*,char*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct stmfx_pinctrl*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (struct stmfx_pinctrl*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_23)
{
 struct stmfx *VAR_24 = FUNC_2(VAR_23->dev.parent);
 struct device_node *VAR_25 = VAR_23->dev.of_node;
 struct stmfx_pinctrl *VAR_26;
 int VAR_27, VAR_28;

 VAR_26 = FUNC_6(VAR_24->dev, sizeof(*VAR_26), VAR_3);
 if (!VAR_26)
  return -VAR_1;

 FUNC_16(VAR_23, VAR_26);

 VAR_26->dev = &VAR_23->dev;
 VAR_26->stmfx = VAR_24;

 if (!FUNC_13(VAR_25, "gpio-ranges", ((void*)0))) {
  FUNC_1(VAR_26->dev, "missing required gpio-ranges property\n");
  return -VAR_0;
 }

 VAR_27 = FUNC_15(VAR_23, 0);
 if (VAR_27 <= 0)
  return -VAR_2;

 FUNC_12(&VAR_26->lock);


 VAR_26->pctl_desc.name = "stmfx-pinctrl";
 VAR_26->pctl_desc.pctlops = &VAR_21;
 VAR_26->pctl_desc.confops = &VAR_14;
 VAR_26->pctl_desc.pins = VAR_22;
 VAR_26->pctl_desc.npins = FUNC_0(VAR_22);
 VAR_26->pctl_desc.owner = VAR_6;
 VAR_26->pctl_desc.link_consumers = 1;

 VAR_28 = FUNC_7(VAR_26->dev, &VAR_26->pctl_desc,
          VAR_26, &VAR_26->pctl_dev);
 if (VAR_28) {
  FUNC_1(VAR_26->dev, "pinctrl registration failed\n");
  return VAR_28;
 }

 VAR_28 = FUNC_14(VAR_26->pctl_dev);
 if (VAR_28) {
  FUNC_1(VAR_26->dev, "pinctrl enable failed\n");
  return VAR_28;
 }


 VAR_26->gpio_chip.label = "stmfx-gpio";
 VAR_26->gpio_chip.parent = VAR_26->dev;
 VAR_26->gpio_chip.get_direction = VAR_12;
 VAR_26->gpio_chip.direction_input = VAR_9;
 VAR_26->gpio_chip.direction_output = VAR_10;
 VAR_26->gpio_chip.get = VAR_11;
 VAR_26->gpio_chip.set = VAR_13;
 VAR_26->gpio_chip.set_config = VAR_7;
 VAR_26->gpio_chip.base = -1;
 VAR_26->gpio_chip.ngpio = VAR_26->pctl_desc.npins;
 VAR_26->gpio_chip.can_sleep = 1;
 VAR_26->gpio_chip.of_node = VAR_25;

 VAR_28 = FUNC_5(VAR_26->dev, &VAR_26->gpio_chip, VAR_26);
 if (VAR_28) {
  FUNC_1(VAR_26->dev, "gpio_chip registration failed\n");
  return VAR_28;
 }

 VAR_28 = FUNC_17(VAR_26);
 if (VAR_28)
  return VAR_28;

 VAR_26->irq_chip.name = FUNC_4(VAR_26->dev);
 VAR_26->irq_chip.irq_mask = VAR_17;
 VAR_26->irq_chip.irq_unmask = VAR_20;
 VAR_26->irq_chip.irq_set_type = VAR_18;
 VAR_26->irq_chip.irq_bus_lock = VAR_15;
 VAR_26->irq_chip.irq_bus_sync_unlock = VAR_16;

 VAR_28 = FUNC_9(&VAR_26->gpio_chip, &VAR_26->irq_chip,
       0, VAR_8, VAR_5);
 if (VAR_28) {
  FUNC_1(VAR_26->dev, "cannot add irqchip to gpiochip\n");
  return VAR_28;
 }

 VAR_28 = FUNC_8(VAR_26->dev, VAR_27, ((void*)0),
     VAR_19,
     VAR_4,
     VAR_26->irq_chip.name, VAR_26);
 if (VAR_28) {
  FUNC_1(VAR_26->dev, "cannot request irq%d\n", VAR_27);
  return VAR_28;
 }

 FUNC_10(&VAR_26->gpio_chip, &VAR_26->irq_chip, VAR_27);

 FUNC_3(VAR_26->dev,
   "%ld GPIOs available\n", FUNC_11(VAR_26->gpio_valid_mask));

 return 0;
}
