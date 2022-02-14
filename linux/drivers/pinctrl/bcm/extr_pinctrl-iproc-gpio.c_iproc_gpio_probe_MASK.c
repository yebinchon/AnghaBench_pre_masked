
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct irq_chip {char* name; void* irq_disable; void* irq_enable; int irq_set_type; void* irq_unmask; void* irq_mask; int irq_ack; } ;
struct gpio_irq_chip {int num_parents; int* parents; int handler; int default_type; int parent_handler; struct irq_chip* chip; } ;
struct gpio_chip {int base; int ngpio; struct gpio_irq_chip irq; int get; int set; int get_direction; int direction_output; int direction_input; int free; int request; int of_node; struct device* parent; int label; } ;
struct iproc_gpio {int io_ctrl_type; int num_banks; struct irq_chip irqchip; int pinmux_is_supported; struct gpio_chip gc; int lock; void* io_ctrl; void* base; struct device* dev; } ;
typedef enum iproc_pinconf_ctrl_type { ____Placeholder_iproc_pinconf_ctrl_type } iproc_pinconf_ctrl_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_9 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 int* FUNC_6 (struct device*,int,int,int ) ;
 struct iproc_gpio* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct gpio_chip*,struct iproc_gpio*) ;
 int FUNC_9 (struct gpio_chip*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int FUNC_10 (struct iproc_gpio*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (struct iproc_gpio*,int) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (int ,char*,int*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int) ;
 int FUNC_17 (struct platform_device*,struct iproc_gpio*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_23)
{
 struct device *VAR_24 = &VAR_23->dev;
 struct resource *VAR_25;
 struct iproc_gpio *VAR_26;
 struct gpio_chip *VAR_27;
 u32 VAR_28, VAR_29 = 0;
 int VAR_30, VAR_31;
 bool VAR_32 = 0;
 enum iproc_pinconf_ctrl_type VAR_33 = VAR_5;


 if (FUNC_12(VAR_24->of_node, "brcm,iproc-nsp-gpio"))
  VAR_29 = FUNC_0(VAR_7);

 else if (FUNC_12(VAR_24->of_node,
      "brcm,iproc-stingray-gpio"))
  VAR_32 = 1;

 VAR_26 = FUNC_7(VAR_24, sizeof(*VAR_26), VAR_2);
 if (!VAR_26)
  return -VAR_1;

 VAR_26->dev = VAR_24;
 FUNC_17(VAR_23, VAR_26);

 VAR_25 = FUNC_16(VAR_23, VAR_6, 0);
 VAR_26->base = FUNC_5(VAR_24, VAR_25);
 if (FUNC_1(VAR_26->base)) {
  FUNC_3(VAR_24, "unable to map I/O memory\n");
  return FUNC_2(VAR_26->base);
 }

 VAR_25 = FUNC_16(VAR_23, VAR_6, 1);
 if (VAR_25) {
  VAR_26->io_ctrl = FUNC_5(VAR_24, VAR_25);
  if (FUNC_1(VAR_26->io_ctrl)) {
   FUNC_3(VAR_24, "unable to map I/O memory\n");
   return FUNC_2(VAR_26->io_ctrl);
  }
  if (FUNC_12(VAR_24->of_node,
         "brcm,cygnus-ccm-gpio"))
   VAR_33 = VAR_4;
  else
   VAR_33 = VAR_3;
 }

 VAR_26->io_ctrl_type = VAR_33;

 if (FUNC_14(VAR_24->of_node, "ngpios", &VAR_28)) {
  FUNC_3(&VAR_23->dev, "missing ngpios DT property\n");
  return -VAR_0;
 }

 FUNC_18(&VAR_26->lock);

 VAR_27 = &VAR_26->gc;
 VAR_27->base = -1;
 VAR_27->ngpio = VAR_28;
 VAR_26->num_banks = (VAR_28 + VAR_9 - 1) / VAR_9;
 VAR_27->label = FUNC_4(VAR_24);
 VAR_27->parent = VAR_24;
 VAR_27->of_node = VAR_24->of_node;
 VAR_27->request = VAR_21;
 VAR_27->free = VAR_13;
 VAR_27->direction_input = VAR_11;
 VAR_27->direction_output = VAR_12;
 VAR_27->get_direction = VAR_15;
 VAR_27->set = VAR_22;
 VAR_27->get = VAR_14;

 VAR_26->pinmux_is_supported = FUNC_13(VAR_24->of_node,
       "gpio-ranges");


 VAR_30 = FUNC_15(VAR_23, 0);
 if (VAR_30 > 0) {
  struct irq_chip *VAR_34;
  struct gpio_irq_chip *VAR_35;

  VAR_34 = &VAR_26->irqchip;
  VAR_34->name = "bcm-iproc-gpio";
  VAR_34->irq_ack = VAR_16;
  VAR_34->irq_mask = VAR_18;
  VAR_34->irq_unmask = VAR_20;
  VAR_34->irq_set_type = VAR_19;
  VAR_34->irq_enable = VAR_20;
  VAR_34->irq_disable = VAR_18;

  VAR_35 = &VAR_27->irq;
  VAR_35->chip = VAR_34;
  VAR_35->parent_handler = VAR_17;
  VAR_35->num_parents = 1;
  VAR_35->parents = FUNC_6(VAR_24, 1,
          sizeof(*VAR_35->parents),
          VAR_2);
  if (!VAR_35->parents)
   return -VAR_1;
  VAR_35->parents[0] = VAR_30;
  VAR_35->default_type = VAR_8;
  VAR_35->handler = VAR_10;
 }

 VAR_31 = FUNC_8(VAR_27, VAR_26);
 if (VAR_31 < 0) {
  FUNC_3(VAR_24, "unable to add GPIO chip\n");
  return VAR_31;
 }

 if (!VAR_32) {
  VAR_31 = FUNC_10(VAR_26);
  if (VAR_31) {
   FUNC_3(VAR_24, "unable to register pinconf\n");
   goto err_rm_gpiochip;
  }

  if (VAR_29) {
   VAR_31 = FUNC_11(VAR_26,
        VAR_29);
   if (VAR_31) {
    FUNC_3(VAR_24,
     "unable to create pinconf disable map\n");
    goto err_rm_gpiochip;
   }
  }
 }

 return 0;

err_rm_gpiochip:
 FUNC_9(VAR_27);

 return VAR_31;
}
