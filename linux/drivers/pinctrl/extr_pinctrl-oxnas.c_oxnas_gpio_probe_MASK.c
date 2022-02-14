
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_7__ {unsigned int ngpio; struct device_node* of_node; TYPE_5__* parent; } ;
struct oxnas_gpio_bank {unsigned int id; int irq_chip; TYPE_1__ gpio_chip; int reg_base; } ;
struct of_phandle_args {unsigned int* args; } ;
struct device_node {int dummy; } ;


 unsigned int FUNC_0 (struct oxnas_gpio_bank*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,char*,...) ;
 int FUNC_4 (TYPE_5__*,struct resource*) ;
 int FUNC_5 (TYPE_1__*,struct oxnas_gpio_bank*) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 struct oxnas_gpio_bank* VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct of_phandle_args VAR_9;
 struct oxnas_gpio_bank *VAR_10;
 unsigned int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 struct resource *VAR_15;

 if (FUNC_9(VAR_8, "gpio-ranges",
          3, 0, &VAR_9)) {
  FUNC_3(&VAR_7->dev, "gpio-ranges property not found\n");
  return -VAR_0;
 }

 VAR_11 = VAR_9.args[1] / VAR_3;
 VAR_12 = VAR_9.args[2];

 if (VAR_11 >= FUNC_0(VAR_5)) {
  FUNC_3(&VAR_7->dev, "invalid gpio-ranges base arg\n");
  return -VAR_0;
 }

 if (VAR_12 > VAR_3) {
  FUNC_3(&VAR_7->dev, "invalid gpio-ranges count arg\n");
  return -VAR_0;
 }

 VAR_10 = &VAR_5[VAR_11];

 VAR_15 = FUNC_11(VAR_7, VAR_1, 0);
 VAR_10->reg_base = FUNC_4(&VAR_7->dev, VAR_15);
 if (FUNC_1(VAR_10->reg_base))
  return FUNC_2(VAR_10->reg_base);

 VAR_13 = FUNC_10(VAR_7, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_10->id = VAR_11;
 VAR_10->gpio_chip.parent = &VAR_7->dev;
 VAR_10->gpio_chip.of_node = VAR_8;
 VAR_10->gpio_chip.ngpio = VAR_12;
 VAR_14 = FUNC_5(&VAR_10->gpio_chip, VAR_10);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to add GPIO chip %u: %d\n",
   VAR_11, VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_6(&VAR_10->gpio_chip, &VAR_10->irq_chip,
    0, VAR_4, VAR_2);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to add IRQ chip %u: %d\n",
   VAR_11, VAR_14);
  FUNC_7(&VAR_10->gpio_chip);
  return VAR_14;
 }

 FUNC_8(&VAR_10->gpio_chip, &VAR_10->irq_chip,
         VAR_13, VAR_6);

 return 0;
}
