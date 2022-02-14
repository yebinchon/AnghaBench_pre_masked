
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct TYPE_17__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct abx500_pinrange {int npins; scalar_t__ offset; } ;
struct TYPE_18__ {int base; int ngpio; TYPE_1__* parent; } ;
struct abx500_pinctrl {TYPE_2__ chip; TYPE_13__* soc; int pctldev; int irq_cluster_size; int irq_cluster; int parent; TYPE_1__* dev; } ;
struct TYPE_19__ {int npins; int pins; } ;
struct TYPE_16__ {int gpio_num_ranges; struct abx500_pinrange* gpio_ranges; int npins; int pins; int ngpio_irq_cluster; int gpio_irq_cluster; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_13__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_13__**) ;
 int FUNC_4 (TYPE_13__**) ;
 TYPE_6__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 struct abx500_pinctrl* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_6__*,struct abx500_pinctrl*) ;
 int FUNC_11 (TYPE_2__*,struct abx500_pinctrl*) ;
 int FUNC_12 (TYPE_2__*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 struct of_device_id* FUNC_14 (int ,TYPE_1__*) ;
 int FUNC_15 (struct platform_device*,struct abx500_pinctrl*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 const struct of_device_id *VAR_9;
 struct abx500_pinctrl *VAR_10;
 unsigned int VAR_11 = -1;
 int VAR_12;
 int VAR_13;

 if (!VAR_8) {
  FUNC_5(&VAR_7->dev, "gpio dt node missing\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_9(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->dev = &VAR_7->dev;
 VAR_10->parent = FUNC_6(VAR_7->dev.parent);
 VAR_10->chip = VAR_6;
 VAR_10->chip.parent = &VAR_7->dev;
 VAR_10->chip.base = -1;

 VAR_9 = FUNC_14(VAR_4, &VAR_7->dev);
 if (!VAR_9) {
  FUNC_5(&VAR_7->dev, "gpio dt not matching\n");
  return -VAR_1;
 }
 VAR_11 = (unsigned long)VAR_9->data;


 switch (VAR_11) {
 case 129:
  FUNC_3(&VAR_10->soc);
  break;
 case 128:
  FUNC_4(&VAR_10->soc);
  break;
 default:
  FUNC_5(&VAR_7->dev, "Unsupported pinctrl sub driver (%d)\n", VAR_11);
  return -VAR_0;
 }

 if (!VAR_10->soc) {
  FUNC_5(&VAR_7->dev, "Invalid SOC data\n");
  return -VAR_0;
 }

 VAR_10->chip.ngpio = FUNC_2(VAR_10->soc);
 VAR_10->irq_cluster = VAR_10->soc->gpio_irq_cluster;
 VAR_10->irq_cluster_size = VAR_10->soc->ngpio_irq_cluster;

 VAR_12 = FUNC_11(&VAR_10->chip, VAR_10);
 if (VAR_12) {
  FUNC_5(&VAR_7->dev, "unable to add gpiochip: %d\n", VAR_12);
  return VAR_12;
 }
 FUNC_7(&VAR_7->dev, "added gpiochip\n");

 VAR_5.pins = VAR_10->soc->pins;
 VAR_5.npins = VAR_10->soc->npins;
 VAR_10->pctldev = FUNC_10(&VAR_7->dev, &VAR_5,
          VAR_10);
 if (FUNC_0(VAR_10->pctldev)) {
  FUNC_5(&VAR_7->dev,
   "could not register abx500 pinctrl driver\n");
  VAR_12 = FUNC_1(VAR_10->pctldev);
  goto out_rem_chip;
 }
 FUNC_7(&VAR_7->dev, "registered pin controller\n");


 for (VAR_13 = 0; VAR_13 < VAR_10->soc->gpio_num_ranges; VAR_13++) {
  const struct abx500_pinrange *VAR_14 = &VAR_10->soc->gpio_ranges[VAR_13];

  VAR_12 = FUNC_12(&VAR_10->chip,
     FUNC_8(&VAR_7->dev),
     VAR_14->offset - 1, VAR_14->offset, VAR_14->npins);
  if (VAR_12 < 0)
   goto out_rem_chip;
 }

 FUNC_15(VAR_7, VAR_10);
 FUNC_7(&VAR_7->dev, "initialized abx500 pinctrl driver\n");

 return 0;

out_rem_chip:
 FUNC_13(&VAR_10->chip);
 return VAR_12;
}
