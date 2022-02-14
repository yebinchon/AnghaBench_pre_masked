
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; int net; } ;
struct usb_interface {int dummy; } ;
struct smsc75xx_priv {int set_multicast; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct smsc75xx_priv*) ;
 int FUNC_2 (struct usbnet*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_1, struct usb_interface *VAR_2)
{
 struct smsc75xx_priv *VAR_3 = (struct smsc75xx_priv *)(VAR_1->data[0]);
 if (VAR_3) {
  FUNC_0(&VAR_3->set_multicast);
  FUNC_2(VAR_1, VAR_0, VAR_1->net, "free pdata\n");
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
  VAR_1->data[0] = 0;
 }
}
