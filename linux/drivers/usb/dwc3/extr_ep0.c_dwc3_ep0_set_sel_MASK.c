
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct usb_ctrlrequest {int wLength; } ;
struct TYPE_6__ {int maxpacket; } ;
struct dwc3_ep {TYPE_2__ endpoint; } ;
struct TYPE_7__ {int complete; int buf; int length; } ;
struct TYPE_8__ {TYPE_3__ request; struct dwc3_ep* dep; } ;
struct TYPE_5__ {int state; } ;
struct dwc3 {TYPE_4__ ep0_usb_req; int setup_buf; struct dwc3_ep** eps; int dev; TYPE_1__ gadget; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3_ep*,TYPE_4__*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dwc3 *VAR_3, struct usb_ctrlrequest *VAR_4)
{
 struct dwc3_ep *VAR_5;
 enum usb_device_state VAR_6 = VAR_3->gadget.state;
 u16 VAR_7;

 if (VAR_6 == VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4->wLength);

 if (VAR_7 != 6) {
  FUNC_1(VAR_3->dev, "Set SEL should be 6 bytes, got %d\n",
    VAR_7);
  return -VAR_0;
 }
 VAR_5 = VAR_3->eps[0];
 VAR_3->ep0_usb_req.dep = VAR_5;
 VAR_3->ep0_usb_req.request.length = VAR_5->endpoint.maxpacket;
 VAR_3->ep0_usb_req.request.buf = VAR_3->setup_buf;
 VAR_3->ep0_usb_req.request.complete = VAR_2;

 return FUNC_0(VAR_5, &VAR_3->ep0_usb_req);
}
