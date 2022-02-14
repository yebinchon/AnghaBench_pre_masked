
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_lport_ns_s {TYPE_2__* port; } ;
typedef enum vport_ns_event { ____Placeholder_vport_ns_event } vport_ns_event ;
struct TYPE_3__ {int pwwn; } ;
struct TYPE_4__ {int fcs; TYPE_1__ port_cfg; } ;




 int FUNC_0 (struct bfa_fcs_lport_ns_s*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_lport_ns_s *VAR_1,
   enum vport_ns_event VAR_2)
{
 FUNC_3(VAR_1->port->fcs, VAR_1->port->port_cfg.pwwn);
 FUNC_3(VAR_1->port->fcs, VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_1, VAR_0);
  FUNC_0(VAR_1, ((void*)0));
  break;

 case 129:
  break;

 default:
  FUNC_1(VAR_1->port->fcs, VAR_2);
 }
}
