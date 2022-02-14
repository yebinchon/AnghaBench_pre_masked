
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_rdma_info {int dev; int port; int real_cid_map; int srq_map; int tid_map; int toggle_bits; int cq_map; int dpi_map; int pd_map; int cid_map; } ;
struct qed_hwfn {struct qed_rdma_info* p_rdma_info; } ;


 scalar_t__ FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,int *,int) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_0)
{
 struct qed_rdma_info *VAR_1 = VAR_0->p_rdma_info;

 if (FUNC_0(VAR_0))
  FUNC_2(VAR_0);

 FUNC_3(VAR_0, &VAR_0->p_rdma_info->cid_map, 1);
 FUNC_3(VAR_0, &VAR_0->p_rdma_info->pd_map, 1);
 FUNC_3(VAR_0, &VAR_0->p_rdma_info->dpi_map, 1);
 FUNC_3(VAR_0, &VAR_0->p_rdma_info->cq_map, 1);
 FUNC_3(VAR_0, &VAR_0->p_rdma_info->toggle_bits, 0);
 FUNC_3(VAR_0, &VAR_0->p_rdma_info->tid_map, 1);
 FUNC_3(VAR_0, &VAR_0->p_rdma_info->srq_map, 1);
 FUNC_3(VAR_0, &VAR_0->p_rdma_info->real_cid_map, 1);

 FUNC_1(VAR_1->port);
 FUNC_1(VAR_1->dev);
}
