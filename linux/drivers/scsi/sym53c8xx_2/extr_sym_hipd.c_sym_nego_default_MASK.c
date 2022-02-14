
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int check_nego; int qas; int dt; int iu; int offset; int period; } ;
struct sym_tcb {TYPE_1__ tgoal; } ;
struct sym_hcb {void** msgout; void** msgin; int maxoffs; int minsync; } ;
struct sym_ccb {int nego_status; int target; } ;


 void* VAR_0 ;



 int FUNC_0 (struct sym_hcb*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct sym_hcb*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct sym_hcb*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sym_hcb *VAR_1, struct sym_tcb *VAR_2, struct sym_ccb *VAR_3)
{
 switch (VAR_3->nego_status) {
 case 130:



  if (VAR_2->tgoal.period < VAR_1->minsync)
   VAR_2->tgoal.period = VAR_1->minsync;
  if (VAR_2->tgoal.offset > VAR_1->maxoffs)
   VAR_2->tgoal.offset = VAR_1->maxoffs;
  VAR_2->tgoal.iu = VAR_2->tgoal.dt = VAR_2->tgoal.qas = 0;
  VAR_2->tgoal.check_nego = 1;

  break;
 case 129:
  FUNC_1 (VAR_1, VAR_3->target, 0, 0, 0, 0);
  break;
 case 128:
  FUNC_2 (VAR_1, VAR_3->target, 0);
  break;
 }
 VAR_1->msgin [0] = VAR_0;
 VAR_1->msgout[0] = VAR_0;
 VAR_3->nego_status = 0;
}
