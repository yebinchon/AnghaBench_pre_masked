
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {scalar_t__ minor; int dev; struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {void* bMaxPacketSize0; int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct ld_usb {int interrupt_in_endpoint_size; TYPE_2__* interrupt_out_endpoint; scalar_t__ interrupt_out_interval; TYPE_2__* interrupt_in_endpoint; scalar_t__ interrupt_in_interval; void* interrupt_out_urb; int interrupt_out_buffer; void* interrupt_out_endpoint_size; void* interrupt_in_urb; void* interrupt_in_buffer; int ring_buffer; int write_wait; int read_wait; struct usb_interface* intf; int rbsl; int mutex; } ;
struct TYPE_6__ {scalar_t__ bInterval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,void*,int ) ;
 struct ld_usb* FUNC_9 (int,int ) ;
 int VAR_7 ;
 int FUNC_10 (struct ld_usb*) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (int *) ;
 int VAR_10 ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int ,int ) ;
 void* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct usb_host_interface*,TYPE_2__**) ;
 int FUNC_17 (struct usb_host_interface*,TYPE_2__**) ;
 int FUNC_18 (struct usb_interface*,int *) ;
 int FUNC_19 (struct usb_interface*,struct ld_usb*) ;
 int FUNC_20 (struct usb_device*,int,char*,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_12, const struct usb_device_id *VAR_13)
{
 struct usb_device *VAR_14 = FUNC_4(VAR_12);
 struct ld_usb *VAR_15 = ((void*)0);
 struct usb_host_interface *VAR_16;
 char *VAR_17;
 int VAR_18 = -VAR_0;
 int VAR_19;



 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  goto exit;
 FUNC_12(&VAR_15->mutex);
 FUNC_13(&VAR_15->rbsl);
 VAR_15->intf = VAR_12;
 FUNC_3(&VAR_15->read_wait);
 FUNC_3(&VAR_15->write_wait);


 if ((FUNC_11(VAR_14->descriptor.idVendor) == VAR_6) &&
     ((FUNC_11(VAR_14->descriptor.idProduct) == VAR_2) ||
      (FUNC_11(VAR_14->descriptor.idProduct) == VAR_3)) &&
     (FUNC_11(VAR_14->descriptor.bcdDevice) <= 0x103)) {
  VAR_17 = FUNC_7(256, VAR_1);
  if (!VAR_17)
   goto error;

  FUNC_20(VAR_14, 255, VAR_17, 256);
  FUNC_6(VAR_17);
 }

 VAR_16 = VAR_12->cur_altsetting;

 VAR_19 = FUNC_16(VAR_16,
   &VAR_15->interrupt_in_endpoint);
 if (VAR_19) {
  FUNC_0(&VAR_12->dev, "Interrupt in endpoint not found\n");
  VAR_18 = VAR_19;
  goto error;
 }

 VAR_19 = FUNC_17(VAR_16,
   &VAR_15->interrupt_out_endpoint);
 if (VAR_19)
  FUNC_2(&VAR_12->dev, "Interrupt out endpoint not found (using control endpoint instead)\n");

 VAR_15->interrupt_in_endpoint_size = FUNC_15(VAR_15->interrupt_in_endpoint);
 VAR_15->ring_buffer = FUNC_5(VAR_10,
   sizeof(size_t) + VAR_15->interrupt_in_endpoint_size,
   VAR_1);
 if (!VAR_15->ring_buffer)
  goto error;
 VAR_15->interrupt_in_buffer = FUNC_7(VAR_15->interrupt_in_endpoint_size, VAR_1);
 if (!VAR_15->interrupt_in_buffer)
  goto error;
 VAR_15->interrupt_in_urb = FUNC_14(0, VAR_1);
 if (!VAR_15->interrupt_in_urb)
  goto error;
 VAR_15->interrupt_out_endpoint_size = VAR_15->interrupt_out_endpoint ? FUNC_15(VAR_15->interrupt_out_endpoint) :
          VAR_14->descriptor.bMaxPacketSize0;
 VAR_15->interrupt_out_buffer =
  FUNC_8(VAR_11,
         VAR_15->interrupt_out_endpoint_size, VAR_1);
 if (!VAR_15->interrupt_out_buffer)
  goto error;
 VAR_15->interrupt_out_urb = FUNC_14(0, VAR_1);
 if (!VAR_15->interrupt_out_urb)
  goto error;
 VAR_15->interrupt_in_interval = VAR_8 > VAR_15->interrupt_in_endpoint->bInterval ? VAR_8 : VAR_15->interrupt_in_endpoint->bInterval;
 if (VAR_15->interrupt_out_endpoint)
  VAR_15->interrupt_out_interval = VAR_9 > VAR_15->interrupt_out_endpoint->bInterval ? VAR_9 : VAR_15->interrupt_out_endpoint->bInterval;


 FUNC_19(VAR_12, VAR_15);

 VAR_18 = FUNC_18(VAR_12, &VAR_7);
 if (VAR_18) {

  FUNC_0(&VAR_12->dev, "Not able to get a minor for this device.\n");
  FUNC_19(VAR_12, ((void*)0));
  goto error;
 }


 FUNC_1(&VAR_12->dev, "LD USB Device #%d now attached to major %d minor %d\n",
  (VAR_12->minor - VAR_4), VAR_5, VAR_12->minor);

exit:
 return VAR_18;

error:
 FUNC_10(VAR_15);

 return VAR_18;
}
