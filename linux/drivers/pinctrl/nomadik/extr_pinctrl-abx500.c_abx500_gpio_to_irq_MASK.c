
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct abx500_pinctrl {int irq_cluster_size; TYPE_1__* parent; struct abx500_gpio_irq_cluster* irq_cluster; } ;
struct abx500_gpio_irq_cluster {int start; int end; int to_irq; } ;
struct TYPE_2__ {int domain; } ;


 int VAR_0 ;
 struct abx500_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct abx500_pinctrl *VAR_3 = FUNC_0(VAR_1);

 int VAR_4 = VAR_2 + 1;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->irq_cluster_size; VAR_6++) {
  struct abx500_gpio_irq_cluster *VAR_7 =
   &VAR_3->irq_cluster[VAR_6];

  if (VAR_4 >= VAR_7->start && VAR_4 <= VAR_7->end) {






   VAR_5 = VAR_4 - VAR_7->start + VAR_7->to_irq;
   return FUNC_1(VAR_3->parent->domain, VAR_5);
  }
 }

 return -VAR_0;
}
