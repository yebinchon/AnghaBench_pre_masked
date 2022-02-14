
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_fcxp_wqe_s {int nreq_sgles; int nrsp_sgles; int qe; void* rsp_sglen_cbfn; void* rsp_sga_cbfn; void* req_sglen_cbfn; void* req_sga_cbfn; struct bfa_s* bfa; void* caller; void* alloc_cbarg; int alloc_cbfn; } ;
struct bfa_fcxp_mod_s {int rsp_wait_q; int req_wait_q; int fcxp_rsp_free_q; int fcxp_req_free_q; } ;
typedef void* bfa_fcxp_get_sglen_t ;
typedef void* bfa_fcxp_get_sgaddr_t ;
typedef int bfa_fcxp_alloc_cbfn_t ;
typedef scalar_t__ bfa_boolean_t ;


 struct bfa_fcxp_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct bfa_s *VAR_0, struct bfa_fcxp_wqe_s *VAR_1,
        bfa_fcxp_alloc_cbfn_t VAR_2, void *VAR_3,
        void *VAR_4, int VAR_5,
        int VAR_6, bfa_fcxp_get_sgaddr_t VAR_7,
        bfa_fcxp_get_sglen_t VAR_8,
        bfa_fcxp_get_sgaddr_t VAR_9,
        bfa_fcxp_get_sglen_t VAR_10, bfa_boolean_t VAR_11)
{
 struct bfa_fcxp_mod_s *VAR_12 = FUNC_0(VAR_0);

 if (VAR_11)
  FUNC_1(!FUNC_3(&VAR_12->fcxp_req_free_q));
 else
  FUNC_1(!FUNC_3(&VAR_12->fcxp_rsp_free_q));

 VAR_1->alloc_cbfn = VAR_2;
 VAR_1->alloc_cbarg = VAR_3;
 VAR_1->caller = VAR_4;
 VAR_1->bfa = VAR_0;
 VAR_1->nreq_sgles = VAR_5;
 VAR_1->nrsp_sgles = VAR_6;
 VAR_1->req_sga_cbfn = VAR_7;
 VAR_1->req_sglen_cbfn = VAR_8;
 VAR_1->rsp_sga_cbfn = VAR_9;
 VAR_1->rsp_sglen_cbfn = VAR_10;

 if (VAR_11)
  FUNC_2(&VAR_1->qe, &VAR_12->req_wait_q);
 else
  FUNC_2(&VAR_1->qe, &VAR_12->rsp_wait_q);
}
