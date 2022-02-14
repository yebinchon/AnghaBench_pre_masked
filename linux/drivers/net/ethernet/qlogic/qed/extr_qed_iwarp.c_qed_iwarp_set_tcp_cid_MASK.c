
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int tcp_cid_map; int proto; } ;


 int FUNC_0 (struct qed_hwfn*,int *,int ) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_0, u32 VAR_1)
{
 VAR_1 -= FUNC_1(VAR_0, VAR_0->p_rdma_info->proto);

 FUNC_2(&VAR_0->p_rdma_info->lock);
 FUNC_0(VAR_0, &VAR_0->p_rdma_info->tcp_cid_map, VAR_1);
 FUNC_3(&VAR_0->p_rdma_info->lock);
}
