
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int needs_remote_wakeup; int dev; struct usb_host_interface* cur_altsetting; } ;
struct usb_hub {int quirk_check_port_auto_suspend; int irq_urb_retry; int irq_urb_lock; int events; int init_work; int leds; struct usb_device* hdev; int * intfdev; int kref; } ;
struct usb_host_interface {TYPE_2__* endpoint; } ;
struct usb_device_id {int driver_info; } ;
struct TYPE_5__ {scalar_t__ autosuspend_delay; } ;
struct TYPE_7__ {TYPE_1__ power; } ;
struct usb_device {scalar_t__ level; scalar_t__ speed; scalar_t__ parent; int bus; TYPE_3__ dev; } ;
struct hc_driver {scalar_t__ bus_resume; scalar_t__ bus_suspend; } ;
struct TYPE_8__ {struct hc_driver* driver; } ;
struct TYPE_6__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (struct usb_hub*,int *) ;
 int FUNC_7 (struct usb_host_interface*) ;
 int FUNC_8 (struct usb_interface*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int *) ;
 struct usb_hub* FUNC_11 (int,int ) ;
 int * VAR_11 ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (struct usb_device*) ;
 int FUNC_17 (struct usb_device*) ;
 int FUNC_18 (struct usb_interface*) ;
 int FUNC_19 (struct usb_interface*,struct usb_hub*) ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_12, const struct usb_device_id *VAR_13)
{
 struct usb_host_interface *VAR_14;
 struct usb_device *VAR_15;
 struct usb_hub *VAR_16;

 VAR_14 = VAR_12->cur_altsetting;
 VAR_15 = FUNC_9(VAR_12);
 if (VAR_15->parent) {
  FUNC_16(VAR_15);
 } else {
  const struct hc_driver *VAR_17 = FUNC_2(VAR_15->bus)->driver;

  if (VAR_17->bus_suspend && VAR_17->bus_resume)
   FUNC_16(VAR_15);
 }

 if (VAR_15->level == VAR_6) {
  FUNC_3(&VAR_12->dev,
   "Unsupported bus topology: hub nested too deep\n");
  return -VAR_0;
 }
 if (!FUNC_7(VAR_14)) {
  FUNC_3(&VAR_12->dev, "bad descriptor, ignoring hub\n");
  return -VAR_1;
 }


 FUNC_4(&VAR_12->dev, "USB hub found\n");

 VAR_16 = FUNC_11(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_3;

 FUNC_10(&VAR_16->kref);
 VAR_16->intfdev = &VAR_12->dev;
 VAR_16->hdev = VAR_15;
 FUNC_0(&VAR_16->leds, VAR_11);
 FUNC_0(&VAR_16->init_work, ((void*)0));
 FUNC_1(&VAR_16->events, VAR_9);
 FUNC_14(&VAR_16->irq_urb_lock);
 FUNC_15(&VAR_16->irq_urb_retry, VAR_10, 0);
 FUNC_18(VAR_12);
 FUNC_17(VAR_15);

 FUNC_19(VAR_12, VAR_16);
 VAR_12->needs_remote_wakeup = 1;
 FUNC_13(&VAR_12->dev, 1);

 if (VAR_15->speed == VAR_7)
  VAR_8++;

 if (VAR_13->driver_info & VAR_5)
  VAR_16->quirk_check_port_auto_suspend = 1;

 if (FUNC_6(VAR_16, &VAR_14->endpoint[0].desc) >= 0)
  return 0;

 FUNC_8(VAR_12);
 return -VAR_2;
}
