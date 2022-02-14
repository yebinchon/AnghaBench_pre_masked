
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending_commands; } ;
struct cardstate {scalar_t__ mstate; int commands_pending; TYPE_1__ at_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cardstate*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cardstate*) ;

__attribute__((used)) static void FUNC_3(struct cardstate *VAR_4)
{
 FUNC_2(VAR_4);

 if (VAR_4->mstate == VAR_1) {
  VAR_4->mstate = VAR_2;
  VAR_4->at_state.pending_commands |= VAR_3;
  FUNC_1(VAR_0, "Scheduling PC_SHUTDOWN");
  VAR_4->commands_pending = 1;
 } else
  FUNC_0(VAR_4);
}
