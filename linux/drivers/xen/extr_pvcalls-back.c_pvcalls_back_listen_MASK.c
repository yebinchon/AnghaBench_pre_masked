
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
struct TYPE_7__ {TYPE_1__ listen; } ;
struct xen_pvcalls_response {int ret; TYPE_2__ u; int cmd; int req_id; } ;
struct TYPE_8__ {int id; int backlog; } ;
struct TYPE_9__ {TYPE_3__ listen; } ;
struct xen_pvcalls_request {TYPE_4__ u; int cmd; int req_id; } ;
struct sockpass_mapping {int sock; } ;
struct TYPE_10__ {int rsp_prod_pvt; } ;
struct pvcalls_fedata {TYPE_5__ ring; int socket_lock; int socketpass_mappings; } ;


 int VAR_0 ;
 struct xen_pvcalls_response* FUNC_0 (TYPE_5__*,int ) ;
 struct pvcalls_fedata* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct sockpass_mapping* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct xenbus_device *VAR_1,
          struct xen_pvcalls_request *VAR_2)
{
 struct pvcalls_fedata *VAR_3;
 int VAR_4 = -VAR_0;
 struct sockpass_mapping *VAR_5;
 struct xen_pvcalls_response *VAR_6;

 VAR_3 = FUNC_1(&VAR_1->dev);

 FUNC_2(&VAR_3->socket_lock);
 VAR_5 = FUNC_4(&VAR_3->socketpass_mappings, VAR_2->u.listen.id);
 FUNC_5(&VAR_3->socket_lock);
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_4 = FUNC_3(VAR_5->sock, VAR_2->u.listen.backlog);

out:
 VAR_6 = FUNC_0(&VAR_3->ring, VAR_3->ring.rsp_prod_pvt++);
 VAR_6->req_id = VAR_2->req_id;
 VAR_6->cmd = VAR_2->cmd;
 VAR_6->u.listen.id = VAR_2->u.listen.id;
 VAR_6->ret = VAR_4;
 return 0;
}
