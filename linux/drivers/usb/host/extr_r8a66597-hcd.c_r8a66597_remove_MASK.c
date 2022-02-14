
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct r8a66597 {int clk; TYPE_1__* pdata; int reg; int rh_timer; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct r8a66597* FUNC_3 (struct platform_device*) ;
 struct usb_hcd* FUNC_4 (struct r8a66597*) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct r8a66597 *VAR_1 = FUNC_3(VAR_0);
 struct usb_hcd *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(&VAR_1->rh_timer);
 FUNC_6(VAR_2);
 FUNC_2(VAR_1->reg);
 if (VAR_1->pdata->on_chip)
  FUNC_0(VAR_1->clk);
 FUNC_5(VAR_2);
 return 0;
}
