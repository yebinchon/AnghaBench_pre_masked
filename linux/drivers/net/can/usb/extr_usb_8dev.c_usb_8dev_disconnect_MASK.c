
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_8dev_priv {int netdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct usb_8dev_priv*) ;
 int FUNC_3 (int ) ;
 struct usb_8dev_priv* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct usb_8dev_priv *VAR_1 = FUNC_4(VAR_0);

 FUNC_5(VAR_0, ((void*)0));

 if (VAR_1) {
  FUNC_1(VAR_1->netdev, "device disconnected\n");

  FUNC_3(VAR_1->netdev);
  FUNC_2(VAR_1);
  FUNC_0(VAR_1->netdev);
 }

}
