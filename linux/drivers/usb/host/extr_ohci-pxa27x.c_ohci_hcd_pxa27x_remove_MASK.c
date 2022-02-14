
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct pxa27x_ohci {int dummy; } ;
struct platform_device {int dev; } ;


 struct usb_hcd* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct pxa27x_ohci*,unsigned int,int) ;
 int FUNC_2 (struct pxa27x_ohci*,int *) ;
 struct pxa27x_ohci* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_0(VAR_0);
 struct pxa27x_ohci *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3;

 FUNC_5(VAR_1);
 FUNC_2(VAR_2, &VAR_0->dev);

 for (VAR_3 = 0; VAR_3 < 3; ++VAR_3)
  FUNC_1(VAR_2, VAR_3, 0);

 FUNC_4(VAR_1);
 return 0;
}
