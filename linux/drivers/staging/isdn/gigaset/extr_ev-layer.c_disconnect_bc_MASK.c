
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_commands; } ;
struct cardstate {int commands_pending; TYPE_2__* ops; int lock; TYPE_1__ at_state; int cidmode; } ;
struct bc_state {int chstate; } ;
struct at_state_t {int seq_index; } ;
struct TYPE_4__ {int (* close_bchannel ) (struct bc_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bc_state*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct bc_state*) ;

__attribute__((used)) static void FUNC_5(struct at_state_t *VAR_4,
     struct cardstate *VAR_5, struct bc_state *VAR_6)
{
 unsigned long VAR_7;

 FUNC_2(&VAR_5->lock, VAR_7);
 ++VAR_4->seq_index;


 if (!VAR_5->cidmode) {
  VAR_5->at_state.pending_commands |= VAR_3;
  FUNC_0(VAR_2, "Scheduling PC_UMMODE");
  VAR_5->commands_pending = 1;
 }
 FUNC_3(&VAR_5->lock, VAR_7);


 VAR_5->ops->close_bchannel(VAR_6);


 if (VAR_6->chstate & (VAR_0 | VAR_1)) {
  VAR_6->chstate &= ~(VAR_0 | VAR_1);
  FUNC_1(VAR_6);
 }
}
