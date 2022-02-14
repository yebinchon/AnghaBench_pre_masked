
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int tid_map; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, u32 VAR_2)
{
 struct qed_hwfn *VAR_3 = (struct qed_hwfn *)VAR_1;

 FUNC_0(VAR_3, VAR_0, "itid = %08x\n", VAR_2);

 FUNC_2(&VAR_3->p_rdma_info->lock);
 FUNC_1(VAR_3, &VAR_3->p_rdma_info->tid_map, VAR_2);
 FUNC_3(&VAR_3->p_rdma_info->lock);
}
