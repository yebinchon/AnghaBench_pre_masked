
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucb1x00_ts {int irq_disabled; int irq_wait; int irq_lock; TYPE_1__* ucb; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ irq_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct ucb1x00_ts *VAR_4 = VAR_3;

 FUNC_1(&VAR_4->irq_lock);
 VAR_4->irq_disabled = 1;
 FUNC_0(VAR_4->ucb->irq_base + VAR_1);
 FUNC_2(&VAR_4->irq_lock);
 FUNC_3(&VAR_4->irq_wait);

 return VAR_0;
}
