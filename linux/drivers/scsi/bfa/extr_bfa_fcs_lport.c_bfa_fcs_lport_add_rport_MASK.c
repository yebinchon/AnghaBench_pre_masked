
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int qe; } ;
struct bfa_fcs_lport_s {int num_rports; int rport_q; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(
 struct bfa_fcs_lport_s *VAR_0,
 struct bfa_fcs_rport_s *VAR_1)
{
 FUNC_0(&VAR_1->qe, &VAR_0->rport_q);
 VAR_0->num_rports++;
}
