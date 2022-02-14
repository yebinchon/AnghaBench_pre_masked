
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct platform_device {int dev; } ;
struct lp8788_rtc {scalar_t__ alarm; int irq; struct lp8788* lp; } ;
struct lp8788 {struct irq_domain* irqdm; } ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ,int ,int ,struct lp8788_rtc*) ;
 int FUNC_1 (struct irq_domain*,int) ;
 int VAR_3 ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4,
    struct lp8788_rtc *VAR_5)
{
 struct resource *VAR_6;
 struct lp8788 *VAR_7 = VAR_5->lp;
 struct irq_domain *VAR_8 = VAR_7->irqdm;
 int VAR_9;

 VAR_5->irq = 0;


 VAR_6 = FUNC_2(VAR_4, VAR_0, VAR_2);
 if (!VAR_6)
  return 0;

 if (VAR_5->alarm == VAR_1)
  VAR_9 = VAR_6->start;
 else
  VAR_9 = VAR_6->end;

 VAR_5->irq = FUNC_1(VAR_8, VAR_9);

 return FUNC_0(&VAR_4->dev, VAR_5->irq, ((void*)0),
    VAR_3,
    0, VAR_2, VAR_5);
}
