
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct cdns3_endpoint {int flags; int pending_req_list; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_request* FUNC_0 (int *) ;
 int FUNC_1 (struct cdns3_endpoint*,int) ;
 int FUNC_2 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_3 (int *,int,int,int,int) ;
 int FUNC_4 (struct cdns3_endpoint*,int ,int ) ;
 int FUNC_5 (int,int *) ;

int FUNC_6(struct cdns3_endpoint *VAR_5)
{
 struct cdns3_device *VAR_6 = VAR_5->cdns3_dev;
 struct usb_request *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_4(VAR_5, 0, 0);

 FUNC_5(VAR_1 | VAR_2, &VAR_6->regs->ep_cmd);


 VAR_8 = FUNC_3(&VAR_6->regs->ep_cmd, VAR_9,
     !(VAR_9 & VAR_2), 1, 100);
 if (VAR_8)
  return -VAR_0;

 VAR_5->flags &= ~(VAR_3 | VAR_4);

 VAR_7 = FUNC_0(&VAR_5->pending_req_list);

 if (VAR_7)
  FUNC_1(VAR_5, 1);

 FUNC_2(VAR_6, VAR_5);
 return VAR_8;
}
