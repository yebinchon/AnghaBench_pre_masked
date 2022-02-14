
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_4__ {int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; scalar_t__ serial; scalar_t__ product; } ;
struct TYPE_5__ {int quality; int read; int * name; } ;
struct chaoskey {int in_ep; int reads_started; int size; int present; int hwrng_registered; TYPE_2__ hwrng; int * name; int rng_lock; int lock; int wait_q; int * buf; int urb; int interface; } ;
struct TYPE_6__ {int * name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_0 (struct chaoskey*) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int * FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 int * FUNC_5 (int,int ) ;
 struct chaoskey* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct usb_interface*,char*,...) ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_endpoint_descriptor*) ;
 int FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (struct usb_interface*,char*) ;
 int FUNC_15 (int ,struct usb_device*,int ,int *,int,int ,struct chaoskey*) ;
 int FUNC_16 (struct usb_host_interface*,struct usb_endpoint_descriptor**) ;
 int FUNC_17 (struct usb_interface*) ;
 int FUNC_18 (struct usb_device*,int) ;
 int FUNC_19 (struct usb_interface*,int *) ;
 int FUNC_20 (struct usb_interface*,struct chaoskey*) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_9,
     const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11 = FUNC_3(VAR_9);
 struct usb_host_interface *VAR_12 = VAR_9->cur_altsetting;
 struct usb_endpoint_descriptor *VAR_13;
 int VAR_14;
 struct chaoskey *VAR_15;
 int VAR_16 = -VAR_3;
 int VAR_17;
 int VAR_18;

 FUNC_10(VAR_9, "probe %s-%s", VAR_11->product, VAR_11->serial);


 VAR_18 = FUNC_16(VAR_12, &VAR_13);
 if (VAR_18) {
  FUNC_10(VAR_9, "no IN endpoint found");
  return VAR_18;
 }

 VAR_14 = FUNC_13(VAR_13);
 VAR_17 = FUNC_12(VAR_13);


 if (VAR_17 <= 0) {
  FUNC_10(VAR_9, "invalid size (%d)", VAR_17);
  return -VAR_2;
 }

 if (VAR_17 > VAR_1) {
  FUNC_10(VAR_9, "size reduced from %d to %d\n",
   VAR_17, VAR_1);
  VAR_17 = VAR_1;
 }



 VAR_15 = FUNC_6(sizeof(struct chaoskey), VAR_4);

 if (VAR_15 == ((void*)0))
  goto out;

 VAR_15->interface = FUNC_17(VAR_9);

 VAR_15->buf = FUNC_5(VAR_17, VAR_4);

 if (VAR_15->buf == ((void*)0))
  goto out;

 VAR_15->urb = FUNC_9(0, VAR_4);

 if (!VAR_15->urb)
  goto out;

 FUNC_15(VAR_15->urb,
  VAR_11,
  FUNC_18(VAR_11, VAR_14),
  VAR_15->buf,
  VAR_17,
  VAR_5,
  VAR_15);





 if (VAR_11->product && VAR_11->serial) {
  VAR_15->name = FUNC_4(VAR_4, "%s-%s", VAR_11->product,
          VAR_11->serial);
  if (VAR_15->name == ((void*)0))
   goto out;
 }

 VAR_15->in_ep = VAR_14;

 if (FUNC_7(VAR_11->descriptor.idVendor) != VAR_0)
  VAR_15->reads_started = 1;

 VAR_15->size = VAR_17;
 VAR_15->present = 1;

 FUNC_2(&VAR_15->wait_q);

 FUNC_8(&VAR_15->lock);
 FUNC_8(&VAR_15->rng_lock);

 FUNC_20(VAR_9, VAR_15);

 VAR_16 = FUNC_19(VAR_9, &VAR_6);
 if (VAR_16) {
  FUNC_14(VAR_9, "Unable to allocate minor number.");
  goto out;
 }

 VAR_15->hwrng.name = VAR_15->name ? VAR_15->name : VAR_7.name;
 VAR_15->hwrng.read = VAR_8;
 VAR_15->hwrng.quality = 1024;

 VAR_15->hwrng_registered = (FUNC_1(&VAR_15->hwrng) == 0);
 if (!VAR_15->hwrng_registered)
  FUNC_14(VAR_9, "Unable to register with hwrng");

 FUNC_11(VAR_11);

 FUNC_10(VAR_9, "chaoskey probe success, size %d", VAR_15->size);
 return 0;

out:
 FUNC_20(VAR_9, ((void*)0));
 FUNC_0(VAR_15);
 return VAR_16;
}
