
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_rport_s {int qe; int bfa; } ;
struct bfa_rport_mod_s {int rp_free_q; int rp_active_q; } ;


 struct bfa_rport_mod_s* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct bfa_rport_s*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bfa_rport_s *VAR_0)
{
 struct bfa_rport_mod_s *VAR_1 = FUNC_0(VAR_0->bfa);

 FUNC_1(!FUNC_2(&VAR_1->rp_active_q, VAR_0));
 FUNC_4(&VAR_0->qe);
 FUNC_3(&VAR_0->qe, &VAR_1->rp_free_q);
}
