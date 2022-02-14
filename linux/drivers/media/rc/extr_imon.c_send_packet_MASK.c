
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_ctrlrequest {int bRequestType; int bRequest; void* wLength; void* wIndex; void* wValue; } ;
struct TYPE_8__ {int busy; int status; int finished; } ;
struct imon_context {int send_packet_delay; TYPE_2__ tx; int lock; TYPE_3__* tx_urb; int usb_tx_buf; int usbdev_intf0; TYPE_1__* tx_endpoint; int tx_control; } ;
struct TYPE_9__ {scalar_t__ actual_length; } ;
struct TYPE_7__ {int bInterval; int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct usb_ctrlrequest*) ;
 struct usb_ctrlrequest* FUNC_2 (int,int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_3__*,int ,unsigned int,unsigned char*,int ,int,int ,struct imon_context*) ;
 int FUNC_12 (TYPE_3__*,int ,unsigned int,int ,int,int ,struct imon_context*,int) ;
 int FUNC_13 (TYPE_3__*) ;
 unsigned int FUNC_14 (int ,int ) ;
 unsigned int FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct imon_context *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 struct usb_ctrlrequest *VAR_9 = ((void*)0);


 if (!VAR_4->tx_control) {
  VAR_5 = FUNC_15(VAR_4->usbdev_intf0,
          VAR_4->tx_endpoint->bEndpointAddress);
  VAR_7 = VAR_4->tx_endpoint->bInterval;

  FUNC_12(VAR_4->tx_urb, VAR_4->usbdev_intf0, VAR_5,
     VAR_4->usb_tx_buf,
     sizeof(VAR_4->usb_tx_buf),
     VAR_3, VAR_4, VAR_7);

  VAR_4->tx_urb->actual_length = 0;
 } else {

  VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
  if (VAR_9 == ((void*)0))
   return -VAR_0;


  VAR_9->bRequestType = 0x21;
  VAR_9->bRequest = 0x09;
  VAR_9->wValue = FUNC_0(0x0200);
  VAR_9->wIndex = FUNC_0(0x0001);
  VAR_9->wLength = FUNC_0(0x0008);


  VAR_5 = FUNC_14(VAR_4->usbdev_intf0, 0);


  FUNC_11(VAR_4->tx_urb, VAR_4->usbdev_intf0,
         VAR_5, (unsigned char *)VAR_9,
         VAR_4->usb_tx_buf,
         sizeof(VAR_4->usb_tx_buf),
         VAR_3, VAR_4);
  VAR_4->tx_urb->actual_length = 0;
 }

 FUNC_7(&VAR_4->tx.finished);
 VAR_4->tx.busy = 1;
 FUNC_10();

 VAR_8 = FUNC_16(VAR_4->tx_urb, VAR_1);
 if (VAR_8) {
  VAR_4->tx.busy = 0;
  FUNC_10();
  FUNC_6("error submitting urb(%d)\n", VAR_8);
 } else {

  FUNC_5(&VAR_4->lock);
  VAR_8 = FUNC_17(
    &VAR_4->tx.finished);
  if (VAR_8) {
   FUNC_13(VAR_4->tx_urb);
   FUNC_6("task interrupted\n");
  }
  FUNC_4(&VAR_4->lock);

  VAR_8 = VAR_4->tx.status;
  if (VAR_8)
   FUNC_6("packet tx failed (%d)\n", VAR_8);
 }

 FUNC_1(VAR_9);






 VAR_6 = FUNC_3(VAR_4->send_packet_delay);
 FUNC_9(VAR_2);
 FUNC_8(VAR_6);

 return VAR_8;
}
