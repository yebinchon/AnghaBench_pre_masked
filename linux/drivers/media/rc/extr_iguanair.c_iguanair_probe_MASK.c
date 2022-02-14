
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* altsetting; } ;
struct TYPE_10__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_12__ {int * parent; } ;
struct rc_dev {int min_timeout; int timeout; int max_timeout; int rx_resolution; int map_name; int driver_name; int tx_ir; int (* s_tx_carrier ) (struct rc_dev*,int) ;int (* s_tx_mask ) (struct rc_dev*,int ) ;int close; int open; struct iguanair* priv; int allowed_protocols; TYPE_3__ dev; int input_id; int input_phys; int device_name; } ;
struct iguanair {int version; int dma_out; void* packet; int dma_in; void* buf_in; TYPE_4__* urb_out; TYPE_4__* urb_in; struct usb_device* udev; int phys; int name; int completion; int lock; int * dev; struct rc_dev* rc; } ;
struct TYPE_14__ {int bEndpointAddress; } ;
struct TYPE_13__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_11__ {TYPE_8__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_12 ;
 int FUNC_2 (struct iguanair*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct rc_dev*,int) ;
 int FUNC_4 (struct rc_dev*,int ) ;
 int VAR_16 ;
 int FUNC_5 (int *) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct iguanair*) ;
 struct iguanair* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 struct rc_dev* FUNC_10 (int ) ;
 int FUNC_11 (struct rc_dev*) ;
 int FUNC_12 (struct rc_dev*) ;
 int FUNC_13 (int ,int,char*,int) ;
 void* FUNC_14 (struct usb_device*,int ,int ,int *) ;
 void* FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (TYPE_8__*) ;
 int FUNC_18 (TYPE_4__*,struct usb_device*,int,void*,int ,int ,struct iguanair*,int) ;
 int FUNC_19 (struct usb_device*,int ,void*,int ) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (struct usb_device*,int ,int) ;
 int FUNC_23 (struct usb_device*,int ) ;
 int FUNC_24 (struct usb_interface*,struct iguanair*) ;
 int FUNC_25 (struct usb_device*,int ) ;
 int FUNC_26 (TYPE_4__*,int ) ;
 int FUNC_27 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_28(struct usb_interface *VAR_17,
     const struct usb_device_id *VAR_18)
{
 struct usb_device *VAR_19 = FUNC_6(VAR_17);
 struct iguanair *VAR_20;
 struct rc_dev *VAR_21;
 int VAR_22, VAR_23, VAR_24;
 struct usb_host_interface *VAR_25;

 VAR_25 = VAR_17->altsetting;
 if (VAR_25->desc.bNumEndpoints < 2)
  return -VAR_1;

 VAR_20 = FUNC_8(sizeof(*VAR_20), VAR_3);
 VAR_21 = FUNC_10(VAR_7);
 if (!VAR_20 || !VAR_21) {
  VAR_22 = -VAR_2;
  goto out;
 }

 VAR_20->buf_in = FUNC_14(VAR_19, VAR_5, VAR_3,
        &VAR_20->dma_in);
 VAR_20->packet = FUNC_14(VAR_19, VAR_6, VAR_3,
        &VAR_20->dma_out);
 VAR_20->urb_in = FUNC_15(0, VAR_3);
 VAR_20->urb_out = FUNC_15(0, VAR_3);

 if (!VAR_20->buf_in || !VAR_20->packet || !VAR_20->urb_in || !VAR_20->urb_out ||
     !FUNC_16(&VAR_25->endpoint[0].desc) ||
     !FUNC_17(&VAR_25->endpoint[1].desc)) {
  VAR_22 = -VAR_2;
  goto out;
 }

 VAR_20->rc = VAR_21;
 VAR_20->dev = &VAR_17->dev;
 VAR_20->udev = VAR_19;
 FUNC_9(&VAR_20->lock);

 FUNC_5(&VAR_20->completion);
 VAR_24 = FUNC_25(VAR_19,
    VAR_25->endpoint[1].desc.bEndpointAddress);
 FUNC_18(VAR_20->urb_out, VAR_19, VAR_24, VAR_20->packet, VAR_6,
      VAR_13, VAR_20, 1);
 VAR_20->urb_out->transfer_dma = VAR_20->dma_out;
 VAR_20->urb_out->transfer_flags |= VAR_11;

 VAR_23 = FUNC_23(VAR_19, VAR_25->endpoint[0].desc.bEndpointAddress);
 FUNC_18(VAR_20->urb_in, VAR_19, VAR_23, VAR_20->buf_in, VAR_5,
        VAR_15, VAR_20, 1);
 VAR_20->urb_in->transfer_dma = VAR_20->dma_in;
 VAR_20->urb_in->transfer_flags |= VAR_11;

 VAR_22 = FUNC_26(VAR_20->urb_in, VAR_3);
 if (VAR_22) {
  FUNC_1(&VAR_17->dev, "failed to submit urb: %d\n", VAR_22);
  goto out;
 }

 VAR_22 = FUNC_2(VAR_20);
 if (VAR_22)
  goto out2;

 FUNC_13(VAR_20->name, sizeof(VAR_20->name),
  "IguanaWorks USB IR Transceiver version 0x%04x", VAR_20->version);

 FUNC_22(VAR_20->udev, VAR_20->phys, sizeof(VAR_20->phys));

 VAR_21->device_name = VAR_20->name;
 VAR_21->input_phys = VAR_20->phys;
 FUNC_27(VAR_20->udev, &VAR_21->input_id);
 VAR_21->dev.parent = &VAR_17->dev;
 VAR_21->allowed_protocols = VAR_9;
 VAR_21->priv = VAR_20;
 VAR_21->open = VAR_14;
 VAR_21->close = VAR_12;
 VAR_21->s_tx_mask = FUNC_4;
 VAR_21->s_tx_carrier = FUNC_3;
 VAR_21->tx_ir = VAR_16;
 VAR_21->driver_name = VAR_0;
 VAR_21->map_name = VAR_8;
 VAR_21->min_timeout = 1;
 VAR_21->timeout = VAR_4;
 VAR_21->max_timeout = 10 * VAR_4;
 VAR_21->rx_resolution = VAR_10;

 FUNC_3(VAR_21, 38000);
 FUNC_4(VAR_21, 0);

 VAR_22 = FUNC_12(VAR_21);
 if (VAR_22 < 0) {
  FUNC_0(&VAR_17->dev, "failed to register rc device %d", VAR_22);
  goto out2;
 }

 FUNC_24(VAR_17, VAR_20);

 return 0;
out2:
 FUNC_21(VAR_20->urb_in);
 FUNC_21(VAR_20->urb_out);
out:
 if (VAR_20) {
  FUNC_20(VAR_20->urb_in);
  FUNC_20(VAR_20->urb_out);
  FUNC_19(VAR_19, VAR_5, VAR_20->buf_in, VAR_20->dma_in);
  FUNC_19(VAR_19, VAR_6, VAR_20->packet,
        VAR_20->dma_out);
 }
 FUNC_11(VAR_21);
 FUNC_7(VAR_20);
 return VAR_22;
}
