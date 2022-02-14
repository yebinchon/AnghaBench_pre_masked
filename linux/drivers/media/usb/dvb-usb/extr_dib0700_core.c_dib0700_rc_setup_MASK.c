
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct urb {int * transfer_buffer; int status; } ;
struct dvb_usb_device {int udev; struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_6__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 struct urb* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_6 (struct usb_endpoint_descriptor const*) ;
 int FUNC_7 (struct urb*,int ,unsigned int,int *,int ,int ,struct dvb_usb_device*) ;
 int FUNC_8 (struct urb*,int ,unsigned int,int *,int ,int ,struct dvb_usb_device*,int) ;
 int FUNC_9 (struct urb*) ;
 unsigned int FUNC_10 (int ,int) ;
 unsigned int FUNC_11 (int ,int) ;
 int FUNC_12 (struct urb*,int ) ;

int FUNC_13(struct dvb_usb_device *VAR_7, struct usb_interface *VAR_8)
{
 struct dib0700_state *VAR_9 = VAR_7->priv;
 struct urb *VAR_10;
 const struct usb_endpoint_descriptor *VAR_11;
 int VAR_12, VAR_13 = 1;
 unsigned int VAR_14 = 0;


 if (VAR_9->fw_version < 0x10200 || !VAR_8)
  return 0;



 if (VAR_8->altsetting[0].desc.bNumEndpoints < VAR_13 + 1)
  return -VAR_1;

 VAR_10 = FUNC_3(0, VAR_4);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_10->transfer_buffer = FUNC_2(VAR_5, VAR_4);
 if (VAR_10->transfer_buffer == ((void*)0)) {
  FUNC_0("rc kzalloc failed");
  FUNC_9(VAR_10);
  return -VAR_2;
 }

 VAR_10->status = -VAR_0;





 VAR_11 = &VAR_8->altsetting[0].endpoint[VAR_13].desc;
 if (FUNC_4(VAR_11)) {
  if (FUNC_5(VAR_11)) {
   VAR_14 = FUNC_10(VAR_7->udev, VAR_13);
   FUNC_7(VAR_10, VAR_7->udev, VAR_14,
       VAR_10->transfer_buffer,
       VAR_5,
       VAR_6, VAR_7);

  } else if (FUNC_6(VAR_11)) {
   VAR_14 = FUNC_11(VAR_7->udev, VAR_13);
   FUNC_8(VAR_10, VAR_7->udev, VAR_14,
       VAR_10->transfer_buffer,
       VAR_5,
       VAR_6, VAR_7, 1);
  }
 }

 if (!VAR_14) {
  FUNC_0("There's no endpoint for remote controller");
  FUNC_1(VAR_10->transfer_buffer);
  FUNC_9(VAR_10);
  return 0;
 }

 VAR_12 = FUNC_12(VAR_10, VAR_3);
 if (VAR_12) {
  FUNC_0("rc submit urb failed");
  FUNC_1(VAR_10->transfer_buffer);
  FUNC_9(VAR_10);
 }

 return VAR_12;
}
