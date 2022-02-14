
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_state {TYPE_1__* local; int recycle_event; int trigger_event; int sync_release_event; int sync_trigger_event; } ;
struct TYPE_2__ {int recycle; int trigger; int sync_release; int sync_trigger; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct vchiq_state *VAR_0)
{
 FUNC_0(&VAR_0->sync_trigger_event, &VAR_0->local->sync_trigger);
 FUNC_0(&VAR_0->sync_release_event, &VAR_0->local->sync_release);
 FUNC_0(&VAR_0->trigger_event, &VAR_0->local->trigger);
 FUNC_0(&VAR_0->recycle_event, &VAR_0->local->recycle);
}
