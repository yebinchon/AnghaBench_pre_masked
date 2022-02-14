
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct mgsl_struct {int loopmode_send_done_requested; int irq_spinlock; scalar_t__ tx_active; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct mgsl_struct*) ;

__attribute__((used)) static int FUNC_3( struct mgsl_struct * VAR_1 )
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->irq_spinlock,VAR_2);
 if (VAR_1->params.flags & VAR_0) {
  if (VAR_1->tx_active)
   VAR_1->loopmode_send_done_requested = 1;
  else
   FUNC_2(VAR_1);
 }
 FUNC_1(&VAR_1->irq_spinlock,VAR_2);

 return 0;
}
