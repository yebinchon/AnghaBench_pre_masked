
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int bmAttributes; void* wMaxPacketSize; } ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_91x_usbdev {int* bulkin_endpoint_addr; int* bulkout_endpoint_addr; void** bulkout_size; void** bulkin_size; } ;
typedef void* __le16 ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct usb_interface *VAR_5,
           struct rsi_hw *VAR_6)
{
 struct rsi_91x_usbdev *VAR_7 = (struct rsi_91x_usbdev *)VAR_6->rsi_dev;
 struct usb_host_interface *VAR_8;
 struct usb_endpoint_descriptor *VAR_9;
 __le16 VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13 = 0;

 VAR_8 = &(VAR_5->altsetting[0]);

 for (VAR_11 = 0; VAR_11 < VAR_8->desc.bNumEndpoints; ++VAR_11) {
  VAR_9 = &(VAR_8->endpoint[VAR_11].desc);

  if (!VAR_7->bulkin_endpoint_addr[VAR_12] &&
      (VAR_9->bEndpointAddress & VAR_2) &&
      ((VAR_9->bmAttributes & VAR_3) ==
      VAR_4)) {
   VAR_10 = VAR_9->wMaxPacketSize;
   VAR_7->bulkin_size[VAR_12] = VAR_10;
   VAR_7->bulkin_endpoint_addr[VAR_12] =
    VAR_9->bEndpointAddress;
   VAR_12++;
  }

  if (!VAR_7->bulkout_endpoint_addr[VAR_13] &&
      !(VAR_9->bEndpointAddress & VAR_2) &&
      ((VAR_9->bmAttributes & VAR_3) ==
      VAR_4)) {
   VAR_10 = VAR_9->wMaxPacketSize;
   VAR_7->bulkout_endpoint_addr[VAR_13] =
    VAR_9->bEndpointAddress;
   VAR_7->bulkout_size[VAR_13] = VAR_10;
   VAR_13++;
  }

  if (VAR_12 >= VAR_1 || VAR_13 >= VAR_1)
   break;
 }

 if (!(VAR_7->bulkin_endpoint_addr[0]) &&
     VAR_7->bulkout_endpoint_addr[0])
  return -VAR_0;

 return 0;
}
