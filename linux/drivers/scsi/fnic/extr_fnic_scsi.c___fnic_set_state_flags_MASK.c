
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fnic {unsigned long state_flags; int fnic_lock; TYPE_2__* lport; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int * host_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(struct fnic *VAR_0, unsigned long VAR_1,
   unsigned long VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4 = 0;

 FUNC_0(&VAR_0->fnic_lock, VAR_3);
 FUNC_0(VAR_0->lport->host->host_lock, VAR_4);

 if (VAR_2)
  VAR_0->state_flags &= ~VAR_1;
 else
  VAR_0->state_flags |= VAR_1;

 FUNC_1(VAR_0->lport->host->host_lock, VAR_4);
 FUNC_1(&VAR_0->fnic_lock, VAR_3);

 return;
}
