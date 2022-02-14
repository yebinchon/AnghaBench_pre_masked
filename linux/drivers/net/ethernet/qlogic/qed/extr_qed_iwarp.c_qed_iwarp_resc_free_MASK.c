
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_iwarp_info {int mpa_intermediate_buf; int partial_fpdus; int mpa_bufs; } ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int tcp_cid_map; struct qed_iwarp_info iwarp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,int *,int) ;

void FUNC_3(struct qed_hwfn *VAR_0)
{
 struct qed_iwarp_info *VAR_1 = &VAR_0->p_rdma_info->iwarp;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0, &VAR_0->p_rdma_info->tcp_cid_map, 1);
 FUNC_0(VAR_1->mpa_bufs);
 FUNC_0(VAR_1->partial_fpdus);
 FUNC_0(VAR_1->mpa_intermediate_buf);
}
