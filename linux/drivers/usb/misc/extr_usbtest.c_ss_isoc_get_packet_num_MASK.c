
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bMaxBurst; int bmAttributes; } ;
struct usb_host_endpoint {TYPE_1__ ss_ep_comp; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct usb_host_endpoint* FUNC_1 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_0, int VAR_1)
{
 struct usb_host_endpoint *VAR_2 = FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_2->ss_ep_comp.bmAttributes)
  * (1 + VAR_2->ss_ep_comp.bMaxBurst);
}
