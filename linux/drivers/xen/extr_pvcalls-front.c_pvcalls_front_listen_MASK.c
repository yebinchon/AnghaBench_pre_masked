
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


struct TYPE_8__ {uintptr_t id; int backlog; } ;
struct TYPE_9__ {TYPE_1__ listen; } ;
struct xen_pvcalls_request {int req_id; TYPE_2__ u; int cmd; } ;
struct socket {int dummy; } ;
struct TYPE_11__ {scalar_t__ status; } ;
struct sock_mapping {TYPE_4__ passive; } ;
struct TYPE_13__ {int req_prod_pvt; } ;
struct pvcalls_bedata {TYPE_3__* rsp; int inflight_req; int irq; int socket_lock; TYPE_6__ ring; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_10__ {int ret; int req_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock_mapping*) ;
 int FUNC_1 (struct sock_mapping*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 struct xen_pvcalls_request* FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 struct pvcalls_bedata* FUNC_5 (int *) ;
 int FUNC_6 (struct pvcalls_bedata*,int*) ;
 int FUNC_7 (int ) ;
 struct sock_mapping* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*) ;
 TYPE_5__* VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int) ;

int FUNC_14(struct socket *VAR_6, int VAR_7)
{
 struct pvcalls_bedata *VAR_8;
 struct sock_mapping *VAR_9;
 struct xen_pvcalls_request *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_8(VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 VAR_8 = FUNC_5(&VAR_5->dev);

 if (VAR_9->passive.status != VAR_3) {
  FUNC_9(VAR_6);
  return -VAR_0;
 }

 FUNC_11(&VAR_8->socket_lock);
 VAR_13 = FUNC_6(VAR_8, &VAR_12);
 if (VAR_13 < 0) {
  FUNC_12(&VAR_8->socket_lock);
  FUNC_9(VAR_6);
  return VAR_13;
 }
 VAR_10 = FUNC_3(&VAR_8->ring, VAR_12);
 VAR_10->req_id = VAR_12;
 VAR_10->cmd = VAR_2;
 VAR_10->u.listen.id = (uintptr_t) VAR_9;
 VAR_10->u.listen.backlog = VAR_7;

 VAR_8->ring.req_prod_pvt++;
 FUNC_4(&VAR_8->ring, VAR_11);
 FUNC_12(&VAR_8->socket_lock);
 if (VAR_11)
  FUNC_7(VAR_8->irq);

 FUNC_13(VAR_8->inflight_req,
     FUNC_2(VAR_8->rsp[VAR_12].req_id) == VAR_12);


 FUNC_10();
 VAR_13 = VAR_8->rsp[VAR_12].ret;
 VAR_8->rsp[VAR_12].req_id = VAR_1;

 VAR_9->passive.status = VAR_4;
 FUNC_9(VAR_6);
 return VAR_13;
}
