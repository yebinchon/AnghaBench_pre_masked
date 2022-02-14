
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_ctx_mem_info {int flags; int qp_mem; int srq_mem; int cq_mem; int vnic_mem; int stat_mem; int mrav_mem; int tim_mem; int ** tqm_mem; } ;
struct bnxt {int max_q; struct bnxt_ctx_mem_info* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_1)
{
 struct bnxt_ctx_mem_info *VAR_2 = VAR_1->ctx;
 int VAR_3;

 if (!VAR_2)
  return;

 if (VAR_2->tqm_mem[0]) {
  for (VAR_3 = 0; VAR_3 < VAR_1->max_q + 1; VAR_3++)
   FUNC_0(VAR_1, VAR_2->tqm_mem[VAR_3]);
  FUNC_1(VAR_2->tqm_mem[0]);
  VAR_2->tqm_mem[0] = ((void*)0);
 }

 FUNC_0(VAR_1, &VAR_2->tim_mem);
 FUNC_0(VAR_1, &VAR_2->mrav_mem);
 FUNC_0(VAR_1, &VAR_2->stat_mem);
 FUNC_0(VAR_1, &VAR_2->vnic_mem);
 FUNC_0(VAR_1, &VAR_2->cq_mem);
 FUNC_0(VAR_1, &VAR_2->srq_mem);
 FUNC_0(VAR_1, &VAR_2->qp_mem);
 VAR_2->flags &= ~VAR_0;
}
