
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_8__ {int * parent; } ;
struct rc_dev {int allowed_protocols; int rx_resolution; int timeout; int map_name; int driver_name; struct igorplugusb* priv; TYPE_4__ dev; int input_id; int input_phys; int device_name; } ;
struct TYPE_7__ {int bRequestType; int wLength; int bRequest; } ;
struct igorplugusb {int timer; int urb; struct rc_dev* rc; int phys; int buf_in; TYPE_3__ request; int * dev; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 struct igorplugusb* FUNC_4 (int *,int,int ) ;
 int VAR_21 ;
 int FUNC_5 (struct igorplugusb*,int ) ;
 int VAR_22 ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 struct rc_dev* FUNC_7 (int ) ;
 int FUNC_8 (struct rc_dev*) ;
 int FUNC_9 (struct rc_dev*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct usb_endpoint_descriptor*) ;
 int FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (int ,struct usb_device*,int ,int *,int ,int,int ,struct igorplugusb*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct usb_device*,int ,int) ;
 int FUNC_17 (struct usb_device*,int ) ;
 int FUNC_18 (struct usb_interface*,struct igorplugusb*) ;
 int FUNC_19 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_23,
     const struct usb_device_id *VAR_24)
{
 struct usb_device *VAR_25;
 struct usb_host_interface *VAR_26;
 struct usb_endpoint_descriptor *VAR_27;
 struct igorplugusb *VAR_28;
 struct rc_dev *VAR_29;
 int VAR_30 = -VAR_3;

 VAR_25 = FUNC_6(VAR_23);
 VAR_26 = VAR_23->cur_altsetting;

 if (VAR_26->desc.bNumEndpoints != 1) {
  FUNC_3(&VAR_23->dev, "incorrect number of endpoints");
  return -VAR_2;
 }

 VAR_27 = &VAR_26->endpoint[0].desc;
 if (!FUNC_12(VAR_27) || !FUNC_13(VAR_27)) {
  FUNC_3(&VAR_23->dev, "endpoint incorrect");
  return -VAR_2;
 }

 VAR_28 = FUNC_4(&VAR_23->dev, sizeof(*VAR_28), VAR_5);
 if (!VAR_28)
  return -VAR_3;

 VAR_28->dev = &VAR_23->dev;

 FUNC_10(&VAR_28->timer, VAR_22, 0);

 VAR_28->request.bRequest = VAR_4;
 VAR_28->request.bRequestType = VAR_20 | VAR_19;
 VAR_28->request.wLength = FUNC_1(sizeof(VAR_28->buf_in));

 VAR_28->urb = FUNC_11(0, VAR_5);
 if (!VAR_28->urb)
  goto fail;

 FUNC_14(VAR_28->urb, VAR_25,
  FUNC_17(VAR_25, 0), (uint8_t *)&VAR_28->request,
  VAR_28->buf_in, sizeof(VAR_28->buf_in), VAR_21, VAR_28);

 FUNC_16(VAR_25, VAR_28->phys, sizeof(VAR_28->phys));

 VAR_29 = FUNC_7(VAR_6);
 if (!VAR_29)
  goto fail;

 VAR_29->device_name = VAR_0;
 VAR_29->input_phys = VAR_28->phys;
 FUNC_19(VAR_25, &VAR_29->input_id);
 VAR_29->dev.parent = &VAR_23->dev;




 VAR_29->allowed_protocols = VAR_8 &
  ~(VAR_9 | VAR_11 | VAR_10 |
    VAR_12 | VAR_13 |
    VAR_14 | VAR_15 |
    VAR_17 | VAR_16);

 VAR_29->priv = VAR_28;
 VAR_29->driver_name = VAR_1;
 VAR_29->map_name = VAR_7;
 VAR_29->timeout = FUNC_0(100);
 VAR_29->rx_resolution = 85333;

 VAR_28->rc = VAR_29;
 VAR_30 = FUNC_9(VAR_29);
 if (VAR_30) {
  FUNC_3(&VAR_23->dev, "failed to register rc device: %d", VAR_30);
  goto fail;
 }

 FUNC_18(VAR_23, VAR_28);

 FUNC_5(VAR_28, VAR_18);

 return 0;
fail:
 FUNC_8(VAR_28->rc);
 FUNC_15(VAR_28->urb);
 FUNC_2(&VAR_28->timer);

 return VAR_30;
}
