
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_4__ {int iw_lock; int ep_free_list; } ;
struct TYPE_3__ {TYPE_2__ iwarp; int tcp_cid_map; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,int) ;
 int FUNC_3 (struct qed_hwfn*) ;
 int FUNC_4 (struct qed_hwfn*,int *,int ,char*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct qed_hwfn *VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_4(VAR_2, &VAR_2->p_rdma_info->tcp_cid_map,
     VAR_0, "TCP_CID");
 if (VAR_3) {
  FUNC_0(VAR_2, VAR_1,
      "Failed to allocate tcp cid, rc = %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_1(&VAR_2->p_rdma_info->iwarp.ep_free_list);
 FUNC_5(&VAR_2->p_rdma_info->iwarp.iw_lock);

 VAR_3 = FUNC_2(VAR_2, 1);
 if (VAR_3)
  return VAR_3;

 return FUNC_3(VAR_2);
}
