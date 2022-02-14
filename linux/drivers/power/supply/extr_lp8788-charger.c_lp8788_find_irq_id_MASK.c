
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp8788_charger {int num_irqs; TYPE_1__* irqs; } ;
struct TYPE_2__ {int virq; int which; } ;



__attribute__((used)) static bool FUNC_0(struct lp8788_charger *VAR_0, int VAR_1, int *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_irqs; VAR_4++) {
  if (VAR_0->irqs[VAR_4].virq == VAR_1) {
   *VAR_2 = VAR_0->irqs[VAR_4].which;
   VAR_3 = 1;
   break;
  }
 }

 return VAR_3;
}
