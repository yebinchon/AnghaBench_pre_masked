
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_chip {char* name; int irq_bus_sync_unlock; int irq_bus_lock; int irq_set_type; int irq_unmask; int irq_mask; } ;
struct gpio_chip {char* label; int base; int can_sleep; scalar_t__ ngpio; int set_config; int set; int get; int direction_output; int direction_input; int get_direction; int free; int request; int owner; int * parent; } ;
struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int dev; TYPE_1__* cport_desc; int bundle; } ;
struct gb_gpio_controller {struct gb_gpio_controller* lines; scalar_t__ line_max; struct gpio_chip chip; int irq_lock; struct irq_chip irqc; struct gbphy_device* gbphy_dev; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 struct gb_connection* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_connection*) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_connection*,struct gb_gpio_controller*) ;
 int FUNC_9 (struct gbphy_device*,struct gb_gpio_controller*) ;
 int FUNC_10 (struct gb_gpio_controller*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (struct gbphy_device*) ;
 int FUNC_12 (struct gpio_chip*) ;
 int FUNC_13 (struct gpio_chip*,struct irq_chip*,int ,int ,int ) ;
 int FUNC_14 (struct gpio_chip*) ;
 int VAR_18 ;
 int FUNC_15 (struct gb_gpio_controller*) ;
 struct gb_gpio_controller* FUNC_16 (int,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct gbphy_device *VAR_19,
    const struct gbphy_device_id *VAR_20)
{
 struct gb_connection *VAR_21;
 struct gb_gpio_controller *VAR_22;
 struct gpio_chip *VAR_23;
 struct irq_chip *VAR_24;
 int VAR_25;

 VAR_22 = FUNC_16(sizeof(*VAR_22), VAR_1);
 if (!VAR_22)
  return -VAR_0;

 VAR_21 =
  FUNC_3(VAR_19->bundle,
         FUNC_17(VAR_19->cport_desc->id),
         VAR_15);
 if (FUNC_0(VAR_21)) {
  VAR_25 = FUNC_1(VAR_21);
  goto exit_ggc_free;
 }

 VAR_22->connection = VAR_21;
 FUNC_8(VAR_21, VAR_22);
 VAR_22->gbphy_dev = VAR_19;
 FUNC_9(VAR_19, VAR_22);

 VAR_25 = FUNC_7(VAR_21);
 if (VAR_25)
  goto exit_connection_destroy;

 VAR_25 = FUNC_10(VAR_22);
 if (VAR_25)
  goto exit_connection_disable;

 VAR_24 = &VAR_22->irqc;
 VAR_24->irq_mask = VAR_11;
 VAR_24->irq_unmask = VAR_13;
 VAR_24->irq_set_type = VAR_12;
 VAR_24->irq_bus_lock = VAR_9;
 VAR_24->irq_bus_sync_unlock = VAR_10;
 VAR_24->name = "greybus_gpio";

 FUNC_18(&VAR_22->irq_lock);

 VAR_23 = &VAR_22->chip;

 VAR_23->label = "greybus_gpio";
 VAR_23->parent = &VAR_19->dev;
 VAR_23->owner = VAR_3;

 VAR_23->request = VAR_14;
 VAR_23->free = VAR_6;
 VAR_23->get_direction = VAR_8;
 VAR_23->direction_input = VAR_4;
 VAR_23->direction_output = VAR_5;
 VAR_23->get = VAR_7;
 VAR_23->set = VAR_16;
 VAR_23->set_config = VAR_17;
 VAR_23->base = -1;
 VAR_23->ngpio = VAR_22->line_max + 1;
 VAR_23->can_sleep = 1;

 VAR_25 = FUNC_6(VAR_21);
 if (VAR_25)
  goto exit_line_free;

 VAR_25 = FUNC_12(VAR_23);
 if (VAR_25) {
  FUNC_2(&VAR_19->dev, "failed to add gpio chip: %d\n", VAR_25);
  goto exit_line_free;
 }

 VAR_25 = FUNC_13(VAR_23, VAR_24, 0, VAR_18,
       VAR_2);
 if (VAR_25) {
  FUNC_2(&VAR_19->dev, "failed to add irq chip: %d\n", VAR_25);
  goto exit_gpiochip_remove;
 }

 FUNC_11(VAR_19);
 return 0;

exit_gpiochip_remove:
 FUNC_14(VAR_23);
exit_line_free:
 FUNC_15(VAR_22->lines);
exit_connection_disable:
 FUNC_5(VAR_21);
exit_connection_destroy:
 FUNC_4(VAR_21);
exit_ggc_free:
 FUNC_15(VAR_22);
 return VAR_25;
}
