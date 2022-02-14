
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iscsi_queue_req {int qr_list; int state; struct iscsi_cmd* cmd; } ;
struct iscsi_conn {int queues_wq; int response_queue_lock; int response_queue_list; } ;
struct iscsi_cmd {int response_queue_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct iscsi_queue_req* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(
 struct iscsi_cmd *VAR_3,
 struct iscsi_conn *VAR_4,
 u8 VAR_5)
{
 struct iscsi_queue_req *VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_6) {
  FUNC_4("Unable to allocate memory for"
   " struct iscsi_queue_req\n");
  return -VAR_0;
 }
 FUNC_0(&VAR_6->qr_list);
 VAR_6->cmd = VAR_3;
 VAR_6->state = VAR_5;

 FUNC_5(&VAR_4->response_queue_lock);
 FUNC_3(&VAR_6->qr_list, &VAR_4->response_queue_list);
 FUNC_1(&VAR_3->response_queue_count);
 FUNC_6(&VAR_4->response_queue_lock);

 FUNC_7(&VAR_4->queues_wq);
 return 0;
}
