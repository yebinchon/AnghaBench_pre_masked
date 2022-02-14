
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_4__ {int bitmap; } ;
struct TYPE_3__ {int lock; TYPE_2__ cid_map; int active; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct qed_hwfn *VAR_0)
{
 bool VAR_1;


 if (!VAR_0->p_rdma_info->active)
  return 0;

 FUNC_1(&VAR_0->p_rdma_info->lock);
 if (!VAR_0->p_rdma_info->cid_map.bitmap)
  VAR_1 = 0;
 else
  VAR_1 = !FUNC_0(&VAR_0->p_rdma_info->cid_map);
 FUNC_2(&VAR_0->p_rdma_info->lock);
 return VAR_1;
}
