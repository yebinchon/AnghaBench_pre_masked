
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int num_altsetting; TYPE_4__* altsetting; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {int speed; char* manufacturer; char* product; int dev; TYPE_2__ descriptor; } ;
struct TYPE_7__ {int bInterfaceNumber; int bNumEndpoints; } ;
struct TYPE_8__ {TYPE_3__ desc; TYPE_1__* endpoint; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;





 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_6 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_1, struct usb_device *VAR_2,
  unsigned int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 const struct usb_endpoint_descriptor *VAR_9;

 bool VAR_10 = 0, VAR_11 = 0;
 const char *VAR_12;

 VAR_8 = VAR_1->altsetting[0].desc.bInterfaceNumber;


 for (VAR_4 = 0; VAR_4 < VAR_1->num_altsetting; VAR_4++) {

  for (VAR_5 = 0; VAR_5 < VAR_1->altsetting[VAR_4].desc.bNumEndpoints; VAR_5++) {


   VAR_9 = &VAR_1->altsetting[VAR_4].endpoint[VAR_5].desc;
   VAR_6 = FUNC_4(VAR_9->wMaxPacketSize);
   VAR_7 = VAR_6 & 0x7ff;

   if (VAR_2->speed == 129)
    VAR_7 = VAR_7 * FUNC_3(VAR_6);

   if (FUNC_6(VAR_9) &&
       FUNC_5(VAR_9)) {
    switch (VAR_9->bEndpointAddress) {
    case 132:
     VAR_11 = 1;
     break;
    case 131:
     VAR_10 = 1;
     VAR_3[VAR_4] = VAR_7;
     break;
    }
   }
  }
 }


 if (!(VAR_11 || VAR_10)) {
  FUNC_0(&VAR_2->dev, "no audio or video endpoints found\n");
  return -VAR_0;
 }

 switch (VAR_2->speed) {
 case 128:
  VAR_12 = "1.5";
  break;
 case 130:
  VAR_12 = "12";
  break;
 case 129:
  VAR_12 = "480";
  break;
 default:
  VAR_12 = "unknown";
 }

 FUNC_1(&VAR_2->dev, "New device %s %s @ %s Mbps (%04x:%04x, interface %d, class %d)\n",
  VAR_2->manufacturer ? VAR_2->manufacturer : "",
  VAR_2->product ? VAR_2->product : "",
  VAR_12,
  FUNC_4(VAR_2->descriptor.idVendor),
  FUNC_4(VAR_2->descriptor.idProduct),
  VAR_8,
  VAR_1->altsetting->desc.bInterfaceNumber);


 if (VAR_11)
  FUNC_2(&VAR_2->dev, "audio interface %d found.\n				This is not implemented by this driver,				you should use snd-usb-audio instead\n", VAR_8);



 if (VAR_10)
  FUNC_1(&VAR_2->dev, "video interface %d found\n",
    VAR_8);






 if (VAR_2->speed != 129)
  FUNC_2(&VAR_2->dev, "must be connected to a high-speed USB 2.0 port\n				You may not be able to stream video smoothly\n");


 return 0;
}
