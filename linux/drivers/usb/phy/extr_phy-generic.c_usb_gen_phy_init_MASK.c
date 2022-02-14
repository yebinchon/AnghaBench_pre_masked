
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_generic {int clk; int vcc; } ;
struct usb_phy {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct usb_phy_generic* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_phy_generic*) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct usb_phy *VAR_0)
{
 struct usb_phy_generic *VAR_1 = FUNC_3(VAR_0->dev);
 int VAR_2;

 if (!FUNC_0(VAR_1->vcc)) {
  if (FUNC_5(VAR_1->vcc))
   FUNC_2(VAR_0->dev, "Failed to enable power\n");
 }

 if (!FUNC_0(VAR_1->clk)) {
  VAR_2 = FUNC_1(VAR_1->clk);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_4(VAR_1);

 return 0;
}
