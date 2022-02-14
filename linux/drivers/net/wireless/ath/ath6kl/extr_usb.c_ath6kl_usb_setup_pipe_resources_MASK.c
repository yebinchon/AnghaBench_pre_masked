
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bmAttributes; int wMaxPacketSize; int bEndpointAddress; int bInterval; } ;
struct ath6kl_usb_pipe {size_t logical_pipe_num; int flags; int ep_address; struct usb_endpoint_descriptor* ep_desc; int usb_pipe_handle; int max_packet_size; struct ath6kl_usb* ar_usb; } ;
struct ath6kl_usb {int udev; struct ath6kl_usb_pipe* pipes; struct usb_interface* interface; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct ath6kl_usb_pipe*,int) ;
 size_t FUNC_6 (struct ath6kl_usb*,int ,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct ath6kl_usb *VAR_3)
{
 struct usb_interface *VAR_4 = VAR_3->interface;
 struct usb_host_interface *VAR_5 = VAR_4->cur_altsetting;
 struct usb_endpoint_descriptor *VAR_6;
 struct ath6kl_usb_pipe *VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;
 u8 VAR_11;

 FUNC_4(VAR_0, "setting up USB Pipes using interface\n");


 for (VAR_8 = 0; VAR_8 < VAR_5->desc.bNumEndpoints; ++VAR_8) {
  VAR_6 = &VAR_5->endpoint[VAR_8].desc;

  if (FUNC_0(VAR_6->bmAttributes)) {
   FUNC_4(VAR_0,
       "%s Bulk Ep:0x%2.2X maxpktsz:%d\n",
       FUNC_1
       (VAR_6->bEndpointAddress) ?
       "RX" : "TX", VAR_6->bEndpointAddress,
       FUNC_7(VAR_6->wMaxPacketSize));
  } else if (FUNC_2(VAR_6->bmAttributes)) {
   FUNC_4(VAR_0,
       "%s Int Ep:0x%2.2X maxpktsz:%d interval:%d\n",
       FUNC_1
       (VAR_6->bEndpointAddress) ?
       "RX" : "TX", VAR_6->bEndpointAddress,
       FUNC_7(VAR_6->wMaxPacketSize),
       VAR_6->bInterval);
  } else if (FUNC_3(VAR_6->bmAttributes)) {

   FUNC_4(VAR_0,
       "%s ISOC Ep:0x%2.2X maxpktsz:%d interval:%d\n",
       FUNC_1
       (VAR_6->bEndpointAddress) ?
       "RX" : "TX", VAR_6->bEndpointAddress,
       FUNC_7(VAR_6->wMaxPacketSize),
       VAR_6->bInterval);
  }
  VAR_9 = 0;

  VAR_11 =
      FUNC_6(VAR_3,
          VAR_6->bEndpointAddress,
          &VAR_9);
  if (VAR_11 == VAR_2)
   continue;

  VAR_7 = &VAR_3->pipes[VAR_11];
  if (VAR_7->ar_usb != ((void*)0)) {

   continue;
  }

  VAR_7->ar_usb = VAR_3;
  VAR_7->logical_pipe_num = VAR_11;
  VAR_7->ep_address = VAR_6->bEndpointAddress;
  VAR_7->max_packet_size = FUNC_7(VAR_6->wMaxPacketSize);

  if (FUNC_0(VAR_6->bmAttributes)) {
   if (FUNC_1(VAR_7->ep_address)) {
    VAR_7->usb_pipe_handle =
        FUNC_8(VAR_3->udev,
          VAR_7->ep_address);
   } else {
    VAR_7->usb_pipe_handle =
        FUNC_11(VAR_3->udev,
          VAR_7->ep_address);
   }
  } else if (FUNC_2(VAR_6->bmAttributes)) {
   if (FUNC_1(VAR_7->ep_address)) {
    VAR_7->usb_pipe_handle =
        FUNC_9(VAR_3->udev,
         VAR_7->ep_address);
   } else {
    VAR_7->usb_pipe_handle =
        FUNC_12(VAR_3->udev,
         VAR_7->ep_address);
   }
  } else if (FUNC_3(VAR_6->bmAttributes)) {

   if (FUNC_1(VAR_7->ep_address)) {
    VAR_7->usb_pipe_handle =
        FUNC_10(VAR_3->udev,
          VAR_7->ep_address);
   } else {
    VAR_7->usb_pipe_handle =
        FUNC_13(VAR_3->udev,
          VAR_7->ep_address);
   }
  }

  VAR_7->ep_desc = VAR_6;

  if (!FUNC_1(VAR_7->ep_address))
   VAR_7->flags |= VAR_1;

  VAR_10 = FUNC_5(VAR_7, VAR_9);
  if (VAR_10 != 0)
   break;
 }

 return VAR_10;
}
