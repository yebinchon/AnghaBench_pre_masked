
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


struct TYPE_8__ {uintptr_t id; int len; int addr; } ;
struct TYPE_9__ {TYPE_1__ bind; } ;
struct xen_pvcalls_request {int req_id; TYPE_2__ u; int cmd; } ;
struct socket {scalar_t__ type; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_11__ {int status; int inflight_accept_req; } ;
struct sock_mapping {int active_socket; TYPE_4__ passive; struct socket* sock; } ;
struct TYPE_13__ {int req_prod_pvt; } ;
struct pvcalls_bedata {TYPE_3__* rsp; int inflight_req; int irq; int socket_lock; TYPE_6__ ring; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_10__ {int ret; int req_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 int FUNC_1 (struct sock_mapping*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct xen_pvcalls_request* FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 scalar_t__ VAR_5 ;
 struct pvcalls_bedata* FUNC_5 (int *) ;
 int FUNC_6 (struct pvcalls_bedata*,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct sockaddr*,int) ;
 int FUNC_9 (int ) ;
 struct sock_mapping* FUNC_10 (struct socket*) ;
 int FUNC_11 (struct socket*) ;
 TYPE_5__* VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int) ;

int FUNC_16(struct socket *VAR_7, struct sockaddr *VAR_8, int VAR_9)
{
 struct pvcalls_bedata *VAR_10;
 struct sock_mapping *VAR_11 = ((void*)0);
 struct xen_pvcalls_request *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if (VAR_8->sa_family != VAR_0 || VAR_7->type != VAR_5)
  return -VAR_1;

 VAR_11 = FUNC_10(VAR_7);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);
 VAR_10 = FUNC_5(&VAR_6->dev);

 FUNC_13(&VAR_10->socket_lock);
 VAR_15 = FUNC_6(VAR_10, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_14(&VAR_10->socket_lock);
  FUNC_11(VAR_7);
  return VAR_15;
 }
 VAR_12 = FUNC_3(&VAR_10->ring, VAR_14);
 VAR_12->req_id = VAR_14;
 VAR_11->sock = VAR_7;
 VAR_12->cmd = VAR_2;
 VAR_12->u.bind.id = (uintptr_t)VAR_11;
 FUNC_8(VAR_12->u.bind.addr, VAR_8, sizeof(*VAR_8));
 VAR_12->u.bind.len = VAR_9;

 FUNC_7(&VAR_11->passive.inflight_accept_req);

 VAR_11->active_socket = 0;

 VAR_10->ring.req_prod_pvt++;
 FUNC_4(&VAR_10->ring, VAR_13);
 FUNC_14(&VAR_10->socket_lock);
 if (VAR_13)
  FUNC_9(VAR_10->irq);

 FUNC_15(VAR_10->inflight_req,
     FUNC_2(VAR_10->rsp[VAR_14].req_id) == VAR_14);


 FUNC_12();
 VAR_15 = VAR_10->rsp[VAR_14].ret;
 VAR_10->rsp[VAR_14].req_id = VAR_3;

 VAR_11->passive.status = VAR_4;
 FUNC_11(VAR_7);
 return 0;
}
