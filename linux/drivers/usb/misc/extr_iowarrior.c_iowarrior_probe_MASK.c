
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_interface {int dev; scalar_t__ minor; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_11__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_4__ desc; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_8__ {int iSerialNumber; int idProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct iowarrior {scalar_t__ product_id; int report_size; int present; scalar_t__ minor; int chip_serial; TYPE_5__* interface; int read_queue; TYPE_6__* int_in_endpoint; int int_in_buffer; struct usb_device* udev; int int_in_urb; int int_out_endpoint; int submitted; int write_wait; int write_busy; int read_wait; int overflow_flag; int read_idx; int intr_idx; int mutex; } ;
struct TYPE_13__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_12__ {TYPE_3__* cur_altsetting; } ;
struct TYPE_9__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_10__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct iowarrior*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ,int ) ;
 struct iowarrior* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct usb_device*,int ,int,int,int ,int ,int *,int ,int ) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (int ,struct usb_device*,int ,int ,int,int ,struct iowarrior*,int ) ;
 int FUNC_18 (struct usb_host_interface*,TYPE_6__**) ;
 int FUNC_19 (struct usb_host_interface*,int *) ;
 TYPE_5__* FUNC_20 (struct usb_interface*) ;
 int FUNC_21 (struct usb_device*,int ) ;
 int FUNC_22 (struct usb_interface*,int *) ;
 int FUNC_23 (struct usb_interface*,struct iowarrior*) ;
 int FUNC_24 (struct usb_device*,int ) ;
 int FUNC_25 (struct usb_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_26(struct usb_interface *VAR_10,
      const struct usb_device_id *VAR_11)
{
 struct usb_device *VAR_12 = FUNC_5(VAR_10);
 struct iowarrior *VAR_13 = ((void*)0);
 struct usb_host_interface *VAR_14;
 int VAR_15 = -VAR_0;
 int VAR_16;


 VAR_13 = FUNC_9(sizeof(struct iowarrior), VAR_1);
 if (!VAR_13)
  return VAR_15;

 FUNC_12(&VAR_13->mutex);

 FUNC_0(&VAR_13->intr_idx, 0);
 FUNC_0(&VAR_13->read_idx, 0);
 FUNC_0(&VAR_13->overflow_flag, 0);
 FUNC_4(&VAR_13->read_wait);
 FUNC_0(&VAR_13->write_busy, 0);
 FUNC_4(&VAR_13->write_wait);

 VAR_13->udev = VAR_12;
 VAR_13->interface = FUNC_20(VAR_10);

 VAR_14 = VAR_10->cur_altsetting;
 VAR_13->product_id = FUNC_10(VAR_12->descriptor.idProduct);

 FUNC_3(&VAR_13->submitted);

 VAR_16 = FUNC_18(VAR_14, &VAR_13->int_in_endpoint);
 if (VAR_16) {
  FUNC_1(&VAR_10->dev, "no interrupt-in endpoint found\n");
  VAR_15 = VAR_16;
  goto error;
 }

 if (VAR_13->product_id == VAR_5) {
  VAR_16 = FUNC_19(VAR_14,
    &VAR_13->int_out_endpoint);
  if (VAR_16) {
   FUNC_1(&VAR_10->dev, "no interrupt-out endpoint found\n");
   VAR_15 = VAR_16;
   goto error;
  }
 }


 VAR_13->report_size = FUNC_16(VAR_13->int_in_endpoint);
 if ((VAR_13->interface->cur_altsetting->desc.bInterfaceNumber == 0) &&
     (VAR_13->product_id == VAR_5))

  VAR_13->report_size = 7;


 VAR_13->int_in_urb = FUNC_14(0, VAR_1);
 if (!VAR_13->int_in_urb)
  goto error;
 VAR_13->int_in_buffer = FUNC_7(VAR_13->report_size, VAR_1);
 if (!VAR_13->int_in_buffer)
  goto error;
 FUNC_17(VAR_13->int_in_urb, VAR_13->udev,
    FUNC_21(VAR_13->udev,
     VAR_13->int_in_endpoint->bEndpointAddress),
    VAR_13->int_in_buffer, VAR_13->report_size,
    VAR_8, VAR_13,
    VAR_13->int_in_endpoint->bInterval);

 VAR_13->read_queue =
     FUNC_8(VAR_13->report_size + 1, VAR_3,
     VAR_1);
 if (!VAR_13->read_queue)
  goto error;

 FUNC_11(VAR_13->chip_serial, 0x00, sizeof(VAR_13->chip_serial));
 FUNC_25(VAR_12, VAR_12->descriptor.iSerialNumber, VAR_13->chip_serial,
     sizeof(VAR_13->chip_serial));
 if (FUNC_13(VAR_13->chip_serial) != 8)
  FUNC_11(VAR_13->chip_serial, 0x00, sizeof(VAR_13->chip_serial));


 if (VAR_13->interface->cur_altsetting->desc.bInterfaceNumber == 0) {
     FUNC_15(VAR_12, FUNC_24(VAR_12, 0),
       0x0A,
       VAR_7 | VAR_6, 0,
       0, ((void*)0), 0, VAR_4);
 }

 VAR_13->present = 1;


 FUNC_23(VAR_10, VAR_13);

 VAR_15 = FUNC_22(VAR_10, &VAR_9);
 if (VAR_15) {

  FUNC_1(&VAR_10->dev, "Not able to get a minor for this device.\n");
  goto error;
 }

 VAR_13->minor = VAR_10->minor;


 FUNC_2(&VAR_10->dev, "IOWarrior product=0x%x, serial=%s interface=%d "
   "now attached to iowarrior%d\n", VAR_13->product_id, VAR_13->chip_serial,
   VAR_14->desc.bInterfaceNumber, VAR_13->minor - VAR_2);
 return VAR_15;

error:
 FUNC_6(VAR_13);
 return VAR_15;
}
