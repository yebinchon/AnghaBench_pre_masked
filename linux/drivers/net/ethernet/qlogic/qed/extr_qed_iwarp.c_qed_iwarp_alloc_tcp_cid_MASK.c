
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_4__ {int max_count; } ;
struct TYPE_3__ {int proto; TYPE_2__ tcp_cid_map; int lock; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (struct qed_hwfn*,TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_2, u32 *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_2->p_rdma_info->lock);

 VAR_4 = FUNC_2(VAR_2,
        &VAR_2->p_rdma_info->tcp_cid_map, VAR_3);

 FUNC_4(&VAR_2->p_rdma_info->lock);

 if (VAR_4) {
  FUNC_0(VAR_2, VAR_1,
      "can't allocate iwarp tcp cid max-count=%d\n",
      VAR_2->p_rdma_info->tcp_cid_map.max_count);

  *VAR_3 = VAR_0;
  return VAR_4;
 }

 *VAR_3 += FUNC_1(VAR_2,
         VAR_2->p_rdma_info->proto);
 return 0;
}
