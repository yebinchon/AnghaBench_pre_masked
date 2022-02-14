
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {scalar_t__ regs; TYPE_1__ self; } ;
struct usb_ehci_pdata {scalar_t__ caps_offset; } ;
struct platform_device {int dev; } ;
struct ehci_hcd {scalar_t__ caps; } ;


 scalar_t__ VAR_0 ;
 struct usb_ehci_pdata* FUNC_0 (int *) ;
 int FUNC_1 (struct usb_hcd*) ;
 struct ehci_hcd* FUNC_2 (struct usb_hcd*) ;
 struct platform_device* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_3(VAR_1->self.controller);
 struct usb_ehci_pdata *VAR_3 = FUNC_0(&VAR_2->dev);
 struct ehci_hcd *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5;


 VAR_5 = 128 | (128 << 16);
 FUNC_4(VAR_5, VAR_1->regs + VAR_0);

 VAR_4->caps = VAR_1->regs + VAR_3->caps_offset;
 return FUNC_1(VAR_1);
}
