
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_lport_fdmi_s {struct bfa_fcs_lport_ms_s* ms; } ;
struct bfa_fcs_lport_ms_s {TYPE_2__* port; struct bfa_fcs_lport_fdmi_s fdmi; } ;
struct TYPE_4__ {TYPE_1__* fcs; } ;
struct TYPE_3__ {scalar_t__ fdmi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_lport_fdmi_s*,int ) ;

void
FUNC_1(struct bfa_fcs_lport_ms_s *VAR_2)
{
 struct bfa_fcs_lport_fdmi_s *VAR_3 = &VAR_2->fdmi;

 VAR_3->ms = VAR_2;
 if (VAR_2->port->fcs->fdmi_enabled)
  FUNC_0(VAR_3, VAR_1);
 else
  FUNC_0(VAR_3, VAR_0);
}
