
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secocec_data {int irq; struct device* dev; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 struct gpio_desc* FUNC_4 (struct device*,int *,int ) ;
 int FUNC_5 (struct gpio_desc*) ;

__attribute__((used)) static int FUNC_6(struct secocec_data *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct gpio_desc *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_4(VAR_3, ((void*)0), VAR_1);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_3, "Cannot request interrupt gpio");
  return FUNC_1(VAR_4);
 }

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 < 0) {
  FUNC_3(VAR_3, "Cannot find valid irq");
  return -VAR_0;
 }
 FUNC_2(VAR_3, "irq-gpio is bound to IRQ %d", VAR_5);

 VAR_2->irq = VAR_5;

 return 0;
}
