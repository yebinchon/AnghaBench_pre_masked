
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct TYPE_5__ {scalar_t__ dead_node; int reco_master; } ;
struct TYPE_6__ {TYPE_2__ ral; } ;
struct dlm_work_item {int list; TYPE_3__ u; } ;
struct dlm_lock_request {scalar_t__ dead_node; int node_idx; } ;
struct TYPE_4__ {scalar_t__ dead_node; } ;
struct dlm_ctxt {int dispatched_work; int dlm_worker; int work_lock; int work_list; TYPE_1__ reco; int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dlm_ctxt*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_work_item*,int ,char*) ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (struct dlm_ctxt*) ;
 int VAR_4 ;
 int FUNC_6 (struct dlm_work_item*) ;
 struct dlm_work_item* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct o2net_msg *VAR_5, u32 VAR_6, void *VAR_7,
      void **VAR_8)
{
 struct dlm_ctxt *VAR_9 = VAR_7;
 struct dlm_lock_request *VAR_10 = (struct dlm_lock_request *)VAR_5->buf;
 char *VAR_11 = ((void*)0);
 struct dlm_work_item *VAR_12 = ((void*)0);

 if (!FUNC_2(VAR_9))
  return -VAR_0;

 if (VAR_10->dead_node != VAR_9->reco.dead_node) {
  FUNC_9(VAR_3, "%s: node %u sent dead_node=%u, but local "
       "dead_node is %u\n", VAR_9->name, VAR_10->node_idx,
       VAR_10->dead_node, VAR_9->reco.dead_node);
  FUNC_4(VAR_9);

  FUNC_5(VAR_9);
  return -VAR_1;
 }
 FUNC_0(VAR_10->dead_node != VAR_9->reco.dead_node);

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  FUNC_5(VAR_9);
  return -VAR_1;
 }


 VAR_11 = (char *) FUNC_1(VAR_2);
 if (!VAR_11) {
  FUNC_6(VAR_12);
  FUNC_5(VAR_9);
  return -VAR_1;
 }


 FUNC_2(VAR_9);
 FUNC_3(VAR_9, VAR_12, VAR_4, VAR_11);
 VAR_12->u.ral.reco_master = VAR_10->node_idx;
 VAR_12->u.ral.dead_node = VAR_10->dead_node;
 FUNC_11(&VAR_9->work_lock);
 FUNC_8(&VAR_12->list, &VAR_9->work_list);
 FUNC_12(&VAR_9->work_lock);
 FUNC_10(VAR_9->dlm_worker, &VAR_9->dispatched_work);

 FUNC_5(VAR_9);
 return 0;
}
