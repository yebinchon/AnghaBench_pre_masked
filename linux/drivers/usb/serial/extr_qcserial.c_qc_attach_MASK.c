
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_intf_private {int use_send_setup; int susp_lock; } ;
struct usb_serial {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_wwan_intf_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct usb_serial*) ;
 int FUNC_3 (struct usb_serial*,struct usb_wwan_intf_private*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_2)
{
 struct usb_wwan_intf_private *VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = !!(unsigned long)(FUNC_2(VAR_2));
 if (VAR_4)
  VAR_3->use_send_setup = 1;

 FUNC_1(&VAR_3->susp_lock);

 FUNC_3(VAR_2, VAR_3);

 return 0;
}
