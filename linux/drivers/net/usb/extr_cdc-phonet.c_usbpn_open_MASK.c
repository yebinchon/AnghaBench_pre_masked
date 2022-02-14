
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbpn_dev {struct urb** urbs; int active_setting; int usb; TYPE_3__* data_intf; } ;
struct urb {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {unsigned int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbpn_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct usbpn_dev*,struct urb*,int ) ;
 unsigned int VAR_2 ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (int ,unsigned int,int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct usbpn_dev *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;
 unsigned VAR_6;
 unsigned VAR_7 = VAR_4->data_intf->cur_altsetting->desc.bInterfaceNumber;

 VAR_5 = FUNC_5(VAR_4->usb, VAR_7, VAR_4->active_setting);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct urb *VAR_8 = FUNC_3(0, VAR_1);

  if (!VAR_8 || FUNC_2(VAR_4, VAR_8, VAR_1)) {
   FUNC_4(VAR_8);
   FUNC_6(VAR_3);
   return -VAR_0;
  }
  VAR_4->urbs[VAR_6] = VAR_8;
 }

 FUNC_1(VAR_3);
 return 0;
}
