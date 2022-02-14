
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {int rsrc_len; int rsrc_start; int regs; TYPE_2__* usb_phy; TYPE_1__ self; } ;
struct platform_device {int dummy; } ;
struct TYPE_5__ {int otg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct usb_hcd* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (struct usb_hcd*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_2)
{
 struct usb_hcd *VAR_3 = FUNC_8(VAR_2);

 FUNC_2(VAR_3->self.controller, "stopping USB Controller\n");
 FUNC_12(VAR_3);
 FUNC_6(0);
 if (!FUNC_0(VAR_3->usb_phy)) {
  (void) FUNC_7(VAR_3->usb_phy->otg, 0);
  FUNC_11(VAR_3->usb_phy);
 }
 if (FUNC_5())
  FUNC_3(9);
 FUNC_4(VAR_3->regs);
 FUNC_9(VAR_3->rsrc_start, VAR_3->rsrc_len);
 FUNC_10(VAR_3);
 FUNC_1(VAR_0);
 FUNC_1(VAR_1);
 return 0;
}
