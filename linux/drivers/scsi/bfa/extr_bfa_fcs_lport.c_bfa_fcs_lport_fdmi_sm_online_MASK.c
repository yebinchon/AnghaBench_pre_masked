
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_2__ port_cfg; } ;
struct bfa_fcs_lport_fdmi_s {TYPE_1__* ms; } ;
typedef enum port_fdmi_event { ____Placeholder_port_fdmi_event } port_fdmi_event ;
struct TYPE_3__ {struct bfa_fcs_lport_s* port; } ;



 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_fcs_lport_fdmi_s*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcs_lport_fdmi_s *VAR_1,
    enum port_fdmi_event VAR_2)
{
 struct bfa_fcs_lport_s *VAR_3 = VAR_1->ms->port;

 FUNC_2(VAR_3->fcs, VAR_3->port_cfg.pwwn);
 FUNC_2(VAR_3->fcs, VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_0);
  break;

 default:
  FUNC_0(VAR_3->fcs, VAR_2);
 }
}
