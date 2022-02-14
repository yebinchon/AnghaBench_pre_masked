
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qed_iwarp_ep {int cb_context; int (* event_cb ) (int ,struct qed_iwarp_cm_event_params*) ;int list_entry; int state; int cm_info; int qp; } ;
struct qed_iwarp_cm_event_params {int status; int * cm_info; struct qed_iwarp_ep* ep_context; int event; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int iw_lock; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qed_hwfn*,int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct qed_iwarp_cm_event_params*) ;

__attribute__((used)) static void FUNC_6(struct qed_hwfn *VAR_5,
      struct qed_iwarp_ep *VAR_6,
      u8 VAR_7)
{
 struct qed_iwarp_cm_event_params VAR_8;

 FUNC_1(VAR_5, VAR_6->qp, VAR_4, 1);

 VAR_8.event = VAR_3;
 VAR_8.ep_context = VAR_6;
 VAR_8.cm_info = &VAR_6->cm_info;
 VAR_8.status = (VAR_7 == VAR_1) ?
    0 : -VAR_0;


 FUNC_2(&VAR_6->state, VAR_2);

 FUNC_3(&VAR_5->p_rdma_info->iwarp.iw_lock);
 FUNC_0(&VAR_6->list_entry);
 FUNC_4(&VAR_5->p_rdma_info->iwarp.iw_lock);

 VAR_6->event_cb(VAR_6->cb_context, &VAR_8);
}
