
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usb_request {int list; } ;
struct cdns3_endpoint {int pending_req_list; } ;
struct cdns3_device {TYPE_1__* regs; int ep0_stage; struct cdns3_endpoint** eps; } ;
struct TYPE_2__ {int ep_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cdns3_device*,int) ;
 struct usb_request* FUNC_1 (int *) ;
 int FUNC_2 (struct cdns3_device*) ;
 int FUNC_3 (struct cdns3_device*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cdns3_endpoint*,scalar_t__,int ) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static void FUNC_7(struct cdns3_device *VAR_4,
         u8 VAR_5, u8 VAR_6)
{
 struct cdns3_endpoint *VAR_7 = VAR_4->eps[0];
 struct usb_request *VAR_8;

 VAR_8 = FUNC_1(&VAR_7->pending_req_list);
 if (VAR_8)
  FUNC_4(&VAR_8->list);

 if (VAR_5) {
  FUNC_5(VAR_7, VAR_5, 0);

  FUNC_3(VAR_4, 0x00);
  FUNC_6(VAR_3, &VAR_4->regs->ep_cmd);
 } else {
  FUNC_2(VAR_4);
 }

 VAR_4->ep0_stage = VAR_0;
 FUNC_6((VAR_6 ? VAR_1 : 0) | VAR_2,
        &VAR_4->regs->ep_cmd);

 FUNC_0(VAR_4, 1);
}
