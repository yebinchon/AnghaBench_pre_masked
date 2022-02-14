
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int controller; scalar_t__ otg_port; } ;
struct usb_hcd {int power_budget; int skip_phy_initialization; TYPE_3__ self; } ;
struct musb {scalar_t__ port_mode; TYPE_1__* xceiv; struct usb_hcd* hcd; } ;
struct TYPE_5__ {TYPE_3__* host; int state; } ;
struct TYPE_4__ {TYPE_2__* otg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct musb*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (struct usb_hcd*,int ,int ) ;

int FUNC_4(struct musb *VAR_2, int VAR_3)
{
 int VAR_4;
 struct usb_hcd *VAR_5 = VAR_2->hcd;

 if (VAR_2->port_mode == VAR_0) {
  FUNC_0(VAR_2);
  VAR_2->xceiv->otg->state = VAR_1;
 }
 FUNC_2(VAR_2->xceiv->otg, &VAR_5->self);

 VAR_5->self.otg_port = 0;
 VAR_2->xceiv->otg->host = &VAR_5->self;
 VAR_5->power_budget = 2 * (VAR_3 ? : 250);
 VAR_5->skip_phy_initialization = 1;

 VAR_4 = FUNC_3(VAR_5, 0, 0);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_5->self.controller);
 return 0;
}
