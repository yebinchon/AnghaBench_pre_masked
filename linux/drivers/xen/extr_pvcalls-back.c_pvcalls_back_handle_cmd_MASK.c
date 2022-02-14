
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dev; } ;
struct xen_pvcalls_response {int cmd; int ret; int req_id; } ;
struct xen_pvcalls_request {int cmd; int req_id; } ;
struct TYPE_2__ {int rsp_prod_pvt; } ;
struct pvcalls_fedata {TYPE_1__ ring; } ;


 int VAR_0 ;







 struct xen_pvcalls_response* FUNC_0 (TYPE_1__*,int ) ;
 struct pvcalls_fedata* FUNC_1 (int *) ;
 int FUNC_2 (struct xenbus_device*,struct xen_pvcalls_request*) ;
 int FUNC_3 (struct xenbus_device*,struct xen_pvcalls_request*) ;
 int FUNC_4 (struct xenbus_device*,struct xen_pvcalls_request*) ;
 int FUNC_5 (struct xenbus_device*,struct xen_pvcalls_request*) ;
 int FUNC_6 (struct xenbus_device*,struct xen_pvcalls_request*) ;
 int FUNC_7 (struct xenbus_device*,struct xen_pvcalls_request*) ;
 int FUNC_8 (struct xenbus_device*,struct xen_pvcalls_request*) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_1,
       struct xen_pvcalls_request *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_3 = FUNC_8(VAR_1, VAR_2);
  break;
 case 132:
  VAR_3 = FUNC_4(VAR_1, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_7(VAR_1, VAR_2);
  break;
 case 133:
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;
 case 131:
  VAR_3 = FUNC_5(VAR_1, VAR_2);
  break;
 case 134:
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  break;
 case 130:
  VAR_3 = FUNC_6(VAR_1, VAR_2);
  break;
 default:
 {
  struct pvcalls_fedata *VAR_4;
  struct xen_pvcalls_response *VAR_5;

  VAR_4 = FUNC_1(&VAR_1->dev);
  VAR_5 = FUNC_0(
    &VAR_4->ring, VAR_4->ring.rsp_prod_pvt++);
  VAR_5->req_id = VAR_2->req_id;
  VAR_5->cmd = VAR_2->cmd;
  VAR_5->ret = -VAR_0;
  break;
 }
 }
 return VAR_3;
}
