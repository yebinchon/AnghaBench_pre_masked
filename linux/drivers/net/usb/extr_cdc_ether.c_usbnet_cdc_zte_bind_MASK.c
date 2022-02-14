
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2 && (VAR_0->net->dev_addr[0] & 0x02))
  FUNC_0(VAR_0->net);

 return VAR_2;
}
