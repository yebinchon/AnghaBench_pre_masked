
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct TYPE_8__ {int addr; void* size; } ;
struct TYPE_7__ {int addr; void* size; } ;
struct dt9812_private {TYPE_4__ cmd_rd; TYPE_3__ cmd_wr; } ;
struct comedi_device {int class_dev; struct dt9812_private* private; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_0(VAR_3);
 struct usb_host_interface *VAR_5 = VAR_4->cur_altsetting;
 struct dt9812_private *VAR_6 = VAR_3->private;
 struct usb_endpoint_descriptor *VAR_7;
 int VAR_8;

 if (VAR_5->desc.bNumEndpoints != 5) {
  FUNC_1(VAR_3->class_dev, "Wrong number of endpoints\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->desc.bNumEndpoints; ++VAR_8) {
  int VAR_9 = -1;

  VAR_7 = &VAR_5->endpoint[VAR_8].desc;
  switch (VAR_8) {
  case 0:

   VAR_9 = VAR_1;
   break;
  case 1:
   VAR_9 = VAR_2;
   VAR_6->cmd_wr.addr = VAR_7->bEndpointAddress;
   VAR_6->cmd_wr.size = FUNC_2(VAR_7);
   break;
  case 2:
   VAR_9 = VAR_1;
   VAR_6->cmd_rd.addr = VAR_7->bEndpointAddress;
   VAR_6->cmd_rd.size = FUNC_2(VAR_7);
   break;
  case 3:

   VAR_9 = VAR_2;
   break;
  case 4:

   VAR_9 = VAR_1;
   break;
  }
  if ((VAR_7->bEndpointAddress & VAR_1) != VAR_9) {
   FUNC_1(VAR_3->class_dev,
    "Endpoint has wrong direction\n");
   return -VAR_0;
  }
 }
 return 0;
}
