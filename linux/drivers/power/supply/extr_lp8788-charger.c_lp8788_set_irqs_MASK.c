
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; int end; } ;
struct platform_device {int dummy; } ;
struct lp8788_charger {int num_irqs; TYPE_2__* irqs; TYPE_1__* lp; } ;
struct irq_domain {int dummy; } ;
struct TYPE_4__ {int virq; int which; } ;
struct TYPE_3__ {struct irq_domain* irqdm; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct lp8788_charger*) ;
 int FUNC_1 (struct irq_domain*,int) ;
 int VAR_1 ;
 struct resource* FUNC_2 (struct platform_device*,int ,char const*) ;
 int FUNC_3 (int,int *,int ,int ,char const*,struct lp8788_charger*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2,
   struct lp8788_charger *VAR_3, const char *VAR_4)
{
 struct resource *VAR_5;
 struct irq_domain *VAR_6 = VAR_3->lp->irqdm;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_4);
 if (!VAR_5)
  return 0;

 VAR_7 = VAR_5->start;
 VAR_8 = VAR_5->end;

 for (VAR_11 = VAR_7; VAR_11 <= VAR_8; VAR_11++) {
  VAR_10 = VAR_3->num_irqs;

  VAR_9 = FUNC_1(VAR_6, VAR_11);
  VAR_3->irqs[VAR_10].virq = VAR_9;
  VAR_3->irqs[VAR_10].which = VAR_11;
  VAR_3->num_irqs++;

  VAR_12 = FUNC_3(VAR_9, ((void*)0),
     VAR_1,
     0, VAR_4, VAR_3);
  if (VAR_12)
   break;
 }

 if (VAR_11 <= VAR_8)
  goto err_free_irq;

 return 0;

err_free_irq:
 for (VAR_11 = 0; VAR_11 < VAR_3->num_irqs; VAR_11++)
  FUNC_0(VAR_3->irqs[VAR_11].virq, VAR_3);
 return VAR_12;
}
