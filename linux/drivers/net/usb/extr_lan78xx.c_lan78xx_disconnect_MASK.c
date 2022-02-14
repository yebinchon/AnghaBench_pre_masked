
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan78xx_net {int urb_intr; int deferred; int wq; struct net_device* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct lan78xx_net*,struct usb_interface*) ;
 int FUNC_5 (struct phy_device*) ;
 scalar_t__ FUNC_6 (struct phy_device*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 struct lan78xx_net* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_15(struct usb_interface *VAR_2)
{
 struct lan78xx_net *VAR_3;
 struct usb_device *VAR_4;
 struct net_device *VAR_5;
 struct phy_device *VAR_6;

 VAR_3 = FUNC_10(VAR_2);
 FUNC_14(VAR_2, ((void*)0));
 if (!VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = VAR_3->net;
 VAR_6 = VAR_5->phydev;

 FUNC_7(VAR_0, 0xfffffff0);
 FUNC_7(VAR_1, 0xfffffff0);

 FUNC_5(VAR_5->phydev);

 if (FUNC_6(VAR_6))
  FUNC_1(VAR_6);

 FUNC_8(VAR_5);

 FUNC_0(&VAR_3->wq);

 FUNC_13(&VAR_3->deferred);

 FUNC_4(VAR_3, VAR_2);

 FUNC_11(VAR_3->urb_intr);
 FUNC_9(VAR_3->urb_intr);

 FUNC_2(VAR_5);
 FUNC_12(VAR_4);
}
