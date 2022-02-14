
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_fcxp_s {int rsp_sgpg_q; int rsp_sglen_cbfn; int rsp_sga_cbfn; int nrsp_sgles; int use_irspbuf; int req_sgpg_q; int req_sglen_cbfn; int req_sga_cbfn; int nreq_sgles; int use_ireqbuf; void* caller; int fcxp_tag; } ;
typedef int bfa_fcxp_get_sglen_t ;
typedef int bfa_fcxp_get_sgaddr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_fcxp_s*,struct bfa_s*,int *,int *,int *,int *,int *,int,int ,int ) ;
 int FUNC_2 (struct bfa_s*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcxp_s *VAR_0,
        void *VAR_1, struct bfa_s *VAR_2, int VAR_3,
        int VAR_4, bfa_fcxp_get_sgaddr_t VAR_5,
        bfa_fcxp_get_sglen_t VAR_6,
        bfa_fcxp_get_sgaddr_t VAR_7,
        bfa_fcxp_get_sglen_t VAR_8)
{

 FUNC_0(VAR_2 == ((void*)0));

 FUNC_2(VAR_2, VAR_0->fcxp_tag);

 VAR_0->caller = VAR_1;

 FUNC_1(VAR_0, VAR_2,
  &VAR_0->use_ireqbuf, &VAR_0->nreq_sgles, &VAR_0->req_sga_cbfn,
  &VAR_0->req_sglen_cbfn, &VAR_0->req_sgpg_q,
  VAR_3, VAR_5, VAR_6);

 FUNC_1(VAR_0, VAR_2,
  &VAR_0->use_irspbuf, &VAR_0->nrsp_sgles, &VAR_0->rsp_sga_cbfn,
  &VAR_0->rsp_sglen_cbfn, &VAR_0->rsp_sgpg_q,
  VAR_4, VAR_7, VAR_8);

}
