
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_hpriv {int dummy; } ;
struct usbhsh_ep {int dummy; } ;
struct usbhsh_device {int dummy; } ;
struct usb_host_endpoint {int dummy; } ;
struct usb_hcd {int dummy; } ;


 int FUNC_0 (struct usbhsh_hpriv*,struct usbhsh_device*) ;
 int FUNC_1 (struct usbhsh_device*) ;
 int FUNC_2 (struct usbhsh_hpriv*,struct usb_host_endpoint*) ;
 struct usbhsh_ep* FUNC_3 (struct usb_host_endpoint*) ;
 struct usbhsh_hpriv* FUNC_4 (struct usb_hcd*) ;
 struct usbhsh_device* FUNC_5 (struct usbhsh_ep*) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_0,
        struct usb_host_endpoint *VAR_1)
{
 struct usbhsh_ep *VAR_2 = FUNC_3(VAR_1);
 struct usbhsh_device *VAR_3;
 struct usbhsh_hpriv *VAR_4;





 if (!VAR_2)
  return;

 VAR_3 = FUNC_5(VAR_2);
 VAR_4 = FUNC_4(VAR_0);

 FUNC_2(VAR_4, VAR_1);





 if (!FUNC_1(VAR_3))
  FUNC_0(VAR_4, VAR_3);
}
