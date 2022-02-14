
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int pd_map; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, u16 *VAR_2)
{
 struct qed_hwfn *VAR_3 = (struct qed_hwfn *)VAR_1;
 u32 VAR_4;
 int VAR_5;

 FUNC_0(VAR_3, VAR_0, "Alloc PD\n");


 FUNC_2(&VAR_3->p_rdma_info->lock);
 VAR_5 = FUNC_1(VAR_3,
        &VAR_3->p_rdma_info->pd_map, &VAR_4);
 FUNC_3(&VAR_3->p_rdma_info->lock);

 *VAR_2 = (u16)VAR_4;

 FUNC_0(VAR_3, VAR_0, "Alloc PD - done, rc = %d\n", VAR_5);
 return VAR_5;
}
