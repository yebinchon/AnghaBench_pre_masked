
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct irq_data {size_t hwirq; } ;
struct gpio_chip {int dummy; } ;
struct gb_gpio_line {int irq_type_pending; int irq_type; } ;
struct gb_gpio_controller {TYPE_1__* gbphy_dev; struct gb_gpio_line* lines; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (struct device*,char*,unsigned int) ;
 struct gb_gpio_controller* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct gpio_chip *VAR_9 = FUNC_2(VAR_7);
 struct gb_gpio_controller *VAR_10 = FUNC_1(VAR_9);
 struct gb_gpio_line *VAR_11 = &VAR_10->lines[VAR_7->hwirq];
 struct device *VAR_12 = &VAR_10->gbphy_dev->dev;
 u8 VAR_13;

 switch (VAR_8) {
 case 128:
  VAR_13 = VAR_6;
  break;
 case 131:
  VAR_13 = VAR_3;
  break;
 case 132:
  VAR_13 = VAR_2;
  break;
 case 133:
  VAR_13 = VAR_1;
  break;
 case 129:
  VAR_13 = VAR_5;
  break;
 case 130:
  VAR_13 = VAR_4;
  break;
 default:
  FUNC_0(VAR_12, "unsupported irq type: %u\n", VAR_8);
  return -VAR_0;
 }

 VAR_11->irq_type = VAR_13;
 VAR_11->irq_type_pending = 1;

 return 0;
}
