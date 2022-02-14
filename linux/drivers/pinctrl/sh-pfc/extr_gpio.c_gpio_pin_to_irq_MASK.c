
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_pfc {int* irqs; TYPE_1__* info; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_4__ {short* gpios; } ;
struct TYPE_3__ {unsigned int gpio_irq_size; TYPE_2__* gpio_irq; } ;


 struct sh_pfc* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct sh_pfc *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->info->gpio_irq_size; VAR_3++) {
  const short *VAR_5 = VAR_2->info->gpio_irq[VAR_3].gpios;

  for (VAR_4 = 0; VAR_5[VAR_4] >= 0; VAR_4++) {
   if (VAR_5[VAR_4] == VAR_1)
    goto found;
  }
 }

 return 0;

found:
 return VAR_2->irqs[VAR_3];
}
