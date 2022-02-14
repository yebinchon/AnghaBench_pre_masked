
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_hpriv {int dummy; } ;
struct usb_hcd {int dummy; } ;


 struct usbhsh_hpriv* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct usbhsh_hpriv*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_0, char *VAR_1)
{
 struct usbhsh_hpriv *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 1;





 if (FUNC_1(VAR_2) & 0xFFFF0000)
  *VAR_1 = (1 << VAR_3);
 else
  *VAR_1 = 0;

 return !!(*VAR_1);
}
