
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_otg {int gadget; } ;
struct TYPE_2__ {int dev; struct usb_otg* otg; } ;
struct mv_otg {TYPE_1__ phy; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mv_otg *VAR_0, int VAR_1)
{
 struct usb_otg *VAR_2 = VAR_0->phy.otg;

 if (!VAR_2->gadget)
  return;

 FUNC_0(VAR_0->phy.dev, "gadget %s\n", VAR_1 ? "on" : "off");

 if (VAR_1)
  FUNC_1(VAR_2->gadget);
 else
  FUNC_2(VAR_2->gadget);
}
