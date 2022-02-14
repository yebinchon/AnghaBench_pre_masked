
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int irq; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 struct usb_hcd* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_0->dev, "stopping GRLIB GRUSBHC EHCI USB Controller\n");

 FUNC_4(VAR_1);

 FUNC_1(VAR_1->irq);

 FUNC_3(VAR_1);

 return 0;
}
