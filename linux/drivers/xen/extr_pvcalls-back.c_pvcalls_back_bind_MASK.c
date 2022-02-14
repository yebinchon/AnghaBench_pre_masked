
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct xenbus_device {int dev; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_12__ {TYPE_2__ bind; } ;
struct xen_pvcalls_response {int ret; TYPE_3__ u; int cmd; int req_id; } ;
struct TYPE_13__ {int id; int len; int addr; } ;
struct TYPE_14__ {TYPE_4__ bind; } ;
struct xen_pvcalls_request {TYPE_5__ u; int cmd; int req_id; } ;
struct sockpass_mapping {scalar_t__ wq; TYPE_6__* sock; int saved_data_ready; int id; struct pvcalls_fedata* fedata; int copy_lock; int register_work; } ;
struct sockaddr {int dummy; } ;
struct TYPE_16__ {int rsp_prod_pvt; } ;
struct pvcalls_fedata {TYPE_9__ ring; int socket_lock; int socketpass_mappings; } ;
struct TYPE_15__ {TYPE_1__* sk; } ;
struct TYPE_10__ {int sk_callback_lock; int sk_data_ready; struct sockpass_mapping* sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 struct xen_pvcalls_response* FUNC_1 (TYPE_9__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 struct pvcalls_fedata* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*,struct sockaddr*,int ) ;
 int FUNC_7 (struct sockpass_mapping*) ;
 struct sockpass_mapping* FUNC_8 (int,int ) ;
 int VAR_6 ;
 int FUNC_9 (int *,int ,struct sockpass_mapping*) ;
 int FUNC_10 (int ,int ,int ,TYPE_6__**) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct xenbus_device *VAR_7,
        struct xen_pvcalls_request *VAR_8)
{
 struct pvcalls_fedata *VAR_9;
 int VAR_10;
 struct sockpass_mapping *VAR_11;
 struct xen_pvcalls_response *VAR_12;

 VAR_9 = FUNC_4(&VAR_7->dev);

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 FUNC_0(&VAR_11->register_work, VAR_5);
 FUNC_12(&VAR_11->copy_lock);
 VAR_11->wq = FUNC_2("pvcalls_wq", VAR_4, 1);
 if (!VAR_11->wq) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_10(VAR_0, VAR_3, 0, &VAR_11->sock);
 if (VAR_10 < 0)
  goto out;

 VAR_10 = FUNC_6(VAR_11->sock, (struct sockaddr *)&VAR_8->u.bind.addr,
   VAR_8->u.bind.len);
 if (VAR_10 < 0)
  goto out;

 VAR_11->fedata = VAR_9;
 VAR_11->id = VAR_8->u.bind.id;

 FUNC_5(&VAR_9->socket_lock);
 VAR_10 = FUNC_9(&VAR_9->socketpass_mappings, VAR_11->id,
    VAR_11);
 FUNC_13(&VAR_9->socket_lock);
 if (VAR_10)
  goto out;

 FUNC_14(&VAR_11->sock->sk->sk_callback_lock);
 VAR_11->saved_data_ready = VAR_11->sock->sk->sk_data_ready;
 VAR_11->sock->sk->sk_user_data = VAR_11;
 VAR_11->sock->sk->sk_data_ready = VAR_6;
 FUNC_15(&VAR_11->sock->sk->sk_callback_lock);

out:
 if (VAR_10) {
  if (VAR_11 && VAR_11->sock)
   FUNC_11(VAR_11->sock);
  if (VAR_11 && VAR_11->wq)
   FUNC_3(VAR_11->wq);
  FUNC_7(VAR_11);
 }
 VAR_12 = FUNC_1(&VAR_9->ring, VAR_9->ring.rsp_prod_pvt++);
 VAR_12->req_id = VAR_8->req_id;
 VAR_12->cmd = VAR_8->cmd;
 VAR_12->u.bind.id = VAR_8->u.bind.id;
 VAR_12->ret = VAR_10;
 return 0;
}
