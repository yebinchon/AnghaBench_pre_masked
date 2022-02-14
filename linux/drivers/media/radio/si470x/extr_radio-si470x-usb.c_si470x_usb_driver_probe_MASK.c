
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_11__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct usb_device_id {int idVendor; int idProduct; } ;
struct TYPE_14__ {int release; } ;
struct TYPE_15__ {int error; } ;
struct TYPE_13__ {int device_caps; int release; TYPE_5__* v4l2_dev; int * lock; TYPE_7__* ctrl_handler; } ;
struct si470x_device {int band; int* registers; int software_version; int hardware_version; int buf_size; struct si470x_device* usb_buf; struct si470x_device* int_in_buffer; int int_in_urb; TYPE_5__ v4l2_dev; TYPE_7__ hdl; struct si470x_device* buffer; TYPE_3__ videodev; int read_queue; scalar_t__ rd_index; scalar_t__ wr_index; int lock; int usbdev; struct usb_endpoint_descriptor* int_in_endpoint; int vidioc_querycap; int fops_release; int fops_open; int set_register; int get_register; int completion; struct usb_interface* intf; } ;
struct TYPE_12__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct si470x_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct si470x_device*) ;
 void* FUNC_8 (int,int ) ;
 struct si470x_device* FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_12 (struct si470x_device*) ;
 int VAR_29 ;
 scalar_t__ FUNC_13 (struct si470x_device*) ;
 int FUNC_14 (struct si470x_device*,double) ;
 int FUNC_15 (struct si470x_device*,int ) ;
 int VAR_30 ;
 int FUNC_16 (struct si470x_device*) ;
 int VAR_31 ;
 TYPE_3__ VAR_32 ;
 int VAR_33 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,int ,int,int,int,struct si470x_device*,int,int) ;
 scalar_t__ FUNC_19 (struct usb_endpoint_descriptor*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct usb_interface*,struct si470x_device*) ;
 int FUNC_24 (TYPE_7__*) ;
 int FUNC_25 (TYPE_7__*,int) ;
 int FUNC_26 (TYPE_7__*,int *,int ,int ,int,int,int) ;
 int FUNC_27 (int *,TYPE_5__*) ;
 int FUNC_28 (TYPE_5__*) ;
 int VAR_34 ;
 int FUNC_29 (TYPE_3__*,int ,int ) ;
 int FUNC_30 (TYPE_3__*,struct si470x_device*) ;

__attribute__((used)) static int FUNC_31(struct usb_interface *VAR_35,
  const struct usb_device_id *VAR_36)
{
 struct si470x_device *VAR_37;
 struct usb_host_interface *VAR_38;
 struct usb_endpoint_descriptor *VAR_39;
 int VAR_40, VAR_41, VAR_42;
 unsigned char VAR_43 = 0;


 VAR_37 = FUNC_9(sizeof(struct si470x_device), VAR_6);
 if (!VAR_37) {
  VAR_42 = -VAR_4;
  goto err_initial;
 }
 VAR_37->usb_buf = FUNC_8(VAR_8, VAR_6);
 if (VAR_37->usb_buf == ((void*)0)) {
  VAR_42 = -VAR_4;
  goto err_radio;
 }
 VAR_37->usbdev = FUNC_6(VAR_35);
 VAR_37->intf = VAR_35;
 VAR_37->band = 1;
 FUNC_11(&VAR_37->lock);
 FUNC_4(&VAR_37->completion);

 VAR_37->get_register = VAR_29;
 VAR_37->set_register = VAR_30;
 VAR_37->fops_open = VAR_27;
 VAR_37->fops_release = VAR_28;
 VAR_37->vidioc_querycap = VAR_33;

 VAR_38 = VAR_35->cur_altsetting;


 for (VAR_40 = 0; VAR_40 < VAR_38->desc.bNumEndpoints; ++VAR_40) {
  VAR_39 = &VAR_38->endpoint[VAR_40].desc;
  if (FUNC_19(VAR_39))
   VAR_37->int_in_endpoint = VAR_39;
 }
 if (!VAR_37->int_in_endpoint) {
  FUNC_1(&VAR_35->dev, "could not find interrupt in endpoint\n");
  VAR_42 = -VAR_2;
  goto err_usbbuf;
 }

 VAR_41 = FUNC_10(VAR_37->int_in_endpoint->wMaxPacketSize);

 VAR_37->int_in_buffer = FUNC_8(VAR_41, VAR_6);
 if (!VAR_37->int_in_buffer) {
  FUNC_1(&VAR_35->dev, "could not allocate int_in_buffer");
  VAR_42 = -VAR_4;
  goto err_usbbuf;
 }

 VAR_37->int_in_urb = FUNC_17(0, VAR_6);
 if (!VAR_37->int_in_urb) {
  VAR_42 = -VAR_4;
  goto err_intbuffer;
 }

 VAR_37->v4l2_dev.release = VAR_31;
 if (VAR_36->idVendor == 0x10c4 && VAR_36->idProduct == 0x818a) {
  VAR_42 = FUNC_18(VAR_37->usbdev,
    FUNC_22(VAR_37->usbdev, 0),
    VAR_7,
    VAR_15 | VAR_14 | VAR_13,
    1, 2,
    VAR_37->usb_buf, 3, 500);
  if (VAR_42 != 3 ||
      (FUNC_3(&VAR_37->usb_buf[1]) & 0xfff) != 0x0242) {
   FUNC_1(&VAR_35->dev, "this is not a si470x device.\n");
   VAR_42 = -VAR_3;
   goto err_urb;
  }
 }

 VAR_42 = FUNC_27(&VAR_35->dev, &VAR_37->v4l2_dev);
 if (VAR_42 < 0) {
  FUNC_0(&VAR_35->dev, "couldn't register v4l2_device\n");
  goto err_urb;
 }

 FUNC_25(&VAR_37->hdl, 2);
 FUNC_26(&VAR_37->hdl, &VAR_26,
     VAR_21, 0, 1, 1, 1);
 FUNC_26(&VAR_37->hdl, &VAR_26,
     VAR_22, 0, 15, 1, 15);
 if (VAR_37->hdl.error) {
  VAR_42 = VAR_37->hdl.error;
  FUNC_0(&VAR_35->dev, "couldn't register control\n");
  goto err_dev;
 }
 VAR_37->videodev = VAR_32;
 VAR_37->videodev.ctrl_handler = &VAR_37->hdl;
 VAR_37->videodev.lock = &VAR_37->lock;
 VAR_37->videodev.v4l2_dev = &VAR_37->v4l2_dev;
 VAR_37->videodev.release = VAR_34;
 VAR_37->videodev.device_caps =
  VAR_16 | VAR_19 | VAR_20 |
  VAR_17 | VAR_18;
 FUNC_30(&VAR_37->videodev, VAR_37);


 if (FUNC_12(VAR_37) < 0) {
  VAR_42 = -VAR_2;
  goto err_ctrl;
 }
 FUNC_1(&VAR_35->dev, "DeviceID=0x%4.4hx ChipID=0x%4.4hx\n",
   VAR_37->registers[VAR_1], VAR_37->registers[VAR_11]);
 if ((VAR_37->registers[VAR_11] & VAR_12) < VAR_9) {
  FUNC_2(&VAR_35->dev,
   "This driver is known to work with firmware version %hu,\n",
   VAR_9);
  FUNC_2(&VAR_35->dev,
   "but the device has firmware version %hu.\n",
   VAR_37->registers[VAR_11] & VAR_12);
  VAR_43 = 1;
 }


 if (FUNC_13(VAR_37) < 0) {
  VAR_42 = -VAR_2;
  goto err_ctrl;
 }
 FUNC_1(&VAR_35->dev, "software version %d, hardware version %d\n",
   VAR_37->software_version, VAR_37->hardware_version);
 if (VAR_37->hardware_version < VAR_10) {
  FUNC_2(&VAR_35->dev,
   "This driver is known to work with hardware version %hu,\n",
   VAR_10);
  FUNC_2(&VAR_35->dev,
   "but the device has hardware version %hu.\n",
   VAR_37->hardware_version);
  VAR_43 = 1;
 }


 if (VAR_43 == 1) {
  FUNC_2(&VAR_35->dev,
   "If you have some trouble using this driver,\n");
  FUNC_2(&VAR_35->dev,
   "please report to V4L ML at linux-media@vger.kernel.org\n");
 }


 FUNC_15(VAR_37, VAR_0);


 VAR_37->buf_size = VAR_25 * 3;
 VAR_37->buffer = FUNC_8(VAR_37->buf_size, VAR_6);
 if (!VAR_37->buffer) {
  VAR_42 = -VAR_2;
  goto err_ctrl;
 }


 VAR_37->wr_index = 0;
 VAR_37->rd_index = 0;
 FUNC_5(&VAR_37->read_queue);
 FUNC_23(VAR_35, VAR_37);


 VAR_42 = FUNC_16(VAR_37);
 if (VAR_42 < 0)
  goto err_buf;


 FUNC_14(VAR_37, 87.5 * VAR_5);


 VAR_42 = FUNC_29(&VAR_37->videodev, VAR_23,
   VAR_24);
 if (VAR_42) {
  FUNC_0(&VAR_35->dev, "Could not register video device\n");
  goto err_all;
 }

 return 0;
err_all:
 FUNC_21(VAR_37->int_in_urb);
err_buf:
 FUNC_7(VAR_37->buffer);
err_ctrl:
 FUNC_24(&VAR_37->hdl);
err_dev:
 FUNC_28(&VAR_37->v4l2_dev);
err_urb:
 FUNC_20(VAR_37->int_in_urb);
err_intbuffer:
 FUNC_7(VAR_37->int_in_buffer);
err_usbbuf:
 FUNC_7(VAR_37->usb_buf);
err_radio:
 FUNC_7(VAR_37);
err_initial:
 return VAR_42;
}
