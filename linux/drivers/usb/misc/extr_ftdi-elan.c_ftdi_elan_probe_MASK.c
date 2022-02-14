
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int minor; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_ftdi {int expected; int bulk_in_endpointAddr; int bulk_out_endpointAddr; TYPE_2__* udev; int respond_work; int command_work; int status_work; int * class; int bulk_in_buffer; int bulk_in_size; int u132_lock; struct usb_interface* interface; int sw_lock; scalar_t__ sequence_num; int ftdi_list; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_ftdi*) ;
 int VAR_4 ;
 int FUNC_4 (struct usb_ftdi*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct usb_ftdi*,int ) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ,int ) ;
 struct usb_ftdi* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct usb_endpoint_descriptor*) ;
 int FUNC_16 (struct usb_host_interface*,struct usb_endpoint_descriptor**,struct usb_endpoint_descriptor**,int *,int *) ;
 TYPE_2__* FUNC_17 (int ) ;
 int FUNC_18 (struct usb_interface*,int *) ;
 int FUNC_19 (struct usb_interface*,struct usb_ftdi*) ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_10,
      const struct usb_device_id *VAR_11)
{
 struct usb_host_interface *VAR_12;
 struct usb_endpoint_descriptor *VAR_13, *VAR_14;
 int VAR_15;
 struct usb_ftdi *VAR_16;

 VAR_16 = FUNC_8(sizeof(struct usb_ftdi), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_12(&VAR_8);
 FUNC_9(&VAR_16->ftdi_list, &VAR_9);
 VAR_16->sequence_num = ++VAR_7;
 FUNC_13(&VAR_8);
 FUNC_3(VAR_16);
 FUNC_14(&VAR_16->sw_lock, 1);
 VAR_16->udev = FUNC_17(FUNC_6(VAR_10));
 VAR_16->interface = VAR_10;
 FUNC_11(&VAR_16->u132_lock);
 VAR_16->expected = 4;

 VAR_12 = VAR_10->cur_altsetting;
 VAR_15 = FUNC_16(VAR_12,
   &VAR_13, &VAR_14, ((void*)0), ((void*)0));
 if (VAR_15) {
  FUNC_1(&VAR_16->udev->dev, "Could not find both bulk-in and bulk-out endpoints\n");
  goto error;
 }

 VAR_16->bulk_in_size = FUNC_15(VAR_13);
 VAR_16->bulk_in_endpointAddr = VAR_13->bEndpointAddress;
 VAR_16->bulk_in_buffer = FUNC_7(VAR_16->bulk_in_size, VAR_2);
 if (!VAR_16->bulk_in_buffer) {
  VAR_15 = -VAR_1;
  goto error;
 }

 VAR_16->bulk_out_endpointAddr = VAR_14->bEndpointAddress;

 FUNC_2(&VAR_16->udev->dev, "interface %d has I=%02X O=%02X\n",
   VAR_12->desc.bInterfaceNumber, VAR_16->bulk_in_endpointAddr,
   VAR_16->bulk_out_endpointAddr);
 FUNC_19(VAR_10, VAR_16);
 if (VAR_12->desc.bInterfaceNumber == 0 &&
     VAR_16->bulk_in_endpointAddr == 0x81 &&
     VAR_16->bulk_out_endpointAddr == 0x02) {
  VAR_15 = FUNC_18(VAR_10, &VAR_4);
  if (VAR_15) {
   FUNC_1(&VAR_16->udev->dev, "Not able to get a minor for this device\n");
   FUNC_19(VAR_10, ((void*)0));
   VAR_15 = -VAR_1;
   goto error;
  } else {
   VAR_16->class = &VAR_4;
   FUNC_2(&VAR_16->udev->dev, "USB FDTI=%p JTAG interface %d now attached to ftdi%d\n",
     VAR_16, VAR_12->desc.bInterfaceNumber,
     VAR_10->minor);
   return 0;
  }
 } else if (VAR_12->desc.bInterfaceNumber == 1 &&
     VAR_16->bulk_in_endpointAddr == 0x83 &&
     VAR_16->bulk_out_endpointAddr == 0x04) {
  VAR_16->class = ((void*)0);
  FUNC_2(&VAR_16->udev->dev, "USB FDTI=%p ELAN interface %d now activated\n",
    VAR_16, VAR_12->desc.bInterfaceNumber);
  FUNC_0(&VAR_16->status_work, VAR_6);
  FUNC_0(&VAR_16->command_work, VAR_3);
  FUNC_0(&VAR_16->respond_work, VAR_5);
  FUNC_5(VAR_16, FUNC_10(3 *1000));
  return 0;
 } else {
  FUNC_1(&VAR_16->udev->dev,
   "Could not find ELAN's U132 device\n");
  VAR_15 = -VAR_0;
  goto error;
 }
error:if (VAR_16) {
  FUNC_4(VAR_16);
 }
 return VAR_15;
}
