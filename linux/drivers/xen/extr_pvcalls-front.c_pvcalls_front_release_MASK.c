
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {uintptr_t id; } ;
struct TYPE_13__ {TYPE_2__ release; } ;
struct xen_pvcalls_request {int req_id; TYPE_3__ u; int cmd; } ;
struct socket {TYPE_1__* sk; } ;
struct TYPE_16__ {struct sock_mapping* accept_map; int inflight_req_id; int inflight_accept_req; } ;
struct TYPE_15__ {int inflight_conn_req; TYPE_4__* ring; } ;
struct sock_mapping {TYPE_6__ passive; int list; int refcount; TYPE_5__ active; scalar_t__ active_socket; } ;
struct TYPE_19__ {int req_prod_pvt; } ;
struct pvcalls_bedata {TYPE_7__* rsp; int socket_lock; int inflight_req; int irq; TYPE_9__ ring; } ;
struct TYPE_18__ {int dev; } ;
struct TYPE_17__ {int req_id; } ;
struct TYPE_14__ {int in_error; } ;
struct TYPE_11__ {int * sk_send_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 int FUNC_1 (struct sock_mapping*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 struct xen_pvcalls_request* FUNC_3 (TYPE_9__*,int) ;
 int FUNC_4 (TYPE_9__*,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 struct pvcalls_bedata* FUNC_8 (int *) ;
 int FUNC_9 (struct pvcalls_bedata*,int*) ;
 int FUNC_10 (struct sock_mapping*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 struct sock_mapping* FUNC_13 (struct socket*) ;
 int FUNC_14 () ;
 int FUNC_15 (struct socket*) ;
 TYPE_8__* VAR_5 ;
 int FUNC_16 (struct pvcalls_bedata*,struct sock_mapping*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct socket *VAR_6)
{
 struct pvcalls_bedata *VAR_7;
 struct sock_mapping *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 struct xen_pvcalls_request *VAR_12;

 if (VAR_6->sk == ((void*)0))
  return 0;

 VAR_8 = FUNC_13(VAR_6);
 if (FUNC_0(VAR_8)) {
  if (FUNC_1(VAR_8) == -VAR_2)
   return -VAR_1;
  else
   return 0;
 }
 VAR_7 = FUNC_8(&VAR_5->dev);

 FUNC_17(&VAR_7->socket_lock);
 VAR_11 = FUNC_9(VAR_7, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_18(&VAR_7->socket_lock);
  FUNC_15(VAR_6);
  return VAR_11;
 }
 VAR_6->sk->sk_send_head = ((void*)0);

 VAR_12 = FUNC_3(&VAR_7->ring, VAR_9);
 VAR_12->req_id = VAR_9;
 VAR_12->cmd = VAR_4;
 VAR_12->u.release.id = (uintptr_t)VAR_8;

 VAR_7->ring.req_prod_pvt++;
 FUNC_4(&VAR_7->ring, VAR_10);
 FUNC_18(&VAR_7->socket_lock);
 if (VAR_10)
  FUNC_12(VAR_7->irq);

 FUNC_19(VAR_7->inflight_req,
     FUNC_2(VAR_7->rsp[VAR_9].req_id) == VAR_9);

 if (VAR_8->active_socket) {




  VAR_8->active.ring->in_error = -VAR_0;
  FUNC_21(&VAR_8->active.inflight_conn_req);







  while (FUNC_6(&VAR_8->refcount) > 1)
   FUNC_7();

  FUNC_16(VAR_7, VAR_8);
 } else {
  FUNC_20(&VAR_7->inflight_req);
  FUNC_20(&VAR_8->passive.inflight_accept_req);

  while (FUNC_6(&VAR_8->refcount) > 1)
   FUNC_7();

  FUNC_17(&VAR_7->socket_lock);
  FUNC_11(&VAR_8->list);
  FUNC_18(&VAR_7->socket_lock);
  if (FUNC_2(VAR_8->passive.inflight_req_id) != VAR_3 &&
   FUNC_2(VAR_8->passive.inflight_req_id) != 0) {
   FUNC_16(VAR_7,
            VAR_8->passive.accept_map);
  }
  FUNC_10(VAR_8);
 }
 FUNC_5(VAR_7->rsp[VAR_9].req_id, VAR_3);

 FUNC_14();
 return 0;
}
