
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int cid_map; } ;


 int FUNC_0 (struct qed_hwfn*,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_0, u16 VAR_1)
{
 FUNC_1(&VAR_0->p_rdma_info->lock);
 FUNC_0(VAR_0, &VAR_0->p_rdma_info->cid_map, VAR_1);
 FUNC_0(VAR_0, &VAR_0->p_rdma_info->cid_map, VAR_1 + 1);
 FUNC_2(&VAR_0->p_rdma_info->lock);
}
