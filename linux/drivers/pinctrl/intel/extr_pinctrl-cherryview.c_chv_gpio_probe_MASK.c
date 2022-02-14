
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int domain; int init_valid_mask; } ;
struct gpio_chip {int base; TYPE_2__ irq; int parent; int label; scalar_t__ ngpio; } ;
struct TYPE_7__ {char* name; int flags; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; int irq_startup; } ;
struct chv_pinctrl {TYPE_3__ irqchip; int dev; scalar_t__ regs; struct chv_community* community; struct gpio_chip chip; } ;
struct chv_gpio_pinrange {scalar_t__ npins; int base; } ;
struct chv_community {int npins; int ngpio_ranges; struct chv_gpio_pinrange* gpio_ranges; int nirqs; TYPE_1__* pins; } ;
struct TYPE_5__ {scalar_t__ number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gpio_chip VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct gpio_chip*,struct chv_pinctrl*) ;
 int FUNC_5 (int ,int,int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct gpio_chip*,int ,int ,int ,scalar_t__) ;
 int FUNC_8 (struct gpio_chip*,TYPE_3__*,int ,int ,int ) ;
 int FUNC_9 (struct gpio_chip*,TYPE_3__*,int,int ) ;
 int VAR_14 ;
 int FUNC_10 (int ,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct chv_pinctrl *VAR_15, int VAR_16)
{
 const struct chv_gpio_pinrange *VAR_17;
 struct gpio_chip *VAR_18 = &VAR_15->chip;
 bool VAR_19 = !FUNC_6(VAR_13);
 const struct chv_community *VAR_20 = VAR_15->community;
 int VAR_21, VAR_22, VAR_23;

 *VAR_18 = VAR_5;

 VAR_18->ngpio = VAR_20->pins[VAR_20->npins - 1].number + 1;
 VAR_18->label = FUNC_3(VAR_15->dev);
 VAR_18->parent = VAR_15->dev;
 VAR_18->base = -1;
 if (VAR_19)
  VAR_18->irq.init_valid_mask = VAR_12;

 VAR_21 = FUNC_4(VAR_15->dev, VAR_18, VAR_15);
 if (VAR_21) {
  FUNC_2(VAR_15->dev, "Failed to register gpiochip\n");
  return VAR_21;
 }

 for (VAR_22 = 0; VAR_22 < VAR_20->ngpio_ranges; VAR_22++) {
  VAR_17 = &VAR_20->gpio_ranges[VAR_22];
  VAR_21 = FUNC_7(VAR_18, FUNC_3(VAR_15->dev),
          VAR_17->base, VAR_17->base,
          VAR_17->npins);
  if (VAR_21) {
   FUNC_2(VAR_15->dev, "failed to add GPIO pin range\n");
   return VAR_21;
  }
 }
 if (!VAR_19) {




  FUNC_1(FUNC_0(31, VAR_15->community->nirqs),
      VAR_15->regs + VAR_0);
 }


 FUNC_1(0xffff, VAR_15->regs + VAR_1);

 if (!VAR_19) {
  VAR_23 = FUNC_5(VAR_15->dev, -1, 0,
      VAR_20->npins, VAR_4);
  if (VAR_23 < 0) {
   FUNC_2(VAR_15->dev, "Failed to allocate IRQ numbers\n");
   return VAR_23;
  }
 }

 VAR_15->irqchip.name = "chv-gpio";
 VAR_15->irqchip.irq_startup = VAR_9;
 VAR_15->irqchip.irq_ack = VAR_6;
 VAR_15->irqchip.irq_mask = VAR_8;
 VAR_15->irqchip.irq_unmask = VAR_11;
 VAR_15->irqchip.irq_set_type = VAR_10;
 VAR_15->irqchip.flags = VAR_2;

 VAR_21 = FUNC_8(VAR_18, &VAR_15->irqchip, 0,
       VAR_14, VAR_3);
 if (VAR_21) {
  FUNC_2(VAR_15->dev, "failed to add IRQ chip\n");
  return VAR_21;
 }

 if (!VAR_19) {
  for (VAR_22 = 0; VAR_22 < VAR_20->ngpio_ranges; VAR_22++) {
   VAR_17 = &VAR_20->gpio_ranges[VAR_22];

   FUNC_10(VAR_18->irq.domain, VAR_23,
        VAR_17->base, VAR_17->npins);
   VAR_23 += VAR_17->npins;
  }
 }

 FUNC_9(VAR_18, &VAR_15->irqchip, VAR_16,
         VAR_7);
 return 0;
}
