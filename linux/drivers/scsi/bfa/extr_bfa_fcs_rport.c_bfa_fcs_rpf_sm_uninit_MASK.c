
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_4__* fcs; TYPE_3__* port; } ;
struct bfa_fcs_rpf_s {int rpsc_retries; struct bfa_fcs_rport_s* rport; } ;
struct bfa_fcs_fabric_s {int dummy; } ;
typedef enum rpf_event { ____Placeholder_rpf_event } rpf_event ;
struct TYPE_9__ {struct bfa_fcs_fabric_s fabric; } ;
struct TYPE_8__ {TYPE_2__* fabric; } ;
struct TYPE_7__ {TYPE_1__* lps; } ;
struct TYPE_6__ {int brcd_switch; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 int FUNC_1 (struct bfa_fcs_fabric_s*) ;
 int FUNC_2 (struct bfa_fcs_rpf_s*,int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_5 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_rpf_s *VAR_2, enum rpf_event VAR_3)
{
 struct bfa_fcs_rport_s *VAR_4 = VAR_2->rport;
 struct bfa_fcs_fabric_s *VAR_5 = &VAR_4->fcs->fabric;

 FUNC_5(VAR_4->fcs, VAR_4->pwwn);
 FUNC_5(VAR_4->fcs, VAR_4->pid);
 FUNC_5(VAR_4->fcs, VAR_3);

 switch (VAR_3) {
 case 128:

  if ((!FUNC_0(VAR_4->pid)) &&
   ((VAR_4->port->fabric->lps->brcd_switch) ||
   (FUNC_1(VAR_5) ==
      VAR_0))) {
   FUNC_4(VAR_2, VAR_1);
   VAR_2->rpsc_retries = 0;
   FUNC_2(VAR_2, ((void*)0));
  }
  break;

 case 129:
  break;

 default:
  FUNC_3(VAR_4->fcs, VAR_3);
 }
}
