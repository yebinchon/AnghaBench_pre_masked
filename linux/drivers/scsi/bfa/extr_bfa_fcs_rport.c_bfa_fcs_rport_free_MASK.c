
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_s {int num_rport_logins; } ;
struct bfa_fcs_rport_s {scalar_t__ pid; int rp_drv; int * bfa_rport; int itnim; int plogi_pending; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {struct bfa_fcs_s* fcs; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,struct bfa_fcs_rport_s*) ;
 scalar_t__ FUNC_3 (struct bfa_fcs_lport_s*) ;
 int FUNC_4 (struct bfa_fcs_rport_s*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_rport_s *VAR_2)
{
 struct bfa_fcs_lport_s *VAR_3 = VAR_2->port;
 struct bfa_fcs_s *VAR_4 = VAR_3->fcs;






 VAR_2->plogi_pending = VAR_0;

 if (FUNC_3(VAR_3)) {
  FUNC_1(VAR_2->itnim);
  if (VAR_2->pid != 0 && !FUNC_0(VAR_2->pid))
   FUNC_4(VAR_2);
 }

 if (VAR_2->bfa_rport) {
  FUNC_5(VAR_2->bfa_rport, VAR_1);
  VAR_2->bfa_rport = ((void*)0);
 }

 FUNC_2(VAR_3, VAR_2);
 VAR_4->num_rport_logins--;
 FUNC_6(VAR_2->rp_drv);
}
