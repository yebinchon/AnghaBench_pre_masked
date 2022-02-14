
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smbd_response {int list; } ;
struct smbd_connection {scalar_t__ transport_status; scalar_t__ count_receive_queue; scalar_t__ count_empty_packet_queue; scalar_t__ receive_credit_max; int workqueue; int response_cache; int response_mempool; int request_cache; int request_mempool; TYPE_1__* id; int pd; int recv_cq; int send_cq; int mr_used_count; int wait_mr; int wait_receive_queues; scalar_t__ reassembly_data_length; int reassembly_queue_lock; int send_payload_pending; int wait_send_payload_pending; int send_pending; int wait_send_pending; int send_immediate_work; int idle_timer_work; int disconn_wait; } ;
struct TCP_Server_Info {int srv_mutex; struct smbd_connection* smbd_conn; } ;
struct TYPE_4__ {int qp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct smbd_response* FUNC_0 (struct smbd_connection*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smbd_connection*) ;
 int FUNC_4 (struct smbd_connection*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct smbd_connection*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct smbd_connection*,struct smbd_response*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int *) ;

void FUNC_26(struct TCP_Server_Info *VAR_3)
{
 struct smbd_connection *VAR_4 = VAR_3->smbd_conn;
 struct smbd_response *VAR_5;
 unsigned long VAR_6;

 if (!VAR_4) {
  FUNC_12(VAR_0, "rdma session already destroyed\n");
  return;
 }

 FUNC_12(VAR_0, "destroying rdma session\n");
 if (VAR_4->transport_status != VAR_2) {
  FUNC_20(VAR_3->smbd_conn->id);
  FUNC_12(VAR_0, "wait for transport being disconnected\n");
  FUNC_24(
   VAR_4->disconn_wait,
   VAR_4->transport_status == VAR_2);
 }

 FUNC_12(VAR_0, "destroying qp\n");
 FUNC_7(VAR_4->id->qp);
 FUNC_19(VAR_4->id);

 FUNC_12(VAR_0, "cancelling idle timer\n");
 FUNC_2(&VAR_4->idle_timer_work);
 FUNC_12(VAR_0, "cancelling send immediate work\n");
 FUNC_2(&VAR_4->send_immediate_work);

 FUNC_12(VAR_0, "wait for all send posted to IB to finish\n");
 FUNC_23(VAR_4->wait_send_pending,
  FUNC_1(&VAR_4->send_pending) == 0);
 FUNC_23(VAR_4->wait_send_payload_pending,
  FUNC_1(&VAR_4->send_payload_pending) == 0);


 FUNC_12(VAR_0, "drain the reassembly queue\n");
 do {
  FUNC_21(&VAR_4->reassembly_queue_lock, VAR_6);
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5) {
   FUNC_11(&VAR_5->list);
   FUNC_22(
    &VAR_4->reassembly_queue_lock, VAR_6);
   FUNC_17(VAR_4, VAR_5);
  } else
   FUNC_22(
    &VAR_4->reassembly_queue_lock, VAR_6);
 } while (VAR_5);
 VAR_4->reassembly_data_length = 0;

 FUNC_12(VAR_0, "free receive buffers\n");
 FUNC_23(VAR_4->wait_receive_queues,
  VAR_4->count_receive_queue + VAR_4->count_empty_packet_queue
   == VAR_4->receive_credit_max);
 FUNC_4(VAR_4);
 FUNC_12(VAR_0, "freeing mr list\n");
 FUNC_25(&VAR_4->wait_mr);
 while (FUNC_1(&VAR_4->mr_used_count)) {
  FUNC_16(&VAR_3->srv_mutex);
  FUNC_14(1000);
  FUNC_15(&VAR_3->srv_mutex);
 }
 FUNC_3(VAR_4);

 FUNC_8(VAR_4->send_cq);
 FUNC_8(VAR_4->recv_cq);
 FUNC_6(VAR_4->pd);
 FUNC_18(VAR_4->id);


 FUNC_13(VAR_4->request_mempool);
 FUNC_10(VAR_4->request_cache);

 FUNC_13(VAR_4->response_mempool);
 FUNC_10(VAR_4->response_cache);

 VAR_4->transport_status = VAR_1;

 FUNC_5(VAR_4->workqueue);
 FUNC_9(VAR_4);
}
