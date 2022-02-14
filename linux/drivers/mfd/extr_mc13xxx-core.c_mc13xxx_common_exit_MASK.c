
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13xxx {int lock; int irq_data; int irq; } ;
struct device {int dummy; } ;


 struct mc13xxx* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct device *VAR_0)
{
 struct mc13xxx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_3(VAR_1->irq, VAR_1->irq_data);
 FUNC_2(&VAR_1->lock);

 return 0;
}
