
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int qe; } ;
struct bfa_fcs_lport_s {int num_rports; int rport_q; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(
 struct bfa_fcs_lport_s *VAR_1,
 struct bfa_fcs_rport_s *VAR_2)
{
 FUNC_0(!FUNC_1(&VAR_1->rport_q, VAR_2));
 FUNC_3(&VAR_2->qe);
 VAR_1->num_rports--;

 FUNC_2(VAR_1, VAR_0);
}
