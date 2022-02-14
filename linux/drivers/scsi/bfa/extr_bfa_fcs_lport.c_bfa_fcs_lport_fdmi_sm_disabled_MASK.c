
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


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bfa_fcs_lport_fdmi_s *VAR_0,
        enum port_fdmi_event VAR_1)
{
 struct bfa_fcs_lport_s *VAR_2 = VAR_0->ms->port;

 FUNC_0(VAR_2->fcs, VAR_2->port_cfg.pwwn);
 FUNC_0(VAR_2->fcs, VAR_1);


}
