
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {uintptr_t id; uintptr_t id_new; int evtchn; int ref; } ;
struct TYPE_13__ {TYPE_2__ accept; } ;
struct xen_pvcalls_request {int req_id; TYPE_3__ u; int cmd; } ;
struct socket {TYPE_6__* sk; } ;
struct TYPE_14__ {scalar_t__ status; int inflight_req_id; int inflight_accept_req; int flags; struct sock_mapping* accept_map; } ;
struct TYPE_11__ {int ref; } ;
struct sock_mapping {TYPE_4__ passive; struct socket* sock; TYPE_1__ active; int list; } ;
struct TYPE_18__ {int req_prod_pvt; } ;
struct pvcalls_bedata {TYPE_5__* rsp; int inflight_req; int irq; int socket_lock; TYPE_9__ ring; int socket_mappings; } ;
struct TYPE_17__ {int dev; } ;
struct TYPE_16__ {void* sk_send_head; } ;
struct TYPE_15__ {int req_id; int ret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 int VAR_5 ;
 int FUNC_1 (struct sock_mapping*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int) ;
 struct xen_pvcalls_request* FUNC_3 (TYPE_9__*,int) ;
 int FUNC_4 (TYPE_9__*,int) ;
 int VAR_10 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct sock_mapping*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (struct sock_mapping*,int*) ;
 struct pvcalls_bedata* FUNC_9 (int *) ;
 int FUNC_10 (struct sock_mapping*) ;
 int FUNC_11 (struct pvcalls_bedata*,int*) ;
 int FUNC_12 (struct sock_mapping*) ;
 struct sock_mapping* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ) ;
 struct sock_mapping* FUNC_16 (struct socket*) ;
 int FUNC_17 (struct socket*) ;
 TYPE_8__* VAR_11 ;
 int FUNC_18 (struct pvcalls_bedata*,struct sock_mapping*) ;
 int VAR_12 ;
 TYPE_6__* FUNC_19 (int ,int ,int ,int *,int) ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int ,void*) ;
 scalar_t__ FUNC_25 (int ,int) ;
 int FUNC_26 (int *) ;

int FUNC_27(struct socket *VAR_13, struct socket *VAR_14, int VAR_15)
{
 struct pvcalls_bedata *VAR_16;
 struct sock_mapping *VAR_17;
 struct sock_mapping *VAR_18 = ((void*)0);
 struct xen_pvcalls_request *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_17 = FUNC_16(VAR_13);
 if (FUNC_0(VAR_17))
  return FUNC_1(VAR_17);
 VAR_16 = FUNC_9(&VAR_11->dev);

 if (VAR_17->passive.status != VAR_9) {
  FUNC_17(VAR_13);
  return -VAR_2;
 }

 VAR_24 = VAR_15 & VAR_10;




 if (FUNC_24(VAR_7,
        (void *)&VAR_17->passive.flags)) {
  VAR_21 = FUNC_2(VAR_17->passive.inflight_req_id);
  if (VAR_21 != VAR_8 &&
      FUNC_2(VAR_16->rsp[VAR_21].req_id) == VAR_21) {
   VAR_18 = VAR_17->passive.accept_map;
   goto received;
  }
  if (VAR_24) {
   FUNC_17(VAR_13);
   return -VAR_0;
  }
  if (FUNC_25(VAR_17->passive.inflight_accept_req,
   !FUNC_24(VAR_7,
       (void *)&VAR_17->passive.flags))) {
   FUNC_17(VAR_13);
   return -VAR_1;
  }
 }

 VAR_18 = FUNC_13(sizeof(*VAR_18), VAR_4);
 if (VAR_18 == ((void*)0)) {
  FUNC_7(VAR_7,
     (void *)&VAR_17->passive.flags);
  FUNC_17(VAR_13);
  return -VAR_3;
 }
 VAR_22 = FUNC_6(VAR_18);
 if (VAR_22 < 0) {
  FUNC_7(VAR_7,
    (void *)&VAR_17->passive.flags);
  FUNC_12(VAR_18);
  FUNC_17(VAR_13);
  return VAR_22;
 }
 FUNC_22(&VAR_16->socket_lock);
 VAR_22 = FUNC_11(VAR_16, &VAR_21);
 if (VAR_22 < 0) {
  FUNC_7(VAR_7,
     (void *)&VAR_17->passive.flags);
  FUNC_23(&VAR_16->socket_lock);
  FUNC_10(VAR_18);
  FUNC_12(VAR_18);
  FUNC_17(VAR_13);
  return VAR_22;
 }

 VAR_22 = FUNC_8(VAR_18, &VAR_23);
 if (VAR_22 < 0) {
  FUNC_10(VAR_18);
  FUNC_12(VAR_18);
  FUNC_7(VAR_7,
     (void *)&VAR_17->passive.flags);
  FUNC_23(&VAR_16->socket_lock);
  FUNC_17(VAR_13);
  return VAR_22;
 }
 FUNC_14(&VAR_18->list, &VAR_16->socket_mappings);

 VAR_19 = FUNC_3(&VAR_16->ring, VAR_21);
 VAR_19->req_id = VAR_21;
 VAR_19->cmd = VAR_6;
 VAR_19->u.accept.id = (uintptr_t) VAR_17;
 VAR_19->u.accept.ref = VAR_18->active.ref;
 VAR_19->u.accept.id_new = (uintptr_t) VAR_18;
 VAR_19->u.accept.evtchn = VAR_23;
 VAR_17->passive.accept_map = VAR_18;

 VAR_16->ring.req_prod_pvt++;
 FUNC_4(&VAR_16->ring, VAR_20);
 FUNC_23(&VAR_16->socket_lock);
 if (VAR_20)
  FUNC_15(VAR_16->irq);

 if (VAR_24) {
  FUNC_5(VAR_17->passive.inflight_req_id, VAR_21);
  FUNC_17(VAR_13);
  return -VAR_0;
 }

 if (FUNC_25(VAR_16->inflight_req,
  FUNC_2(VAR_16->rsp[VAR_21].req_id) == VAR_21)) {
  FUNC_17(VAR_13);
  return -VAR_1;
 }

 FUNC_20();

received:
 VAR_18->sock = VAR_14;
 VAR_14->sk = FUNC_19(FUNC_21(VAR_13->sk), VAR_5, VAR_4, &VAR_12, 0);
 if (!VAR_14->sk) {
  VAR_16->rsp[VAR_21].req_id = VAR_8;
  VAR_17->passive.inflight_req_id = VAR_8;
  FUNC_7(VAR_7,
     (void *)&VAR_17->passive.flags);
  FUNC_18(VAR_16, VAR_18);
  FUNC_17(VAR_13);
  return -VAR_3;
 }
 VAR_14->sk->sk_send_head = (void *)VAR_18;

 VAR_22 = VAR_16->rsp[VAR_21].ret;
 VAR_16->rsp[VAR_21].req_id = VAR_8;
 VAR_17->passive.inflight_req_id = VAR_8;

 FUNC_7(VAR_7, (void *)&VAR_17->passive.flags);
 FUNC_26(&VAR_17->passive.inflight_accept_req);

 FUNC_17(VAR_13);
 return VAR_22;
}
