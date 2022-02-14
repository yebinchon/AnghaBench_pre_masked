
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct esp {int flags; TYPE_2__* host; TYPE_1__* ops; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {scalar_t__ (* irq_pending ) (struct esp*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct esp*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (struct esp*) ;
 scalar_t__ FUNC_4 (struct esp*) ;

irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct esp *VAR_6 = VAR_5;
 unsigned long VAR_7;
 irqreturn_t VAR_8;

 FUNC_1(VAR_6->host->host_lock, VAR_7);
 VAR_8 = VAR_3;
 if (VAR_6->ops->irq_pending(VAR_6)) {
  VAR_8 = VAR_2;
  for (;;) {
   int VAR_9;

   FUNC_0(VAR_6);
   if (!(VAR_6->flags & VAR_0))
    break;
   VAR_6->flags &= ~VAR_0;

   for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
    if (VAR_6->ops->irq_pending(VAR_6))
     break;
   }
   if (VAR_9 == VAR_1)
    break;
  }
 }
 FUNC_2(VAR_6->host->host_lock, VAR_7);

 return VAR_8;
}
