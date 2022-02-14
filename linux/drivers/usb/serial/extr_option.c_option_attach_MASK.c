
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_wwan_intf_private {int use_send_setup; int susp_lock; } ;
struct usb_serial {TYPE_2__* interface; } ;
struct usb_interface_descriptor {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__* cur_altsetting; } ;
struct TYPE_3__ {struct usb_interface_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 struct usb_wwan_intf_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct usb_serial*) ;
 int FUNC_4 (struct usb_serial*,struct usb_wwan_intf_private*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_2)
{
 struct usb_interface_descriptor *VAR_3;
 struct usb_wwan_intf_private *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_1(sizeof(struct usb_wwan_intf_private), VAR_1);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = (unsigned long)FUNC_3(VAR_2);

 VAR_3 = &VAR_2->interface->cur_altsetting->desc;

 if (!(VAR_5 & FUNC_0(VAR_3->bInterfaceNumber)))
  VAR_4->use_send_setup = 1;

 FUNC_2(&VAR_4->susp_lock);

 FUNC_4(VAR_2, VAR_4);

 return 0;
}
