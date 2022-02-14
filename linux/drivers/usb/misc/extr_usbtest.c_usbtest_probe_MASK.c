
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usbtest_info {scalar_t__ alt; scalar_t__ ctrl_out; int name; scalar_t__ ep_out; scalar_t__ ep_in; scalar_t__ autoconf; } ;
struct usbtest_dev {scalar_t__ out_int_pipe; scalar_t__ in_int_pipe; scalar_t__ out_iso_pipe; scalar_t__ in_iso_pipe; scalar_t__ out_pipe; scalar_t__ in_pipe; struct usbtest_dev* buf; struct usb_interface* intf; int lock; struct usbtest_info* info; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {scalar_t__ match_flags; scalar_t__ driver_info; } ;
struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {scalar_t__ speed; TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct usbtest_dev*,char*,int) ;
 int FUNC_1 (int *,char*,scalar_t__,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct usbtest_dev*,struct usb_interface*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usbtest_dev*) ;
 struct usbtest_dev* FUNC_5 (int ,int ) ;
 struct usbtest_dev* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct usb_device*,scalar_t__) ;
 int FUNC_11 (struct usb_interface*,struct usbtest_dev*) ;
 scalar_t__ FUNC_12 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct usb_device*,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_15(struct usb_interface *VAR_9, const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11;
 struct usbtest_dev *VAR_12;
 struct usbtest_info *VAR_13;
 char *VAR_14, *VAR_15;
 char *VAR_16, *VAR_17;
 char *VAR_18, *VAR_19;

 VAR_11 = FUNC_3(VAR_9);
 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_13 = (struct usbtest_info *) VAR_10->driver_info;
 VAR_12->info = VAR_13;
 FUNC_8(&VAR_12->lock);

 VAR_12->intf = VAR_9;


 VAR_12->buf = FUNC_5(VAR_3, VAR_2);
 if (VAR_12->buf == ((void*)0)) {
  FUNC_4(VAR_12);
  return -VAR_1;
 }





 VAR_14 = VAR_15 = "";
 VAR_16 = VAR_17 = "";
 VAR_18 = VAR_19 = "";
 if (VAR_5 || VAR_11->speed == VAR_4) {
  if (VAR_13->ep_in) {
   VAR_12->in_pipe = FUNC_10(VAR_11, VAR_13->ep_in);
   VAR_14 = " intr-in";
  }
  if (VAR_13->ep_out) {
   VAR_12->out_pipe = FUNC_13(VAR_11, VAR_13->ep_out);
   VAR_15 = " intr-out";
  }
 } else {
  if (VAR_6 >= 0 || VAR_13->autoconf) {
   int VAR_20;

   VAR_20 = FUNC_2(VAR_12, VAR_9);
   if (VAR_20 < 0) {
    FUNC_0(VAR_12, "couldn't get endpoints, %d\n",
      VAR_20);
    FUNC_4(VAR_12->buf);
    FUNC_4(VAR_12);
    return VAR_20;
   }

  } else {
   if (VAR_13->ep_in)
    VAR_12->in_pipe = FUNC_9(VAR_11,
       VAR_13->ep_in);
   if (VAR_13->ep_out)
    VAR_12->out_pipe = FUNC_12(VAR_11,
       VAR_13->ep_out);
  }
  if (VAR_12->in_pipe)
   VAR_14 = " bulk-in";
  if (VAR_12->out_pipe)
   VAR_15 = " bulk-out";
  if (VAR_12->in_iso_pipe)
   VAR_16 = " iso-in";
  if (VAR_12->out_iso_pipe)
   VAR_17 = " iso-out";
  if (VAR_12->in_int_pipe)
   VAR_18 = " int-in";
  if (VAR_12->out_int_pipe)
   VAR_19 = " int-out";
 }

 FUNC_11(VAR_9, VAR_12);
 FUNC_1(&VAR_9->dev, "%s\n", VAR_13->name);
 FUNC_1(&VAR_9->dev, "%s {control%s%s%s%s%s%s%s} tests%s\n",
   FUNC_14(VAR_11->speed),
   VAR_13->ctrl_out ? " in/out" : "",
   VAR_14, VAR_15,
   VAR_16, VAR_17,
   VAR_18, VAR_19,
   VAR_13->alt >= 0 ? " (+alt)" : "");
 return 0;
}
