
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_lport_scn_s {TYPE_1__* port; int timer; } ;
typedef enum port_scn_event { ____Placeholder_port_scn_event } port_scn_event ;
struct TYPE_2__ {int fcs; } ;




 int FUNC_0 (struct bfa_fcs_lport_scn_s*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcs_lport_scn_s*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_lport_scn_s *VAR_2,
    enum port_scn_event VAR_3)
{
 switch (VAR_3) {
 case 128:
  FUNC_2(VAR_2, VAR_1);
  FUNC_0(VAR_2, ((void*)0));
  break;

 case 129:
  FUNC_2(VAR_2, VAR_0);
  FUNC_3(&VAR_2->timer);
  break;

 default:
  FUNC_1(VAR_2->port->fcs, VAR_3);
 }
}
