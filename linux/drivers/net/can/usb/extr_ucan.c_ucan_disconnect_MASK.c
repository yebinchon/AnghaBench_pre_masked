
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ucan_priv {int netdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ucan_priv* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct ucan_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0, ((void*)0));

 if (VAR_1) {
  FUNC_1(VAR_1->netdev);
  FUNC_0(VAR_1->netdev);
 }
}
