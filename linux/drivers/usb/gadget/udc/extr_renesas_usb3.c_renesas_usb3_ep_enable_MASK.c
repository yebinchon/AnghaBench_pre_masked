
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct renesas_usb3_ep {int dummy; } ;


 int FUNC_0 (struct renesas_usb3_ep*,struct usb_endpoint_descriptor const*) ;
 struct renesas_usb3_ep* FUNC_1 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_2(struct usb_ep *VAR_0,
      const struct usb_endpoint_descriptor *VAR_1)
{
 struct renesas_usb3_ep *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
