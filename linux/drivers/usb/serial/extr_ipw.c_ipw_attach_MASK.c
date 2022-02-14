
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_intf_private {int susp_lock; } ;
struct usb_serial {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_wwan_intf_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial*,struct usb_wwan_intf_private*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial *VAR_2)
{
 struct usb_wwan_intf_private *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct usb_wwan_intf_private), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->susp_lock);
 FUNC_2(VAR_2, VAR_3);
 return 0;
}
