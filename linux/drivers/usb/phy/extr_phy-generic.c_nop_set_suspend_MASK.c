
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_generic {int clk; } ;
struct usb_phy {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct usb_phy_generic* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_phy *VAR_0, int VAR_1)
{
 struct usb_phy_generic *VAR_2 = FUNC_3(VAR_0->dev);

 if (!FUNC_0(VAR_2->clk)) {
  if (VAR_1)
   FUNC_1(VAR_2->clk);
  else
   FUNC_2(VAR_2->clk);
 }

 return 0;
}
