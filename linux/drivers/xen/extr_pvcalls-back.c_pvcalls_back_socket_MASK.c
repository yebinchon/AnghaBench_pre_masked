
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
struct TYPE_7__ {TYPE_1__ socket; } ;
struct xen_pvcalls_response {int ret; TYPE_2__ u; int cmd; int req_id; } ;
struct TYPE_8__ {scalar_t__ domain; scalar_t__ type; scalar_t__ protocol; int id; } ;
struct TYPE_9__ {TYPE_3__ socket; } ;
struct xen_pvcalls_request {TYPE_4__ u; int cmd; int req_id; } ;
struct TYPE_10__ {int rsp_prod_pvt; } ;
struct pvcalls_fedata {TYPE_5__ ring; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xen_pvcalls_response* FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ VAR_3 ;
 struct pvcalls_fedata* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct xenbus_device *VAR_4,
  struct xen_pvcalls_request *VAR_5)
{
 struct pvcalls_fedata *VAR_6;
 int VAR_7;
 struct xen_pvcalls_response *VAR_8;

 VAR_6 = FUNC_1(&VAR_4->dev);

 if (VAR_5->u.socket.domain != VAR_0 ||
     VAR_5->u.socket.type != VAR_3 ||
     (VAR_5->u.socket.protocol != VAR_2 &&
      VAR_5->u.socket.protocol != VAR_0))
  VAR_7 = -VAR_1;
 else
  VAR_7 = 0;



 VAR_8 = FUNC_0(&VAR_6->ring, VAR_6->ring.rsp_prod_pvt++);
 VAR_8->req_id = VAR_5->req_id;
 VAR_8->cmd = VAR_5->cmd;
 VAR_8->u.socket.id = VAR_5->u.socket.id;
 VAR_8->ret = VAR_7;

 return 0;
}
