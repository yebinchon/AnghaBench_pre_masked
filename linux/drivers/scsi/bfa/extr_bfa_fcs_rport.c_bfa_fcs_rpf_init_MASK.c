
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rpf_s {struct bfa_fcs_rport_s* rport; } ;
struct bfa_fcs_rport_s {int pid; int fcs; struct bfa_fcs_rpf_s rpf; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct bfa_fcs_rport_s *VAR_1)
{
 struct bfa_fcs_rpf_s *VAR_2 = &VAR_1->rpf;

 FUNC_1(VAR_1->fcs, VAR_1->pid);
 VAR_2->rport = VAR_1;

 FUNC_0(VAR_2, VAR_0);
}
