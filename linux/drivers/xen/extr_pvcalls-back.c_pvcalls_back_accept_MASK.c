
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xenbus_device {int dev; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ accept; } ;
struct xen_pvcalls_response {scalar_t__ cmd; int ret; TYPE_2__ u; int req_id; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_3__ accept; } ;
struct xen_pvcalls_request {scalar_t__ cmd; TYPE_4__ u; int req_id; } ;
struct sockpass_mapping {int register_work; int wq; int copy_lock; struct xen_pvcalls_request reqcopy; } ;
struct TYPE_10__ {int rsp_prod_pvt; } ;
struct pvcalls_fedata {TYPE_5__ ring; int socket_lock; int socketpass_mappings; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xen_pvcalls_response* FUNC_0 (TYPE_5__*,int ) ;
 struct pvcalls_fedata* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 struct sockpass_mapping* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct xenbus_device *VAR_2,
          struct xen_pvcalls_request *VAR_3)
{
 struct pvcalls_fedata *VAR_4;
 struct sockpass_mapping *VAR_5;
 int VAR_6 = -VAR_1;
 struct xen_pvcalls_response *VAR_7;
 unsigned long VAR_8;

 VAR_4 = FUNC_1(&VAR_2->dev);

 FUNC_2(&VAR_4->socket_lock);
 VAR_5 = FUNC_4(&VAR_4->socketpass_mappings,
  VAR_3->u.accept.id);
 FUNC_7(&VAR_4->socket_lock);
 if (VAR_5 == ((void*)0))
  goto out_error;





 FUNC_5(&VAR_5->copy_lock, VAR_8);
 if (VAR_5->reqcopy.cmd != 0) {
  FUNC_6(&VAR_5->copy_lock, VAR_8);
  VAR_6 = -VAR_0;
  goto out_error;
 }

 VAR_5->reqcopy = *VAR_3;
 FUNC_6(&VAR_5->copy_lock, VAR_8);
 FUNC_3(VAR_5->wq, &VAR_5->register_work);


 return -1;

out_error:
 VAR_7 = FUNC_0(&VAR_4->ring, VAR_4->ring.rsp_prod_pvt++);
 VAR_7->req_id = VAR_3->req_id;
 VAR_7->cmd = VAR_3->cmd;
 VAR_7->u.accept.id = VAR_3->u.accept.id;
 VAR_7->ret = VAR_6;
 return 0;
}
