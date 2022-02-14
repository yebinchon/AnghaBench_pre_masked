
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_lcd {int kref; TYPE_2__* udev; int bulk_out_endpointAddr; int bulk_in_buffer; int bulk_in_size; int bulk_in_endpointAddr; struct usb_interface* interface; int submitted; int io_rwsem; int limit_sem; } ;
struct usb_interface {int minor; int dev; int cur_altsetting; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int bcdDevice; int idProduct; } ;
struct TYPE_4__ {int devnum; TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 struct usb_lcd* FUNC_9 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct usb_endpoint_descriptor*) ;
 int FUNC_13 (int ,struct usb_endpoint_descriptor**,struct usb_endpoint_descriptor**,int *,int *) ;
 TYPE_2__* FUNC_14 (int ) ;
 int FUNC_15 (struct usb_interface*,int *) ;
 int FUNC_16 (struct usb_interface*,struct usb_lcd*) ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct usb_lcd *VAR_8 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_7(&VAR_8->kref);
 FUNC_11(&VAR_8->limit_sem, VAR_3);
 FUNC_3(&VAR_8->io_rwsem);
 FUNC_4(&VAR_8->submitted);

 VAR_8->udev = FUNC_14(FUNC_5(VAR_6));
 VAR_8->interface = VAR_6;

 if (FUNC_10(VAR_8->udev->descriptor.idProduct) != 0x0001) {
  FUNC_2(&VAR_6->dev, "USBLCD model not supported.\n");
  VAR_12 = -VAR_0;
  goto error;
 }



 VAR_12 = FUNC_13(VAR_6->cur_altsetting,
   &VAR_9, &VAR_10, ((void*)0), ((void*)0));
 if (VAR_12) {
  FUNC_0(&VAR_6->dev,
   "Could not find both bulk-in and bulk-out endpoints\n");
  goto error;
 }

 VAR_8->bulk_in_size = FUNC_12(VAR_9);
 VAR_8->bulk_in_endpointAddr = VAR_9->bEndpointAddress;
 VAR_8->bulk_in_buffer = FUNC_6(VAR_8->bulk_in_size, VAR_2);
 if (!VAR_8->bulk_in_buffer) {
  VAR_12 = -VAR_1;
  goto error;
 }

 VAR_8->bulk_out_endpointAddr = VAR_10->bEndpointAddress;


 FUNC_16(VAR_6, VAR_8);


 VAR_12 = FUNC_15(VAR_6, &VAR_4);
 if (VAR_12) {

  FUNC_0(&VAR_6->dev,
   "Not able to get a minor for this device.\n");
  goto error;
 }

 VAR_11 = FUNC_10(VAR_8->udev->descriptor.bcdDevice);

 FUNC_1(&VAR_6->dev, "USBLCD Version %1d%1d.%1d%1d found "
   "at address %d\n", (VAR_11 & 0xF000)>>12, (VAR_11 & 0xF00)>>8,
   (VAR_11 & 0xF0)>>4, (VAR_11 & 0xF), VAR_8->udev->devnum);


 FUNC_1(&VAR_6->dev, "USB LCD device now attached to USBLCD-%d\n",
   VAR_6->minor);
 return 0;

error:
 FUNC_8(&VAR_8->kref, VAR_5);
 return VAR_12;
}
