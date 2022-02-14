
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_rport_s {int rpf; TYPE_1__* port; int pid; int fcs; } ;
struct TYPE_2__ {int fabric; int fcs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct bfa_fcs_rport_s *VAR_1)
{
 FUNC_3(VAR_1->fcs, VAR_1->pid);

 if (FUNC_0(VAR_1->port->fcs))
  return;

 if (FUNC_1(VAR_1->port->fabric))
  FUNC_2(&VAR_1->rpf, VAR_0);
}
