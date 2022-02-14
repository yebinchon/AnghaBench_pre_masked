
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dev; } ;
struct net_device {int dummy; } ;
struct eth_dev {struct usb_gadget* gadget; } ;


 int FUNC_0 (struct net_device*,int *) ;
 struct eth_dev* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0, struct usb_gadget *VAR_1)
{
 struct eth_dev *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_2->gadget = VAR_1;
 FUNC_0(VAR_0, &VAR_1->dev);
}
