
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {uintptr_t id; int protocol; scalar_t__ type; int domain; } ;
struct TYPE_10__ {TYPE_2__ socket; } ;
struct xen_pvcalls_request {int req_id; TYPE_3__ u; int cmd; } ;
struct socket {scalar_t__ type; TYPE_1__* sk; } ;
struct sock_mapping {int list; } ;
struct TYPE_13__ {int req_prod_pvt; } ;
struct pvcalls_bedata {TYPE_4__* rsp; int inflight_req; int irq; int socket_lock; TYPE_6__ ring; int socket_mappings; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int ret; int req_id; } ;
struct TYPE_8__ {void* sk_send_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct xen_pvcalls_request* FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_6__*,int) ;
 scalar_t__ VAR_8 ;
 struct pvcalls_bedata* FUNC_3 (int *) ;
 int FUNC_4 (struct pvcalls_bedata*,int*) ;
 int FUNC_5 (struct sock_mapping*) ;
 struct sock_mapping* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_5__* VAR_9 ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int) ;

int FUNC_15(struct socket *VAR_10)
{
 struct pvcalls_bedata *VAR_11;
 struct sock_mapping *VAR_12 = ((void*)0);
 struct xen_pvcalls_request *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 if (VAR_10->type != VAR_8)
  return -VAR_3;

 FUNC_9();
 if (!VAR_9) {
  FUNC_10();
  return -VAR_1;
 }
 VAR_11 = FUNC_3(&VAR_9->dev);

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_4);
 if (VAR_12 == ((void*)0)) {
  FUNC_10();
  return -VAR_2;
 }

 FUNC_12(&VAR_11->socket_lock);

 VAR_16 = FUNC_4(VAR_11, &VAR_15);
 if (VAR_16 < 0) {
  FUNC_5(VAR_12);
  FUNC_13(&VAR_11->socket_lock);
  FUNC_10();
  return VAR_16;
 }







 VAR_10->sk->sk_send_head = (void *)VAR_12;
 FUNC_7(&VAR_12->list, &VAR_11->socket_mappings);

 VAR_13 = FUNC_1(&VAR_11->ring, VAR_15);
 VAR_13->req_id = VAR_15;
 VAR_13->cmd = VAR_7;
 VAR_13->u.socket.id = (uintptr_t) VAR_12;
 VAR_13->u.socket.domain = VAR_0;
 VAR_13->u.socket.type = VAR_8;
 VAR_13->u.socket.protocol = VAR_5;

 VAR_11->ring.req_prod_pvt++;
 FUNC_2(&VAR_11->ring, VAR_14);
 FUNC_13(&VAR_11->socket_lock);
 if (VAR_14)
  FUNC_8(VAR_11->irq);

 FUNC_14(VAR_11->inflight_req,
     FUNC_0(VAR_11->rsp[VAR_15].req_id) == VAR_15);


 FUNC_11();
 VAR_16 = VAR_11->rsp[VAR_15].ret;
 VAR_11->rsp[VAR_15].req_id = VAR_6;

 FUNC_10();
 return VAR_16;
}
