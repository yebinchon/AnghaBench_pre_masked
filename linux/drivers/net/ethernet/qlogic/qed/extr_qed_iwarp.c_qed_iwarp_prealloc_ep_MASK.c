
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qed_iwarp_ep {int list_entry; int tcp_cid; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int iw_lock; int ep_free_list; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct qed_hwfn*,int *) ;
 int FUNC_2 (struct qed_hwfn*,int *) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_iwarp_ep**) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_iwarp_ep*,int) ;
 int FUNC_5 (struct qed_hwfn*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct qed_hwfn *VAR_1, bool VAR_2)
{
 struct qed_iwarp_ep *VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = VAR_2 ? VAR_0 : 1;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_4 = FUNC_3(VAR_1, &VAR_3);
  if (VAR_4)
   return VAR_4;




  if (VAR_2) {
   VAR_4 = FUNC_1(VAR_1, &VAR_6);
   if (VAR_4)
    goto err;
   FUNC_5(VAR_1, VAR_6);
  } else {




   FUNC_2(VAR_1, &VAR_6);
  }

  VAR_3->tcp_cid = VAR_6;

  FUNC_6(&VAR_1->p_rdma_info->iwarp.iw_lock);
  FUNC_0(&VAR_3->list_entry,
         &VAR_1->p_rdma_info->iwarp.ep_free_list);
  FUNC_7(&VAR_1->p_rdma_info->iwarp.iw_lock);
 }

 return VAR_4;

err:
 FUNC_4(VAR_1, VAR_3, 0);

 return VAR_4;
}
