
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rpsc_speed; } ;
struct bfa_fcs_rport_s {TYPE_2__ rpf; TYPE_1__* port; int pid; int fcs; } ;
struct TYPE_3__ {int fcs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct bfa_fcs_rport_s *VAR_1)
{
 FUNC_2(VAR_1->fcs, VAR_1->pid);

 if (FUNC_0(VAR_1->port->fcs))
  return;

 VAR_1->rpf.rpsc_speed = 0;
 FUNC_1(&VAR_1->rpf, VAR_0);
}
