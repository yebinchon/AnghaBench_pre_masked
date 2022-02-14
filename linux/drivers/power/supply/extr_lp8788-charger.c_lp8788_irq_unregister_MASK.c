
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct lp8788_charger {int num_irqs; TYPE_1__* irqs; } ;
struct TYPE_2__ {int virq; } ;


 int FUNC_0 (int,struct lp8788_charger*) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0,
      struct lp8788_charger *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_irqs; VAR_2++) {
  VAR_3 = VAR_1->irqs[VAR_2].virq;
  if (!VAR_3)
   continue;

  FUNC_0(VAR_3, VAR_1);
 }
}
