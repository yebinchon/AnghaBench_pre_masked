
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(FUNC_0(VAR_1));
}
