
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_roothub {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct usb_phy_roothub*) ;
 int FUNC_2 (struct usb_phy_roothub*) ;
 int FUNC_3 (struct usb_phy_roothub*) ;

int FUNC_4(struct device *VAR_0,
      struct usb_phy_roothub *VAR_1)
{
 int VAR_2;


 if (!FUNC_0(VAR_0)) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);


 if (VAR_2 && !FUNC_0(VAR_0))
  FUNC_1(VAR_1);

 return VAR_2;
}
