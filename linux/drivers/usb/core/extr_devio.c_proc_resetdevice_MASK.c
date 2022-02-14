
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* driver; } ;
struct usb_interface {TYPE_5__ dev; TYPE_3__* cur_altsetting; } ;
struct TYPE_8__ {int bNumInterfaces; } ;
struct usb_host_config {struct usb_interface** interface; TYPE_1__ desc; } ;
struct usb_dev_state {TYPE_6__* dev; int ifclaimed; scalar_t__ privileges_dropped; } ;
struct TYPE_14__ {int comm; } ;
struct TYPE_13__ {int dev; struct usb_host_config* actconfig; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_9__ {int bInterfaceNumber; } ;
struct TYPE_10__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 TYPE_7__* VAR_1 ;
 int FUNC_0 (int *,char*,int,int ,int ) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_4(struct usb_dev_state *VAR_2)
{
 struct usb_host_config *VAR_3 = VAR_2->dev->actconfig;
 struct usb_interface *VAR_4;
 int VAR_5, VAR_6;





 if (VAR_2->privileges_dropped && VAR_3) {
  for (VAR_5 = 0; VAR_5 < VAR_3->desc.bNumInterfaces; ++VAR_5) {
   VAR_4 = VAR_3->interface[VAR_5];
   VAR_6 = VAR_4->cur_altsetting->desc.bInterfaceNumber;
   if (FUNC_2(VAR_4) &&
     !FUNC_1(VAR_6, &VAR_2->ifclaimed)) {
    FUNC_0(&VAR_2->dev->dev,
     "usbfs: interface %d claimed by %s while '%s' resets device\n",
     VAR_6, VAR_4->dev.driver->name, VAR_1->comm);
    return -VAR_0;
   }
  }
 }

 return FUNC_3(VAR_2->dev);
}
