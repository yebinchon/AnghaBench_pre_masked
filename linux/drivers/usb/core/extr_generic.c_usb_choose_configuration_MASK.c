
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface_descriptor {scalar_t__ bInterfaceClass; } ;
struct TYPE_8__ {scalar_t__ bNumInterfaces; int bmAttributes; int bConfigurationValue; } ;
struct usb_host_config {TYPE_4__ desc; TYPE_2__** intf_cache; } ;
struct TYPE_7__ {int bNumConfigurations; scalar_t__ bDeviceClass; } ;
struct usb_device {scalar_t__ bus_mA; int dev; TYPE_3__ descriptor; struct usb_host_config* config; } ;
struct TYPE_6__ {TYPE_1__* altsetting; } ;
struct TYPE_5__ {struct usb_interface_descriptor desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,int,int,int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,char*,int,int ) ;
 scalar_t__ FUNC_3 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_6 (struct usb_interface_descriptor*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct usb_device*) ;
 scalar_t__ FUNC_9 (struct usb_device*,struct usb_host_config*) ;

int FUNC_10(struct usb_device *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6 = 0;
 struct usb_host_config *VAR_7, *VAR_8;

 if (FUNC_8(VAR_3))
  return 0;

 VAR_8 = ((void*)0);
 VAR_7 = VAR_3->config;
 VAR_5 = VAR_3->descriptor.bNumConfigurations;
 for (VAR_4 = 0; VAR_4 < VAR_5; (VAR_4++, VAR_7++)) {
  struct usb_interface_descriptor *VAR_9 = ((void*)0);


  if (VAR_7->desc.bNumInterfaces > 0)
   VAR_9 = &VAR_7->intf_cache[0]->altsetting->desc;
  if (FUNC_9(VAR_3, VAR_7) > VAR_3->bus_mA) {
   VAR_6++;
   continue;
  }







  if (VAR_9 && FUNC_4(VAR_9)) {

   if (FUNC_6(VAR_9)) {
    VAR_8 = VAR_7;
    break;
   }


   else if (VAR_4 == 0)
    VAR_8 = VAR_7;






   continue;
  }






  if (VAR_4 == 0 && VAR_5 > 1 && VAR_9 &&
    (FUNC_5(VAR_9) || FUNC_3(VAR_9))) {

   continue;



  }





  else if (VAR_3->descriptor.bDeviceClass !=
      VAR_0 &&
    (VAR_9 && VAR_9->bInterfaceClass !=
      VAR_0)) {
   VAR_8 = VAR_7;
   break;
  }



  else if (!VAR_8)
   VAR_8 = VAR_7;
 }

 if (VAR_6 > 0)
  FUNC_1(&VAR_3->dev, "rejected %d configuration%s "
   "due to insufficient available bus power\n",
   VAR_6, FUNC_7(VAR_6));

 if (VAR_8) {
  VAR_4 = VAR_8->desc.bConfigurationValue;
  FUNC_0(&VAR_3->dev,
   "configuration #%d chosen from %d choice%s\n",
   VAR_4, VAR_5, FUNC_7(VAR_5));
 } else {
  VAR_4 = -1;
  FUNC_2(&VAR_3->dev,
   "no configuration chosen from %d choice%s\n",
   VAR_5, FUNC_7(VAR_5));
 }
 return VAR_4;
}
