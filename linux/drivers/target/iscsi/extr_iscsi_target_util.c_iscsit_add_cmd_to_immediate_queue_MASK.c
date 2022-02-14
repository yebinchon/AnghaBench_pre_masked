
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsi_queue_req {int qr_list; int state; struct iscsi_cmd* cmd; } ;
struct iscsi_conn {int queues_wq; int immed_queue_lock; int check_immediate_queue; int immed_queue_list; } ;
struct iscsi_cmd {int immed_queue_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct iscsi_queue_req* FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(
 struct iscsi_cmd *VAR_2,
 struct iscsi_conn *VAR_3,
 u8 VAR_4)
{
 struct iscsi_queue_req *VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_5) {
  FUNC_5("Unable to allocate memory for"
    " struct iscsi_queue_req\n");
  return;
 }
 FUNC_0(&VAR_5->qr_list);
 VAR_5->cmd = VAR_2;
 VAR_5->state = VAR_4;

 FUNC_6(&VAR_3->immed_queue_lock);
 FUNC_4(&VAR_5->qr_list, &VAR_3->immed_queue_list);
 FUNC_1(&VAR_2->immed_queue_count);
 FUNC_2(&VAR_3->check_immediate_queue, 1);
 FUNC_7(&VAR_3->immed_queue_lock);

 FUNC_8(&VAR_3->queues_wq);
}
