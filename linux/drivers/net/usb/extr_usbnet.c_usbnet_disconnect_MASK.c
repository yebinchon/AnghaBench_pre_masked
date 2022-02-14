
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbnet {int stats64; int padding_pkt; int interrupt; TYPE_4__* driver_info; int deferred; int kevent; struct net_device* net; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct usb_interface {TYPE_2__ dev; } ;
struct usb_device {int devpath; TYPE_3__* bus; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int (* unbind ) (struct usbnet*,struct usb_interface*) ;int description; } ;
struct TYPE_7__ {int bus_name; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usbnet*,int ,struct net_device*,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct usbnet*,struct usb_interface*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 struct usbnet* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct usb_interface*,int *) ;

void FUNC_13 (struct usb_interface *VAR_1)
{
 struct usbnet *VAR_2;
 struct usb_device *VAR_3;
 struct net_device *VAR_4;

 VAR_2 = FUNC_9(VAR_1);
 FUNC_12(VAR_1, ((void*)0));
 if (!VAR_2)
  return;

 VAR_3 = FUNC_3 (VAR_1);

 FUNC_5(VAR_2, VAR_0, VAR_2->net, "unregister '%s' usb-%s-%s, %s\n",
     VAR_1->dev.driver->name,
     VAR_3->bus->bus_name, VAR_3->devpath,
     VAR_2->driver_info->description);

 VAR_4 = VAR_2->net;
 FUNC_7 (VAR_4);

 FUNC_0(&VAR_2->kevent);

 FUNC_11(&VAR_2->deferred);

 if (VAR_2->driver_info->unbind)
  VAR_2->driver_info->unbind (VAR_2, VAR_1);

 FUNC_10(VAR_2->interrupt);
 FUNC_8(VAR_2->interrupt);
 FUNC_4(VAR_2->padding_pkt);

 FUNC_2(VAR_2->stats64);
 FUNC_1(VAR_4);
}
