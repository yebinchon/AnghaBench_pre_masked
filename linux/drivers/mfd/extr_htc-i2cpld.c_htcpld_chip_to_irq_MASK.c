
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htcpld_chip {unsigned int nirqs; int irq_start; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct htcpld_chip* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct htcpld_chip *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < VAR_3->nirqs)
  return VAR_3->irq_start + VAR_2;
 else
  return -VAR_0;
}
