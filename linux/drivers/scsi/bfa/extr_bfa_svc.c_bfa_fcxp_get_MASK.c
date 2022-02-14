
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcxp_s {int qe; } ;
struct bfa_fcxp_mod_s {int fcxp_active_q; int fcxp_rsp_free_q; int fcxp_req_free_q; } ;
typedef scalar_t__ bfa_boolean_t ;


 int FUNC_0 (int *,struct bfa_fcxp_s**) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct bfa_fcxp_s *
FUNC_2(struct bfa_fcxp_mod_s *VAR_0, bfa_boolean_t VAR_1)
{
 struct bfa_fcxp_s *VAR_2;

 if (VAR_1)
  FUNC_0(&VAR_0->fcxp_req_free_q, &VAR_2);
 else
  FUNC_0(&VAR_0->fcxp_rsp_free_q, &VAR_2);

 if (VAR_2)
  FUNC_1(&VAR_2->qe, &VAR_0->fcxp_active_q);

 return VAR_2;
}
