
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qed_iwarp_ep {scalar_t__ tcp_cid; int list_entry; int cm_info; TYPE_1__* qp; int state; } ;
struct qed_hwfn {TYPE_3__* p_rdma_info; } ;
struct TYPE_5__ {int iw_lock; int ep_free_list; } ;
struct TYPE_6__ {TYPE_2__ iwarp; } ;
struct TYPE_4__ {int * ep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct qed_hwfn *VAR_2, struct qed_iwarp_ep *VAR_3)
{
 VAR_3->state = VAR_0;
 if (VAR_3->qp)
  VAR_3->qp->ep = ((void*)0);
 VAR_3->qp = ((void*)0);
 FUNC_1(&VAR_3->cm_info, 0, sizeof(VAR_3->cm_info));

 if (VAR_3->tcp_cid == VAR_1) {



  FUNC_2(VAR_2, &VAR_3->tcp_cid);
 }
 FUNC_3(&VAR_2->p_rdma_info->iwarp.iw_lock);

 FUNC_0(&VAR_3->list_entry,
         &VAR_2->p_rdma_info->iwarp.ep_free_list);

 FUNC_4(&VAR_2->p_rdma_info->iwarp.iw_lock);
}
