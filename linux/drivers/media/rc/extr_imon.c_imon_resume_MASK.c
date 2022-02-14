
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct imon_context {int rx_urb_intf1; TYPE_4__* rx_endpoint_intf1; int usb_rx_buf; int usbdev_intf1; int rx_urb_intf0; TYPE_3__* rx_endpoint_intf0; int usbdev_intf0; } ;
struct TYPE_8__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_7__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,struct imon_context*,int ) ;
 struct imon_context* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_3)
{
 int VAR_4 = 0;
 struct imon_context *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = VAR_3->cur_altsetting->desc.bInterfaceNumber;

 if (VAR_6 == 0) {
  FUNC_0(VAR_5->rx_urb_intf0, VAR_5->usbdev_intf0,
   FUNC_2(VAR_5->usbdev_intf0,
    VAR_5->rx_endpoint_intf0->bEndpointAddress),
   VAR_5->usb_rx_buf, sizeof(VAR_5->usb_rx_buf),
   VAR_1, VAR_5,
   VAR_5->rx_endpoint_intf0->bInterval);

  VAR_4 = FUNC_3(VAR_5->rx_urb_intf0, VAR_0);

 } else {
  FUNC_0(VAR_5->rx_urb_intf1, VAR_5->usbdev_intf1,
   FUNC_2(VAR_5->usbdev_intf1,
    VAR_5->rx_endpoint_intf1->bEndpointAddress),
   VAR_5->usb_rx_buf, sizeof(VAR_5->usb_rx_buf),
   VAR_2, VAR_5,
   VAR_5->rx_endpoint_intf1->bInterval);

  VAR_4 = FUNC_3(VAR_5->rx_urb_intf1, VAR_0);
 }

 return VAR_4;
}
