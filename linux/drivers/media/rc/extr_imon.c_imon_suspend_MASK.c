
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct imon_context {int rx_urb_intf1; int rx_urb_intf0; } ;
typedef int pm_message_t ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 struct imon_context* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct imon_context *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_0->cur_altsetting->desc.bInterfaceNumber;

 if (VAR_3 == 0)
  FUNC_1(VAR_2->rx_urb_intf0);
 else
  FUNC_1(VAR_2->rx_urb_intf1);

 return 0;
}
