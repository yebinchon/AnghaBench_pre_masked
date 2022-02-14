
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_cpu_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct irq_chip {int dummy; } ;
struct TYPE_2__ {int init_valid_mask; } ;
struct gpio_chip {int base; TYPE_1__ irq; scalar_t__ ngpio; int direction_output; void* direction_input; int set; void* get; int owner; struct device* parent; int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct gpio_chip*,int *) ;
 struct gpio_chip* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int,int ,int ,char*,struct gpio_chip*) ;
 int FUNC_5 (struct gpio_chip*,struct irq_chip*,int ,int ,int ) ;
 int FUNC_6 (struct gpio_chip*,struct irq_chip*,int,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct x86_cpu_id* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 const struct x86_cpu_id *VAR_17;
 struct irq_chip *VAR_18;
 struct gpio_chip *VAR_19;
 int VAR_20, VAR_21;


 VAR_17 = FUNC_8(VAR_9);
 if (!VAR_17)
  return -VAR_1;

 VAR_20 = FUNC_7(VAR_15, 0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_19 = FUNC_3(VAR_16, sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_2;

 VAR_19->label = VAR_0;
 VAR_19->parent = VAR_16;
 VAR_19->owner = VAR_7;
 VAR_19->get = VAR_11;
 VAR_19->set = VAR_12;
 VAR_19->direction_input = VAR_11;
 VAR_19->direction_output = VAR_10;
 VAR_19->base = -1;
 VAR_19->ngpio = VAR_4 + 1;
 VAR_19->irq.init_valid_mask = VAR_13;

 VAR_21 = FUNC_2(&VAR_15->dev, VAR_19, ((void*)0));
 if (VAR_21) {
  FUNC_0(VAR_16, "Error adding gpio chip: %d\n", VAR_21);
  return VAR_21;
 }





 VAR_21 = FUNC_4(VAR_16, VAR_20, VAR_14,
          VAR_5, "INT0002", VAR_19);
 if (VAR_21) {
  FUNC_0(VAR_16, "Error requesting IRQ %d: %d\n", VAR_20, VAR_21);
  return VAR_21;
 }

 VAR_18 = (struct irq_chip *)VAR_17->driver_data;

 VAR_21 = FUNC_5(VAR_19, VAR_18, 0, VAR_8,
       VAR_6);
 if (VAR_21) {
  FUNC_0(VAR_16, "Error adding irqchip: %d\n", VAR_21);
  return VAR_21;
 }

 FUNC_6(VAR_19, VAR_18, VAR_20, ((void*)0));

 FUNC_1(VAR_16, 1);
 return 0;
}
