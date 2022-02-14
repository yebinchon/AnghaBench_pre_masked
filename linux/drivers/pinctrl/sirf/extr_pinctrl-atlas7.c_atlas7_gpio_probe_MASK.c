
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct gpio_chip {int base; int ngpio; int of_gpio_n_cells; TYPE_1__* parent; struct device_node* of_node; int label; int set; int direction_output; int get; int direction_input; int free; int request; } ;
struct device_node {int name; } ;
struct atlas7_gpio_chip {int nbank; struct atlas7_gpio_bank* banks; struct gpio_chip chip; int lock; int reg; int clk; } ;
struct atlas7_gpio_bank {int gpio_offset; int irq; int base; } ;


 int FUNC_0 (struct atlas7_gpio_chip*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct atlas7_gpio_chip* FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (struct gpio_chip*,struct atlas7_gpio_chip*) ;
 int FUNC_7 (struct gpio_chip*,int *,int ,int ,int ) ;
 int FUNC_8 (struct gpio_chip*,int *,int,int ) ;
 int VAR_14 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct device_node*,int ) ;
 int FUNC_11 (struct device_node*,int ) ;
 int FUNC_12 (struct device_node*,int) ;
 int FUNC_13 (struct device_node*,char*,int*) ;
 int FUNC_14 (struct platform_device*,struct atlas7_gpio_chip*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct atlas7_gpio_chip*,int ,int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_15)
{
 struct device_node *VAR_16 = VAR_15->dev.of_node;
 struct atlas7_gpio_chip *VAR_17;
 struct gpio_chip *VAR_18;
 u32 VAR_19;
 int VAR_20, VAR_21;

 VAR_20 = FUNC_13(VAR_16, "gpio-banks", &VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_15->dev,
   "Could not find GPIO bank info,ret=%d!\n",
   VAR_20);
  return VAR_20;
 }


 VAR_17 = FUNC_5(&VAR_15->dev, FUNC_16(VAR_17, VAR_13, VAR_19),
       VAR_2);
 if (!VAR_17)
  return -VAR_0;


 VAR_17->clk = FUNC_10(VAR_16, 0);
 if (!FUNC_1(VAR_17->clk)) {
  VAR_20 = FUNC_2(VAR_17->clk);
  if (VAR_20) {
   FUNC_3(&VAR_15->dev,
    "Could not enable clock!\n");
   return VAR_20;
  }
 }


 VAR_17->reg = FUNC_11(VAR_16, 0);
 if (!VAR_17->reg) {
  FUNC_3(&VAR_15->dev, "Could not map GPIO Registers!\n");
  return -VAR_0;
 }

 VAR_17->nbank = VAR_19;
 FUNC_15(&VAR_17->lock);


 VAR_18 = &VAR_17->chip;
 VAR_18->request = VAR_11;
 VAR_18->free = VAR_7;
 VAR_18->direction_input = VAR_5;
 VAR_18->get = VAR_8;
 VAR_18->direction_output = VAR_6;
 VAR_18->set = VAR_12;
 VAR_18->base = -1;

 VAR_18->ngpio = VAR_4 * VAR_19;
 VAR_18->label = FUNC_9(VAR_16->name, VAR_2);
 VAR_18->of_node = VAR_16;
 VAR_18->of_gpio_n_cells = 2;
 VAR_18->parent = &VAR_15->dev;


 VAR_20 = FUNC_6(VAR_18, VAR_17);
 if (VAR_20) {
  FUNC_3(&VAR_15->dev,
   "%pOF: error in probe function with status %d\n",
   VAR_16, VAR_20);
  goto failed;
 }


 VAR_20 = FUNC_7(VAR_18, &VAR_10,
   0, VAR_14, VAR_3);
 if (VAR_20) {
  FUNC_3(&VAR_15->dev,
   "could not connect irqchip to gpiochip\n");
  goto failed;
 }

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
  struct atlas7_gpio_bank *VAR_22;

  VAR_22 = &VAR_17->banks[VAR_21];

  VAR_22->base = FUNC_0(VAR_17, VAR_21);
  VAR_22->gpio_offset = VAR_21 * VAR_4;


  VAR_20 = FUNC_12(VAR_16, VAR_21);
  if (VAR_20 <= 0) {
   FUNC_3(&VAR_15->dev,
    "Unable to find IRQ number. ret=%d\n", VAR_20);
   if (!VAR_20)
    VAR_20 = -VAR_1;
   goto failed;
  }
  VAR_22->irq = VAR_20;

  FUNC_8(VAR_18, &VAR_10,
     VAR_22->irq, VAR_9);
 }

 FUNC_14(VAR_15, VAR_17);
 FUNC_4(&VAR_15->dev, "add to system.\n");
 return 0;
failed:
 return VAR_20;
}
