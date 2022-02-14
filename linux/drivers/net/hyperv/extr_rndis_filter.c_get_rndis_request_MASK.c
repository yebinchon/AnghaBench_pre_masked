
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct rndis_set_request {int req_id; } ;
struct TYPE_3__ {scalar_t__ q_idx; } ;
struct TYPE_4__ {struct rndis_set_request set_req; } ;
struct rndis_message {TYPE_2__ msg; void* msg_len; void* ndis_msg_type; } ;
struct rndis_request {int list_ent; TYPE_1__ pkt; struct rndis_message request_msg; int wait_event; } ;
struct rndis_device {int request_lock; int req_list; int new_req_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rndis_request* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct rndis_request *FUNC_6(struct rndis_device *VAR_1,
          u32 VAR_2,
          u32 VAR_3)
{
 struct rndis_request *VAR_4;
 struct rndis_message *VAR_5;
 struct rndis_set_request *VAR_6;
 unsigned long VAR_7;

 VAR_4 = FUNC_2(sizeof(struct rndis_request), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_1(&VAR_4->wait_event);

 VAR_5 = &VAR_4->request_msg;
 VAR_5->ndis_msg_type = VAR_2;
 VAR_5->msg_len = VAR_3;

 VAR_4->pkt.q_idx = 0;






 VAR_6 = &VAR_5->msg.set_req;
 VAR_6->req_id = FUNC_0(&VAR_1->new_req_id);


 FUNC_4(&VAR_1->request_lock, VAR_7);
 FUNC_3(&VAR_4->list_ent, &VAR_1->req_list);
 FUNC_5(&VAR_1->request_lock, VAR_7);

 return VAR_4;
}
