
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_response {int list; } ;
struct smbd_connection {int post_send_credits_work; int workqueue; int empty_packet_queue_lock; int count_empty_packet_queue; int empty_packet_queue; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  struct smbd_connection *VAR_0, struct smbd_response *VAR_1)
{
 FUNC_2(&VAR_0->empty_packet_queue_lock);
 FUNC_0(&VAR_1->list, &VAR_0->empty_packet_queue);
 VAR_0->count_empty_packet_queue++;
 FUNC_3(&VAR_0->empty_packet_queue_lock);

 FUNC_1(VAR_0->workqueue, &VAR_0->post_send_credits_work);
}
