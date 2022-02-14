
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_2__* driver_info; int udev; int out; int in; TYPE_1__* net; int hard_mtu; } ;
struct usb_interface {int dummy; } ;
struct TYPE_4__ {int out; int in; } ;
struct TYPE_3__ {int hard_header_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_1, struct usb_interface *VAR_2)
{
 VAR_1->hard_mtu = VAR_0;
 VAR_1->net->hard_header_len += 4;
 VAR_1->in = FUNC_0(VAR_1->udev, VAR_1->driver_info->in);
 VAR_1->out = FUNC_1(VAR_1->udev, VAR_1->driver_info->out);
 return 0;
}
