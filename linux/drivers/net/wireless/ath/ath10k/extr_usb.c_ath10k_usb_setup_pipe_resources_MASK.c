
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
struct ath10k_usb_pipe {size_t logical_pipe_num; int flags; int ep_address; struct usb_endpoint_descriptor* ep_desc; int usb_pipe_handle; int max_packet_size; struct ath10k_usb* ar_usb; } ;
struct ath10k_usb {int udev; struct ath10k_usb_pipe* pipes; } ;
struct ath10k {int dummy; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_4 (struct ath10k*,int ,char*,...) ;
 int FUNC_5 (struct ath10k*,struct ath10k_usb_pipe*,int) ;
 size_t FUNC_6 (int ,int*) ;
 struct ath10k_usb* FUNC_7 (struct ath10k*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct ath10k *VAR_3,
        struct usb_interface *VAR_4)
{
 struct ath10k_usb *VAR_5 = FUNC_7(VAR_3);
 struct usb_host_interface *VAR_6 = VAR_4->cur_altsetting;
 struct usb_endpoint_descriptor *VAR_7;
 struct ath10k_usb_pipe *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 u8 VAR_12;

 FUNC_4(VAR_3, VAR_0, "usb setting up pipes using interface\n");


 for (VAR_10 = 0; VAR_10 < VAR_6->desc.bNumEndpoints; ++VAR_10) {
  VAR_7 = &VAR_6->endpoint[VAR_10].desc;

  if (FUNC_0(VAR_7->bmAttributes)) {
   FUNC_4(VAR_3, VAR_0,
       "usb %s bulk ep 0x%2.2x maxpktsz %d\n",
       FUNC_1
       (VAR_7->bEndpointAddress) ?
       "rx" : "tx", VAR_7->bEndpointAddress,
       FUNC_8(VAR_7->wMaxPacketSize));
  } else if (FUNC_2(VAR_7->bmAttributes)) {
   FUNC_4(VAR_3, VAR_0,
       "usb %s int ep 0x%2.2x maxpktsz %d interval %d\n",
       FUNC_1
       (VAR_7->bEndpointAddress) ?
       "rx" : "tx", VAR_7->bEndpointAddress,
       FUNC_8(VAR_7->wMaxPacketSize),
       VAR_7->bInterval);
  } else if (FUNC_3(VAR_7->bmAttributes)) {

   FUNC_4(VAR_3, VAR_0,
       "usb %s isoc ep 0x%2.2x maxpktsz %d interval %d\n",
       FUNC_1
       (VAR_7->bEndpointAddress) ?
       "rx" : "tx", VAR_7->bEndpointAddress,
       FUNC_8(VAR_7->wMaxPacketSize),
       VAR_7->bInterval);
  }
  VAR_11 = 0;

  VAR_12 =
      FUNC_6(VAR_7->bEndpointAddress,
          &VAR_11);
  if (VAR_12 == VAR_2)
   continue;

  VAR_8 = &VAR_5->pipes[VAR_12];
  if (VAR_8->ar_usb)

   continue;

  VAR_8->ar_usb = VAR_5;
  VAR_8->logical_pipe_num = VAR_12;
  VAR_8->ep_address = VAR_7->bEndpointAddress;
  VAR_8->max_packet_size = FUNC_8(VAR_7->wMaxPacketSize);

  if (FUNC_0(VAR_7->bmAttributes)) {
   if (FUNC_1(VAR_8->ep_address)) {
    VAR_8->usb_pipe_handle =
        FUNC_9(VAR_5->udev,
          VAR_8->ep_address);
   } else {
    VAR_8->usb_pipe_handle =
        FUNC_12(VAR_5->udev,
          VAR_8->ep_address);
   }
  } else if (FUNC_2(VAR_7->bmAttributes)) {
   if (FUNC_1(VAR_8->ep_address)) {
    VAR_8->usb_pipe_handle =
        FUNC_10(VAR_5->udev,
         VAR_8->ep_address);
   } else {
    VAR_8->usb_pipe_handle =
        FUNC_13(VAR_5->udev,
         VAR_8->ep_address);
   }
  } else if (FUNC_3(VAR_7->bmAttributes)) {

   if (FUNC_1(VAR_8->ep_address)) {
    VAR_8->usb_pipe_handle =
        FUNC_11(VAR_5->udev,
          VAR_8->ep_address);
   } else {
    VAR_8->usb_pipe_handle =
        FUNC_14(VAR_5->udev,
          VAR_8->ep_address);
   }
  }

  VAR_8->ep_desc = VAR_7;

  if (!FUNC_1(VAR_8->ep_address))
   VAR_8->flags |= VAR_1;

  VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_11);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
