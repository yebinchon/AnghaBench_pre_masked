
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_yurex {int bbu; int kref; TYPE_2__* urb; void* int_buffer; int int_in_endpointAddr; int udev; TYPE_4__* cntl_urb; void* cntl_buffer; TYPE_5__* cntl_req; int interface; int waitq; int lock; int io_mutex; } ;
struct usb_interface {int minor; int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_6__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_9__ {int bRequestType; void* wLength; void* wIndex; void* wValue; int bRequest; } ;
struct TYPE_8__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_7__ {int transfer_flags; int transfer_dma; } ;


 int FUNC_0 (int ) ;
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
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_interface*) ;
 TYPE_5__* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 struct usb_yurex* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int ,int,int ,int *) ;
 void* FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_4__*,int ,int ,void*,void*,int,int ,struct usb_yurex*) ;
 int FUNC_15 (TYPE_2__*,int ,int ,void*,int,int ,struct usb_yurex*,int) ;
 int FUNC_16 (struct usb_host_interface*,struct usb_endpoint_descriptor**) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct usb_interface*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct usb_interface*,int *) ;
 int FUNC_21 (struct usb_interface*,struct usb_yurex*) ;
 int FUNC_22 (int ,int ) ;
 scalar_t__ FUNC_23 (TYPE_2__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_15, const struct usb_device_id *VAR_16)
{
 struct usb_yurex *VAR_17;
 struct usb_host_interface *VAR_18;
 struct usb_endpoint_descriptor *VAR_19;
 int VAR_20 = -VAR_1;
 FUNC_0(VAR_10);
 int VAR_21;


 VAR_17 = FUNC_9(sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  goto error;
 FUNC_7(&VAR_17->kref);
 FUNC_10(&VAR_17->io_mutex);
 FUNC_11(&VAR_17->lock);
 FUNC_4(&VAR_17->waitq);

 VAR_17->udev = FUNC_17(FUNC_5(VAR_15));
 VAR_17->interface = FUNC_18(VAR_15);


 VAR_18 = VAR_15->cur_altsetting;
 VAR_21 = FUNC_16(VAR_18, &VAR_19);
 if (VAR_21) {
  FUNC_2(&VAR_15->dev, "Could not find endpoints\n");
  VAR_20 = VAR_21;
  goto error;
 }

 VAR_17->int_in_endpointAddr = VAR_19->bEndpointAddress;


 VAR_17->cntl_urb = FUNC_13(0, VAR_2);
 if (!VAR_17->cntl_urb)
  goto error;


 VAR_17->cntl_req = FUNC_6(VAR_9, VAR_2);
 if (!VAR_17->cntl_req)
  goto error;


 VAR_17->cntl_buffer = FUNC_12(VAR_17->udev, VAR_9,
           VAR_2,
           &VAR_17->cntl_urb->transfer_dma);
 if (!VAR_17->cntl_buffer) {
  FUNC_2(&VAR_15->dev, "Could not allocate cntl_buffer\n");
  goto error;
 }


 VAR_17->cntl_req->bRequestType = VAR_6 | VAR_8 |
          VAR_7;
 VAR_17->cntl_req->bRequest = VAR_4;
 VAR_17->cntl_req->wValue = FUNC_1((VAR_3 + 1) << 8);
 VAR_17->cntl_req->wIndex = FUNC_1(VAR_18->desc.bInterfaceNumber);
 VAR_17->cntl_req->wLength = FUNC_1(VAR_9);

 FUNC_14(VAR_17->cntl_urb, VAR_17->udev,
        FUNC_22(VAR_17->udev, 0),
        (void *)VAR_17->cntl_req, VAR_17->cntl_buffer,
        VAR_9, VAR_12, VAR_17);
 VAR_17->cntl_urb->transfer_flags |= VAR_5;



 VAR_17->urb = FUNC_13(0, VAR_2);
 if (!VAR_17->urb)
  goto error;


 VAR_17->int_buffer = FUNC_12(VAR_17->udev, VAR_9,
     VAR_2, &VAR_17->urb->transfer_dma);
 if (!VAR_17->int_buffer) {
  FUNC_2(&VAR_15->dev, "Could not allocate int_buffer\n");
  goto error;
 }


 FUNC_15(VAR_17->urb, VAR_17->udev,
    FUNC_19(VAR_17->udev, VAR_17->int_in_endpointAddr),
    VAR_17->int_buffer, VAR_9, VAR_14,
    VAR_17, 1);
 VAR_17->urb->transfer_flags |= VAR_5;
 if (FUNC_23(VAR_17->urb, VAR_2)) {
  VAR_20 = -VAR_0;
  FUNC_2(&VAR_15->dev, "Could not submitting URB\n");
  goto error;
 }


 FUNC_21(VAR_15, VAR_17);
 VAR_17->bbu = -1;


 VAR_20 = FUNC_20(VAR_15, &VAR_11);
 if (VAR_20) {
  FUNC_2(&VAR_15->dev,
   "Not able to get a minor for this device.\n");
  FUNC_21(VAR_15, ((void*)0));
  goto error;
 }

 FUNC_3(&VAR_15->dev,
   "USB YUREX device now attached to Yurex #%d\n",
   VAR_15->minor);

 return 0;

error:
 if (VAR_17)

  FUNC_8(&VAR_17->kref, VAR_13);
 return VAR_20;
}
