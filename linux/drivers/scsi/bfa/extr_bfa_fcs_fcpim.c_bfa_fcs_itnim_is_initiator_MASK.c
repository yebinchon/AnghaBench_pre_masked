
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int initiator; } ;
struct bfa_fcs_itnim_s {TYPE_2__ stats; TYPE_1__* rport; int fcs; } ;
struct TYPE_3__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct bfa_fcs_itnim_s *VAR_1)
{
 FUNC_1(VAR_1->fcs, VAR_1->rport->pid);
 VAR_1->stats.initiator++;
 FUNC_0(VAR_1, VAR_0);
}
