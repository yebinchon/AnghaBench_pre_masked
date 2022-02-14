
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 struct platform_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_0);
 struct platform_device *VAR_3 = FUNC_4(VAR_2->parent);
 int VAR_4 = FUNC_3(VAR_3, 0);


 if (VAR_1)
  FUNC_1(VAR_4);
 else
  FUNC_0(VAR_4);

 return 0;
}
