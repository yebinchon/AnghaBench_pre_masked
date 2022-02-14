
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; scalar_t__ minor; int * altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {int idProduct; int iSerialNumber; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct adu_device {scalar_t__ minor; int serial_number; void* interrupt_out_urb; void* interrupt_out_buffer; void* interrupt_in_urb; void* interrupt_in_buffer; void* read_buffer_secondary; void* read_buffer_primary; int interrupt_out_endpoint; int interrupt_in_endpoint; int write_wait; int read_wait; int udev; int buflock; int mtx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adu_device*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 void* FUNC_6 (int,int ) ;
 struct adu_device* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,char,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *,int *,int *,int *) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_interface*,int *) ;
 int FUNC_17 (struct usb_interface*,struct adu_device*) ;
 int FUNC_18 (struct usb_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_5,
       const struct usb_device_id *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_5(VAR_5);
 struct adu_device *VAR_8 = ((void*)0);
 int VAR_9 = -VAR_2;
 int VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_8 = FUNC_7(sizeof(struct adu_device), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 FUNC_10(&VAR_8->mtx);
 FUNC_11(&VAR_8->buflock);
 VAR_8->udev = FUNC_15(VAR_7);
 FUNC_4(&VAR_8->read_wait);
 FUNC_4(&VAR_8->write_wait);

 VAR_12 = FUNC_14(&VAR_5->altsetting[0],
   ((void*)0), ((void*)0),
   &VAR_8->interrupt_in_endpoint,
   &VAR_8->interrupt_out_endpoint);
 if (VAR_12) {
  FUNC_2(&VAR_5->dev, "interrupt endpoints not found\n");
  VAR_9 = VAR_12;
  goto error;
 }

 VAR_10 = FUNC_13(VAR_8->interrupt_in_endpoint);
 VAR_11 = FUNC_13(VAR_8->interrupt_out_endpoint);

 VAR_8->read_buffer_primary = FUNC_6((4 * VAR_10), VAR_3);
 if (!VAR_8->read_buffer_primary)
  goto error;


 FUNC_9(VAR_8->read_buffer_primary, 'a', VAR_10);
 FUNC_9(VAR_8->read_buffer_primary + VAR_10, 'b', VAR_10);
 FUNC_9(VAR_8->read_buffer_primary + (2 * VAR_10), 'c', VAR_10);
 FUNC_9(VAR_8->read_buffer_primary + (3 * VAR_10), 'd', VAR_10);

 VAR_8->read_buffer_secondary = FUNC_6((4 * VAR_10), VAR_3);
 if (!VAR_8->read_buffer_secondary)
  goto error;


 FUNC_9(VAR_8->read_buffer_secondary, 'e', VAR_10);
 FUNC_9(VAR_8->read_buffer_secondary + VAR_10, 'f', VAR_10);
 FUNC_9(VAR_8->read_buffer_secondary + (2 * VAR_10), 'g', VAR_10);
 FUNC_9(VAR_8->read_buffer_secondary + (3 * VAR_10), 'h', VAR_10);

 VAR_8->interrupt_in_buffer = FUNC_6(VAR_10, VAR_3);
 if (!VAR_8->interrupt_in_buffer)
  goto error;


 FUNC_9(VAR_8->interrupt_in_buffer, 'i', VAR_10);

 VAR_8->interrupt_in_urb = FUNC_12(0, VAR_3);
 if (!VAR_8->interrupt_in_urb)
  goto error;
 VAR_8->interrupt_out_buffer = FUNC_6(VAR_11, VAR_3);
 if (!VAR_8->interrupt_out_buffer)
  goto error;
 VAR_8->interrupt_out_urb = FUNC_12(0, VAR_3);
 if (!VAR_8->interrupt_out_urb)
  goto error;

 if (!FUNC_18(VAR_7, VAR_7->descriptor.iSerialNumber, VAR_8->serial_number,
   sizeof(VAR_8->serial_number))) {
  FUNC_2(&VAR_5->dev, "Could not retrieve serial number\n");
  VAR_9 = -VAR_1;
  goto error;
 }
 FUNC_1(&VAR_5->dev,"serial_number=%s", VAR_8->serial_number);


 FUNC_17(VAR_5, VAR_8);

 VAR_9 = FUNC_16(VAR_5, &VAR_4);

 if (VAR_9) {

  FUNC_2(&VAR_5->dev, "Not able to get a minor for this device.\n");
  FUNC_17(VAR_5, ((void*)0));
  goto error;
 }

 VAR_8->minor = VAR_5->minor;


 FUNC_3(&VAR_5->dev, "ADU%d %s now attached to /dev/usb/adutux%d\n",
   FUNC_8(VAR_7->descriptor.idProduct), VAR_8->serial_number,
   (VAR_8->minor - VAR_0));

 return 0;

error:
 FUNC_0(VAR_8);
 return VAR_9;
}
