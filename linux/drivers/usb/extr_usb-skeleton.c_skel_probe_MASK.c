
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_skel {int kref; int bulk_out_endpointAddr; int bulk_in_urb; int bulk_in_buffer; int bulk_in_size; int bulk_in_endpointAddr; int interface; int udev; int bulk_in_wait; int submitted; int err_lock; int io_mutex; int limit_sem; } ;
struct usb_interface {int minor; int dev; int cur_altsetting; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct usb_skel* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (int ,struct usb_endpoint_descriptor**,struct usb_endpoint_descriptor**,int *,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct usb_interface*) ;
 int FUNC_17 (struct usb_interface*,int *) ;
 int FUNC_18 (struct usb_interface*,struct usb_skel*) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_5,
        const struct usb_device_id *VAR_6)
{
 struct usb_skel *VAR_7;
 struct usb_endpoint_descriptor *VAR_8, *VAR_9;
 int VAR_10;


 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(&VAR_7->kref);
 FUNC_10(&VAR_7->limit_sem, VAR_2);
 FUNC_9(&VAR_7->io_mutex);
 FUNC_11(&VAR_7->err_lock);
 FUNC_2(&VAR_7->submitted);
 FUNC_3(&VAR_7->bulk_in_wait);

 VAR_7->udev = FUNC_15(FUNC_4(VAR_5));
 VAR_7->interface = FUNC_16(VAR_5);



 VAR_10 = FUNC_14(VAR_5->cur_altsetting,
   &VAR_8, &VAR_9, ((void*)0), ((void*)0));
 if (VAR_10) {
  FUNC_0(&VAR_5->dev,
   "Could not find both bulk-in and bulk-out endpoints\n");
  goto error;
 }

 VAR_7->bulk_in_size = FUNC_13(VAR_8);
 VAR_7->bulk_in_endpointAddr = VAR_8->bEndpointAddress;
 VAR_7->bulk_in_buffer = FUNC_5(VAR_7->bulk_in_size, VAR_1);
 if (!VAR_7->bulk_in_buffer) {
  VAR_10 = -VAR_0;
  goto error;
 }
 VAR_7->bulk_in_urb = FUNC_12(0, VAR_1);
 if (!VAR_7->bulk_in_urb) {
  VAR_10 = -VAR_0;
  goto error;
 }

 VAR_7->bulk_out_endpointAddr = VAR_9->bEndpointAddress;


 FUNC_18(VAR_5, VAR_7);


 VAR_10 = FUNC_17(VAR_5, &VAR_3);
 if (VAR_10) {

  FUNC_0(&VAR_5->dev,
   "Not able to get a minor for this device.\n");
  FUNC_18(VAR_5, ((void*)0));
  goto error;
 }


 FUNC_1(&VAR_5->dev,
   "USB Skeleton device now attached to USBSkel-%d",
   VAR_5->minor);
 return 0;

error:

 FUNC_7(&VAR_7->kref, VAR_4);

 return VAR_10;
}
