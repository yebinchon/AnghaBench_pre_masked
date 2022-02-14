
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int regs; } ;
struct tmio_hcd {int ccr; } ;
struct platform_device {int dummy; } ;
struct mfd_cell {int (* disable ) (struct platform_device*) ;} ;


 struct tmio_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ) ;
 struct mfd_cell* FUNC_2 (struct platform_device*) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_3(VAR_0);
 struct tmio_hcd *VAR_2 = FUNC_0(VAR_1);
 const struct mfd_cell *VAR_3 = FUNC_2(VAR_0);

 FUNC_7(VAR_1);
 FUNC_5(VAR_0);
 if (VAR_3->disable)
  VAR_3->disable(VAR_0);
 FUNC_1(VAR_1->regs);
 FUNC_1(VAR_2->ccr);
 FUNC_6(VAR_1);

 return 0;
}
