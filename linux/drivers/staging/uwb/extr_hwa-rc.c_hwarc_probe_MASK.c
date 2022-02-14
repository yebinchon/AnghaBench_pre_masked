
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uwb_rc {int * filter_event; int * filter_cmd; int reset; int cmd; int stop; int start; int owner; } ;
struct device {int dummy; } ;
struct usb_interface {TYPE_3__* cur_altsetting; struct device dev; } ;
struct usb_device_id {int driver_info; } ;
struct hwarc {int usb_dev; struct uwb_rc* uwb_rc; int usb_iface; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_6__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (struct uwb_rc*) ;
 int FUNC_2 (struct hwarc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct hwarc*) ;
 struct hwarc* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (struct usb_interface*,struct hwarc*) ;
 int FUNC_12 (struct uwb_rc*,struct device*,struct hwarc*) ;
 struct uwb_rc* FUNC_13 () ;
 int FUNC_14 (struct uwb_rc*) ;
 int FUNC_15 (struct uwb_rc*) ;

__attribute__((used)) static int FUNC_16(struct usb_interface *VAR_11,
         const struct usb_device_id *VAR_12)
{
 int VAR_13;
 struct uwb_rc *VAR_14;
 struct hwarc *VAR_15;
 struct device *VAR_16 = &VAR_11->dev;

 if (VAR_11->cur_altsetting->desc.bNumEndpoints < 1)
  return -VAR_0;
 if (!FUNC_6(&VAR_11->cur_altsetting->endpoint[0].desc))
  return -VAR_0;

 VAR_13 = -VAR_1;
 VAR_14 = FUNC_13();
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_16, "unable to allocate RC instance\n");
  goto error_rc_alloc;
 }
 VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_2);
 if (VAR_15 == ((void*)0)) {
  FUNC_0(VAR_16, "unable to allocate HWA RC instance\n");
  goto error_alloc;
 }
 FUNC_2(VAR_15);
 VAR_15->usb_dev = FUNC_7(FUNC_3(VAR_11));
 VAR_15->usb_iface = FUNC_8(VAR_11);
 VAR_15->uwb_rc = VAR_14;

 VAR_14->owner = VAR_3;
 VAR_14->start = VAR_8;
 VAR_14->stop = VAR_9;
 VAR_14->cmd = VAR_5;
 VAR_14->reset = VAR_10;
 if (VAR_12->driver_info & VAR_4) {
  VAR_14->filter_cmd = ((void*)0);
  VAR_14->filter_event = ((void*)0);
 } else {
  VAR_14->filter_cmd = VAR_6;
  VAR_14->filter_event = VAR_7;
 }

 VAR_13 = FUNC_12(VAR_14, VAR_16, VAR_15);
 if (VAR_13 < 0)
  goto error_rc_add;
 VAR_13 = FUNC_1(VAR_14);
 if (VAR_13 < 0) {
  FUNC_0(VAR_16, "cannot retrieve version of RC \n");
  goto error_get_version;
 }
 FUNC_11(VAR_11, VAR_15);
 return 0;

error_get_version:
 FUNC_15(VAR_14);
error_rc_add:
 FUNC_10(VAR_11);
 FUNC_9(VAR_15->usb_dev);
 FUNC_4(VAR_15);
error_alloc:
 FUNC_14(VAR_14);
error_rc_alloc:
 return VAR_13;
}
