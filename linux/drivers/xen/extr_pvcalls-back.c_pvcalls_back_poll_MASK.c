
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xenbus_device {int dev; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_2__ poll; } ;
struct xen_pvcalls_response {scalar_t__ cmd; int ret; TYPE_3__ u; int req_id; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_11__ {TYPE_4__ poll; } ;
struct xen_pvcalls_request {scalar_t__ cmd; TYPE_5__ u; int req_id; } ;
struct sockpass_mapping {int copy_lock; struct xen_pvcalls_request reqcopy; TYPE_1__* sock; } ;
struct request_sock_queue {int rskq_accept_head; } ;
struct TYPE_12__ {int rsp_prod_pvt; } ;
struct pvcalls_fedata {TYPE_6__ ring; int socket_lock; int socketpass_mappings; } ;
struct inet_connection_sock {struct request_sock_queue icsk_accept_queue; } ;
struct TYPE_7__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 struct xen_pvcalls_response* FUNC_1 (TYPE_6__*,int ) ;
 struct pvcalls_fedata* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct inet_connection_sock* FUNC_4 (int ) ;
 struct sockpass_mapping* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_2,
        struct xen_pvcalls_request *VAR_3)
{
 struct pvcalls_fedata *VAR_4;
 struct sockpass_mapping *VAR_5;
 struct xen_pvcalls_response *VAR_6;
 struct inet_connection_sock *VAR_7;
 struct request_sock_queue *VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 bool VAR_11;

 VAR_4 = FUNC_2(&VAR_2->dev);

 FUNC_3(&VAR_4->socket_lock);
 VAR_5 = FUNC_5(&VAR_4->socketpass_mappings,
        VAR_3->u.poll.id);
 FUNC_8(&VAR_4->socket_lock);
 if (VAR_5 == ((void*)0))
  return -VAR_1;





 FUNC_6(&VAR_5->copy_lock, VAR_9);
 if (VAR_5->reqcopy.cmd != 0) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_5->reqcopy = *VAR_3;
 VAR_7 = FUNC_4(VAR_5->sock->sk);
 VAR_8 = &VAR_7->icsk_accept_queue;
 VAR_11 = FUNC_0(VAR_8->rskq_accept_head) != ((void*)0);
 if (VAR_11) {
  VAR_5->reqcopy.cmd = 0;
  VAR_10 = 0;
  goto out;
 }
 FUNC_7(&VAR_5->copy_lock, VAR_9);


 return -1;

out:
 FUNC_7(&VAR_5->copy_lock, VAR_9);

 VAR_6 = FUNC_1(&VAR_4->ring, VAR_4->ring.rsp_prod_pvt++);
 VAR_6->req_id = VAR_3->req_id;
 VAR_6->cmd = VAR_3->cmd;
 VAR_6->u.poll.id = VAR_3->u.poll.id;
 VAR_6->ret = VAR_10;
 return 0;
}
