
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int unhandled_irqs; } ;
struct TYPE_3__ {int cidx; } ;
struct sge {TYPE_2__ stats; TYPE_1__ respQ; } ;
struct adapter {int async_lock; int napi; scalar_t__ regs; struct sge* sge; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (int ,scalar_t__) ;

irqreturn_t FUNC_11(int VAR_4, void *VAR_5)
{
 struct adapter *VAR_6 = VAR_5;
 struct sge *VAR_7 = VAR_6->sge;
 int VAR_8;

 if (FUNC_2(FUNC_6(VAR_6))) {
  FUNC_10(VAR_2, VAR_6->regs + VAR_0);

  if (FUNC_4(&VAR_6->napi)) {
   if (FUNC_5(VAR_6))
    FUNC_1(&VAR_6->napi);
   else {

    FUNC_10(VAR_7->respQ.cidx, VAR_6->regs + VAR_1);

    FUNC_3(&VAR_6->napi);
   }
  }
  return VAR_3;
 }

 FUNC_7(&VAR_6->async_lock);
 VAR_8 = FUNC_9(VAR_6);
 FUNC_8(&VAR_6->async_lock);

 if (!VAR_8)
  VAR_7->stats.unhandled_irqs++;

 return FUNC_0(VAR_8 != 0);
}
