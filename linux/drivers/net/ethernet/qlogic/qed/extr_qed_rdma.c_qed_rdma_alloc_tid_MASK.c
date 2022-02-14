
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int tid_map; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, u32 *VAR_3)
{
 struct qed_hwfn *VAR_4 = (struct qed_hwfn *)VAR_2;
 int VAR_5;

 FUNC_0(VAR_4, VAR_1, "Allocate TID\n");

 FUNC_3(&VAR_4->p_rdma_info->lock);
 VAR_5 = FUNC_2(VAR_4,
        &VAR_4->p_rdma_info->tid_map, VAR_3);
 FUNC_4(&VAR_4->p_rdma_info->lock);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_1(VAR_4, VAR_0, *VAR_3);
out:
 FUNC_0(VAR_4, VAR_1, "Allocate TID - done, rc = %d\n", VAR_5);
 return VAR_5;
}
