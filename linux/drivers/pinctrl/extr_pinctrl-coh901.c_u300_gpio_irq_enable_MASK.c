
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct u300_gpio_port {int name; } ;
struct u300_gpio {int dev; struct u300_gpio_port* ports; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int,int ,int) ;
 struct u300_gpio* FUNC_3 (struct gpio_chip*) ;
 int VAR_0 ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_4(VAR_1);
 struct u300_gpio *VAR_3 = FUNC_3(VAR_2);
 struct u300_gpio_port *VAR_4 = &VAR_3->ports[VAR_1->hwirq >> 3];
 int VAR_5 = VAR_1->hwirq;
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_2(VAR_3->dev, "enable IRQ for hwirq %lu on port %s, offset %d\n",
   VAR_1->hwirq, VAR_4->name, VAR_5);
 FUNC_6(VAR_7);
 VAR_6 = FUNC_7(FUNC_1(VAR_5, VAR_0));
 FUNC_8(VAR_6 | FUNC_0(VAR_5), FUNC_1(VAR_5, VAR_0));
 FUNC_5(VAR_7);
}
