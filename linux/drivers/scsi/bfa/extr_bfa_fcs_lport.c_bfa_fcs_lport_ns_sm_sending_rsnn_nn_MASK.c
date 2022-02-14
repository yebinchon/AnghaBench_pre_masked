
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_lport_ns_s {TYPE_2__* port; int fcxp_wqe; } ;
typedef enum vport_ns_event { ____Placeholder_vport_ns_event } vport_ns_event ;
struct TYPE_3__ {int pwwn; } ;
struct TYPE_4__ {int fcs; TYPE_1__ port_cfg; } ;


 int FUNC_0 (TYPE_2__*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_lport_ns_s *VAR_2,
     enum vport_ns_event VAR_3)
{
 FUNC_4(VAR_2->port->fcs, VAR_2->port->port_cfg.pwwn);
 FUNC_4(VAR_2->port->fcs, VAR_3);

 switch (VAR_3) {
 case 128:
  FUNC_3(VAR_2, VAR_1);
  break;

 case 129:
  FUNC_3(VAR_2, VAR_0);
  FUNC_1(FUNC_0(VAR_2->port),
   &VAR_2->fcxp_wqe);
  break;

 default:
  FUNC_2(VAR_2->port->fcs, VAR_3);
 }
}
