
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_otg {int state; TYPE_1__* host; } ;
struct TYPE_5__ {int is_a_peripheral; } ;
struct musb {int port1_status; TYPE_3__* xceiv; scalar_t__ is_active; TYPE_2__ g; int hcd; } ;
struct TYPE_6__ {struct usb_otg* otg; } ;
struct TYPE_4__ {int b_hnp_enable; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct musb*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct musb *VAR_5)
{
 struct usb_otg *VAR_6 = VAR_5->xceiv->otg;

 VAR_5->port1_status = VAR_4
   | (VAR_3 << 16);

 FUNC_1(VAR_5->hcd);
 VAR_5->is_active = 0;

 switch (VAR_5->xceiv->otg->state) {
 case 129:
  if (VAR_6->host->b_hnp_enable) {
   VAR_5->xceiv->otg->state = VAR_0;
   VAR_5->g.is_a_peripheral = 1;
   break;
  }

 case 130:
  VAR_5->xceiv->otg->state = VAR_1;
  VAR_5->is_active = 0;
  break;
 case 128:
  VAR_5->xceiv->otg->state = VAR_2;
  break;
 default:
  FUNC_0(VAR_5, "host disconnect (%s)",
   FUNC_2(VAR_5->xceiv->otg->state));
 }
}
