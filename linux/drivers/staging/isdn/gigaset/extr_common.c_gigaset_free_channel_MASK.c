
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bc_state {TYPE_2__* cs; int channel; scalar_t__ busy; int use_count; } ;
struct TYPE_4__ {int lock; TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct bc_state *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->cs->lock, VAR_2);
 if (!VAR_1->busy) {
  FUNC_0(VAR_0, "could not free channel %d",
   VAR_1->channel);
  FUNC_3(&VAR_1->cs->lock, VAR_2);
  return;
 }
 --VAR_1->use_count;
 VAR_1->busy = 0;
 FUNC_1(VAR_1->cs->driver->owner);
 FUNC_0(VAR_0, "freed channel %d", VAR_1->channel);
 FUNC_3(&VAR_1->cs->lock, VAR_2);
}
