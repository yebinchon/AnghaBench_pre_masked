
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_rdma_query_qp_out_params {int state; } ;
struct qed_rdma_qp {int iwarp_state; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct qed_rdma_qp *VAR_0,
     struct qed_rdma_query_qp_out_params *VAR_1)
{
 VAR_1->state = FUNC_0(VAR_0->iwarp_state);
}
