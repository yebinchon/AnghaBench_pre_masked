
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int lock; int cid_map; int tcp_cid_map; int proto; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_1, u32 VAR_2)
{
 VAR_2 -= FUNC_1(VAR_1, VAR_1->p_rdma_info->proto);

 FUNC_2(&VAR_1->p_rdma_info->lock);

 if (VAR_2 < VAR_0)
  FUNC_0(VAR_1, &VAR_1->p_rdma_info->tcp_cid_map,
        VAR_2);
 else
  FUNC_0(VAR_1, &VAR_1->p_rdma_info->cid_map, VAR_2);

 FUNC_3(&VAR_1->p_rdma_info->lock);
}
