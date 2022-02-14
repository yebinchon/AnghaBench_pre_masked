
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct usb_hcd {int dummy; } ;
struct dwc2_hsotg {int lock; int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dwc2_hsotg*,struct usb_host_endpoint*) ;
 struct dwc2_hsotg* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_0,
         struct usb_host_endpoint *VAR_1)
{
 struct dwc2_hsotg *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_0(VAR_2->dev,
  "DWC OTG HCD EP RESET: bEndpointAddress=0x%02x\n",
  VAR_1->desc.bEndpointAddress);

 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_1(VAR_2, VAR_1);
 FUNC_4(&VAR_2->lock, VAR_3);
}
