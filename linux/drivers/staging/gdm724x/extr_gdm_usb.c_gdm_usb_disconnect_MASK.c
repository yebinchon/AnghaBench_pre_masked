
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct phy_dev {struct phy_dev* priv_dev; } ;
struct lte_udev {struct lte_udev* priv_dev; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct phy_dev*) ;
 int FUNC_2 (struct phy_dev*) ;
 int FUNC_3 (struct phy_dev*) ;
 struct phy_dev* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_device*) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct phy_dev *VAR_1;
 struct lte_udev *VAR_2;
 struct usb_device *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 VAR_1 = FUNC_4(VAR_0);

 VAR_2 = VAR_1->priv_dev;
 FUNC_3(VAR_1);

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);
 VAR_2 = ((void*)0);

 FUNC_1(VAR_1);
 VAR_1 = ((void*)0);

 FUNC_5(VAR_3);
}
