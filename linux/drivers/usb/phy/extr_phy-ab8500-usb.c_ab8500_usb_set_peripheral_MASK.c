
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_otg {int usb_phy; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct ab8500_usb {scalar_t__ mode; int phy_dis_work; TYPE_2__ phy; } ;
struct TYPE_3__ {struct usb_gadget* gadget; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ab8500_usb* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct usb_otg *VAR_2,
     struct usb_gadget *VAR_3)
{
 struct ab8500_usb *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2->usb_phy);

 VAR_4->phy.otg->gadget = VAR_3;






 if ((VAR_4->mode != VAR_1) && !VAR_3) {
  VAR_4->mode = VAR_1;
  FUNC_1(&VAR_4->phy_dis_work);
 }

 return 0;
}
