
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; int addr; } ;
struct smbd_response {int list; TYPE_2__ sge; } ;
struct smbd_connection {int post_send_credits_work; int workqueue; int receive_queue_lock; int count_put_receive_buffer; int count_receive_queue; int receive_queue; TYPE_1__* id; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(
 struct smbd_connection *VAR_1, struct smbd_response *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(VAR_1->id->device, VAR_2->sge.addr,
  VAR_2->sge.length, VAR_0);

 FUNC_3(&VAR_1->receive_queue_lock, VAR_3);
 FUNC_1(&VAR_2->list, &VAR_1->receive_queue);
 VAR_1->count_receive_queue++;
 VAR_1->count_put_receive_buffer++;
 FUNC_4(&VAR_1->receive_queue_lock, VAR_3);

 FUNC_2(VAR_1->workqueue, &VAR_1->post_send_credits_work);
}
