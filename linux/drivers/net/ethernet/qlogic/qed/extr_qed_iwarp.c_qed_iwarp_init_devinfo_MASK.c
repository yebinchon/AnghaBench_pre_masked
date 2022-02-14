
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_rdma_device {int max_qp_req_rd_atomic_resc; int max_qp_resp_rd_atomic_resc; scalar_t__ max_qp; scalar_t__ max_cq; int max_inline; } ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int num_qps; struct qed_rdma_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;

void FUNC_1(struct qed_hwfn *VAR_6)
{
 struct qed_rdma_device *VAR_7 = VAR_6->p_rdma_info->dev;

 VAR_7->max_inline = VAR_1;
 VAR_7->max_qp = FUNC_0(VAR_5,
       VAR_0,
       VAR_6->p_rdma_info->num_qps) -
        VAR_4;

 VAR_7->max_cq = VAR_7->max_qp;

 VAR_7->max_qp_resp_rd_atomic_resc = VAR_2;
 VAR_7->max_qp_req_rd_atomic_resc = VAR_3;
}
