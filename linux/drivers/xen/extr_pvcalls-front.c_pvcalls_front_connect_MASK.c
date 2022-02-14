
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


struct TYPE_9__ {uintptr_t id; int len; int flags; int evtchn; int addr; int ref; } ;
struct TYPE_10__ {TYPE_2__ connect; } ;
struct xen_pvcalls_request {int req_id; TYPE_3__ u; int cmd; } ;
struct socket {scalar_t__ type; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_8__ {int ref; } ;
struct sock_mapping {struct socket* sock; TYPE_1__ active; } ;
struct TYPE_13__ {int req_prod_pvt; } ;
struct pvcalls_bedata {TYPE_4__* rsp; int inflight_req; int irq; int socket_lock; TYPE_6__ ring; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int ret; int req_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 int FUNC_1 (struct sock_mapping*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct xen_pvcalls_request* FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct sock_mapping*) ;
 int FUNC_6 (struct sock_mapping*,int*) ;
 struct pvcalls_bedata* FUNC_7 (int *) ;
 int FUNC_8 (struct sock_mapping*) ;
 int FUNC_9 (struct pvcalls_bedata*,int*) ;
 int FUNC_10 (int ,struct sockaddr*,int) ;
 int FUNC_11 (int ) ;
 struct sock_mapping* FUNC_12 (struct socket*) ;
 int FUNC_13 (struct socket*) ;
 TYPE_5__* VAR_5 ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int) ;

int FUNC_18(struct socket *VAR_6, struct sockaddr *VAR_7,
    int VAR_8, int VAR_9)
{
 struct pvcalls_bedata *VAR_10;
 struct sock_mapping *VAR_11 = ((void*)0);
 struct xen_pvcalls_request *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if (VAR_7->sa_family != VAR_0 || VAR_6->type != VAR_4)
  return -VAR_1;

 VAR_11 = FUNC_12(VAR_6);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_10 = FUNC_7(&VAR_5->dev);
 VAR_15 = FUNC_5(VAR_11);
 if (VAR_15 < 0) {
  FUNC_13(VAR_6);
  return VAR_15;
 }

 FUNC_15(&VAR_10->socket_lock);
 VAR_15 = FUNC_9(VAR_10, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_16(&VAR_10->socket_lock);
  FUNC_8(VAR_11);
  FUNC_13(VAR_6);
  return VAR_15;
 }
 VAR_15 = FUNC_6(VAR_11, &VAR_16);
 if (VAR_15 < 0) {
  FUNC_16(&VAR_10->socket_lock);
  FUNC_8(VAR_11);
  FUNC_13(VAR_6);
  return VAR_15;
 }

 VAR_12 = FUNC_3(&VAR_10->ring, VAR_14);
 VAR_12->req_id = VAR_14;
 VAR_12->cmd = VAR_2;
 VAR_12->u.connect.id = (uintptr_t)VAR_11;
 VAR_12->u.connect.len = VAR_8;
 VAR_12->u.connect.flags = VAR_9;
 VAR_12->u.connect.ref = VAR_11->active.ref;
 VAR_12->u.connect.evtchn = VAR_16;
 FUNC_10(VAR_12->u.connect.addr, VAR_7, sizeof(*VAR_7));

 VAR_11->sock = VAR_6;

 VAR_10->ring.req_prod_pvt++;
 FUNC_4(&VAR_10->ring, VAR_13);
 FUNC_16(&VAR_10->socket_lock);

 if (VAR_13)
  FUNC_11(VAR_10->irq);

 FUNC_17(VAR_10->inflight_req,
     FUNC_2(VAR_10->rsp[VAR_14].req_id) == VAR_14);


 FUNC_14();
 VAR_15 = VAR_10->rsp[VAR_14].ret;
 VAR_10->rsp[VAR_14].req_id = VAR_3;
 FUNC_13(VAR_6);
 return VAR_15;
}
