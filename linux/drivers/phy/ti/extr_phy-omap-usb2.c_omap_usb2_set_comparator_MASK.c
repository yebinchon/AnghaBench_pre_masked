
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;
struct phy_companion {int dummy; } ;
struct omap_usb {struct phy_companion* comparator; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_phy*) ;
 int VAR_1 ;
 struct omap_usb* FUNC_1 (struct usb_phy*) ;
 struct usb_phy* FUNC_2 (int ) ;

int FUNC_3(struct phy_companion *VAR_2)
{
 struct omap_usb *VAR_3;
 struct usb_phy *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_4))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_4);
 VAR_3->comparator = VAR_2;
 return 0;
}
