
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pid; int fcs; } ;
struct bfa_fcs_rpf_s {struct bfa_fcs_rport_s* rport; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct bfa_fcs_rpf_s *VAR_2 = (struct bfa_fcs_rpf_s *) VAR_1;
 struct bfa_fcs_rport_s *VAR_3 = VAR_2->rport;

 FUNC_1(VAR_3->fcs, VAR_3->pid);
 FUNC_0(VAR_2, VAR_0);
}
