
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u32 ;
struct resource {int dummy; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_8__ {struct device_node* of_node; TYPE_5__* parent; } ;
struct pic32_gpio_bank {int irq_chip; TYPE_1__ gpio_chip; int clk; int reg_base; } ;
struct device_node {int dummy; } ;


 size_t FUNC_0 (struct pic32_gpio_bank*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,char*,...) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*,struct resource*) ;
 int FUNC_7 (TYPE_1__*,struct pic32_gpio_bank*) ;
 int FUNC_8 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (struct device_node*,char*,size_t*) ;
 struct pic32_gpio_bank* VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct pic32_gpio_bank *VAR_8;
 u32 VAR_9;
 int VAR_10, VAR_11;
 struct resource *VAR_12;

 if (FUNC_11(VAR_7, "microchip,gpio-bank", &VAR_9)) {
  FUNC_4(&VAR_6->dev, "microchip,gpio-bank property not found\n");
  return -VAR_0;
 }

 if (VAR_9 >= FUNC_0(VAR_4)) {
  FUNC_4(&VAR_6->dev, "invalid microchip,gpio-bank property\n");
  return -VAR_0;
 }

 VAR_8 = &VAR_4[VAR_9];

 VAR_12 = FUNC_13(VAR_6, VAR_1, 0);
 VAR_8->reg_base = FUNC_6(&VAR_6->dev, VAR_12);
 if (FUNC_1(VAR_8->reg_base))
  return FUNC_2(VAR_8->reg_base);

 VAR_10 = FUNC_12(VAR_6, 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8->clk = FUNC_5(&VAR_6->dev, ((void*)0));
 if (FUNC_1(VAR_8->clk)) {
  VAR_11 = FUNC_2(VAR_8->clk);
  FUNC_4(&VAR_6->dev, "clk get failed\n");
  return VAR_11;
 }

 VAR_11 = FUNC_3(VAR_8->clk);
 if (VAR_11) {
  FUNC_4(&VAR_6->dev, "clk enable failed\n");
  return VAR_11;
 }

 VAR_8->gpio_chip.parent = &VAR_6->dev;
 VAR_8->gpio_chip.of_node = VAR_7;
 VAR_11 = FUNC_7(&VAR_8->gpio_chip, VAR_8);
 if (VAR_11 < 0) {
  FUNC_4(&VAR_6->dev, "Failed to add GPIO chip %u: %d\n",
   VAR_9, VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_8(&VAR_8->gpio_chip, &VAR_8->irq_chip,
    0, VAR_3, VAR_2);
 if (VAR_11 < 0) {
  FUNC_4(&VAR_6->dev, "Failed to add IRQ chip %u: %d\n",
   VAR_9, VAR_11);
  FUNC_9(&VAR_8->gpio_chip);
  return VAR_11;
 }

 FUNC_10(&VAR_8->gpio_chip, &VAR_8->irq_chip,
         VAR_10, VAR_5);

 return 0;
}
