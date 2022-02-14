
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbdevfs_hub_portinfo {int nports; int * port; } ;
struct usb_interface {int dummy; } ;
struct usb_hub {TYPE_2__** ports; } ;
struct usb_device {int maxchild; int devnum; } ;
struct TYPE_4__ {TYPE_1__* child; } ;
struct TYPE_3__ {int devnum; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct usb_hub* FUNC_3 (struct usb_device*) ;

__attribute__((used)) static int
FUNC_4(struct usb_interface *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_0(VAR_2);
 struct usb_hub *VAR_6 = FUNC_3(VAR_5);


 switch (VAR_3) {
 case 128: {
  struct usbdevfs_hub_portinfo *VAR_7 = VAR_4;
  int VAR_8;

  FUNC_1(&VAR_1);
  if (VAR_5->devnum <= 0)
   VAR_7->nports = 0;
  else {
   VAR_7->nports = VAR_5->maxchild;
   for (VAR_8 = 0; VAR_8 < VAR_7->nports; VAR_8++) {
    if (VAR_6->ports[VAR_8]->child == ((void*)0))
     VAR_7->port[VAR_8] = 0;
    else
     VAR_7->port[VAR_8] =
      VAR_6->ports[VAR_8]->child->devnum;
   }
  }
  FUNC_2(&VAR_1);

  return VAR_7->nports + 1;
  }

 default:
  return -VAR_0;
 }
}
