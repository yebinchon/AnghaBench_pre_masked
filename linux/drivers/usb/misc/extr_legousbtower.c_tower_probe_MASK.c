
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {struct device dev; scalar_t__ minor; int cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct tower_get_version_reply {int build_no; int minor; scalar_t__ major; } ;
struct lego_usb_tower {scalar_t__ minor; TYPE_2__* interrupt_out_endpoint; scalar_t__ interrupt_out_interval; TYPE_1__* interrupt_in_endpoint; scalar_t__ interrupt_in_interval; int * interrupt_out_urb; int * interrupt_out_buffer; int * interrupt_in_urb; int * interrupt_in_buffer; int * read_buffer; scalar_t__ interrupt_out_busy; scalar_t__ interrupt_in_done; scalar_t__ interrupt_in_running; int write_wait; int read_wait; int read_last_arrival; int packet_timeout_jiffies; int read_buffer_lock; scalar_t__ read_packet_length; scalar_t__ read_buffer_length; scalar_t__ disconnected; scalar_t__ open_count; int udev; int lock; } ;
struct TYPE_5__ {scalar_t__ bInterval; } ;
struct TYPE_4__ {scalar_t__ bInterval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct tower_get_version_reply*) ;
 void* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int *) ;
 int VAR_14 ;
 int FUNC_10 (struct lego_usb_tower*) ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct usb_device*,int ,int ,int,int ,int ,struct tower_get_version_reply*,int,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int *,int *,TYPE_1__**,TYPE_2__**) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_device*,int ) ;
 int FUNC_17 (struct usb_interface*,int *) ;
 int FUNC_18 (struct usb_interface*,struct lego_usb_tower*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_19 (struct usb_interface *VAR_16, const struct usb_device_id *VAR_17)
{
 struct device *VAR_18 = &VAR_16->dev;
 struct usb_device *VAR_19 = FUNC_3(VAR_16);
 struct lego_usb_tower *VAR_20 = ((void*)0);
 struct tower_get_version_reply *VAR_21 = ((void*)0);
 int VAR_22 = -VAR_1;
 int VAR_23;



 VAR_20 = FUNC_5 (sizeof(struct lego_usb_tower), VAR_2);

 if (!VAR_20)
  goto exit;

 FUNC_8(&VAR_20->lock);

 VAR_20->udev = FUNC_15(VAR_19);
 VAR_20->open_count = 0;
 VAR_20->disconnected = 0;

 VAR_20->read_buffer = ((void*)0);
 VAR_20->read_buffer_length = 0;
 VAR_20->read_packet_length = 0;
 FUNC_9 (&VAR_20->read_buffer_lock);
 VAR_20->packet_timeout_jiffies = FUNC_7(VAR_12);
 VAR_20->read_last_arrival = VAR_11;

 FUNC_2 (&VAR_20->read_wait);
 FUNC_2 (&VAR_20->write_wait);

 VAR_20->interrupt_in_buffer = ((void*)0);
 VAR_20->interrupt_in_endpoint = ((void*)0);
 VAR_20->interrupt_in_urb = ((void*)0);
 VAR_20->interrupt_in_running = 0;
 VAR_20->interrupt_in_done = 0;

 VAR_20->interrupt_out_buffer = ((void*)0);
 VAR_20->interrupt_out_endpoint = ((void*)0);
 VAR_20->interrupt_out_urb = ((void*)0);
 VAR_20->interrupt_out_busy = 0;

 VAR_23 = FUNC_14(VAR_16->cur_altsetting,
   ((void*)0), ((void*)0),
   &VAR_20->interrupt_in_endpoint,
   &VAR_20->interrupt_out_endpoint);
 if (VAR_23) {
  FUNC_0(VAR_18, "interrupt endpoints not found\n");
  VAR_22 = VAR_23;
  goto error;
 }

 VAR_20->read_buffer = FUNC_5 (VAR_13, VAR_2);
 if (!VAR_20->read_buffer)
  goto error;
 VAR_20->interrupt_in_buffer = FUNC_5 (FUNC_13(VAR_20->interrupt_in_endpoint), VAR_2);
 if (!VAR_20->interrupt_in_buffer)
  goto error;
 VAR_20->interrupt_in_urb = FUNC_11(0, VAR_2);
 if (!VAR_20->interrupt_in_urb)
  goto error;
 VAR_20->interrupt_out_buffer = FUNC_5 (VAR_15, VAR_2);
 if (!VAR_20->interrupt_out_buffer)
  goto error;
 VAR_20->interrupt_out_urb = FUNC_11(0, VAR_2);
 if (!VAR_20->interrupt_out_urb)
  goto error;
 VAR_20->interrupt_in_interval = VAR_9 ? VAR_9 : VAR_20->interrupt_in_endpoint->bInterval;
 VAR_20->interrupt_out_interval = VAR_10 ? VAR_10 : VAR_20->interrupt_out_endpoint->bInterval;

 VAR_21 = FUNC_5(sizeof(*VAR_21), VAR_2);

 if (!VAR_21) {
  VAR_22 = -VAR_1;
  goto error;
 }


 VAR_23 = FUNC_12 (VAR_19,
      FUNC_16(VAR_19, 0),
      VAR_4,
      VAR_8 | VAR_5 | VAR_7,
      0,
      0,
      VAR_21,
      sizeof(*VAR_21),
      1000);
 if (VAR_23 != sizeof(*VAR_21)) {
  if (VAR_23 >= 0)
   VAR_23 = -VAR_0;
  FUNC_0(VAR_18, "get version request failed: %d\n", VAR_23);
  VAR_22 = VAR_23;
  goto error;
 }
 FUNC_1(&VAR_16->dev,
   "LEGO USB Tower firmware version is %d.%d build %d\n",
   VAR_21->major,
   VAR_21->minor,
   FUNC_6(VAR_21->build_no));


 FUNC_18 (VAR_16, VAR_20);

 VAR_22 = FUNC_17 (VAR_16, &VAR_14);

 if (VAR_22) {

  FUNC_0(VAR_18, "Not able to get a minor for this device.\n");
  goto error;
 }
 VAR_20->minor = VAR_16->minor;


 FUNC_1(&VAR_16->dev, "LEGO USB Tower #%d now attached to major "
   "%d minor %d\n", (VAR_20->minor - VAR_3),
   VAR_6, VAR_20->minor);

exit:
 FUNC_4(VAR_21);
 return VAR_22;

error:
 FUNC_4(VAR_21);
 FUNC_10(VAR_20);
 return VAR_22;
}
