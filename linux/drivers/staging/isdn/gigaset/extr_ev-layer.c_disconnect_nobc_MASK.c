
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending_commands; } ;
struct cardstate {int commands_pending; int lock; TYPE_1__ at_state; int cidmode; } ;
struct at_state_t {int list; int seq_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct at_state_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct at_state_t **VAR_2,
       struct cardstate *VAR_3)
{
 unsigned long VAR_4;

 FUNC_4(&VAR_3->lock, VAR_4);
 ++(*VAR_2)->seq_index;


 if (!VAR_3->cidmode) {
  VAR_3->at_state.pending_commands |= VAR_1;
  FUNC_0(VAR_0, "Scheduling PC_UMMODE");
  VAR_3->commands_pending = 1;
 }


 if (!FUNC_3(&(*VAR_2)->list)) {
  FUNC_2(&(*VAR_2)->list);
  FUNC_1(*VAR_2);
  *VAR_2 = ((void*)0);
 }

 FUNC_5(&VAR_3->lock, VAR_4);
}
