
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct uvc_device_info {int quirks; } ;
struct TYPE_13__ {char* model; char* serial; int hw_revision; int bus_info; int * dev; } ;
struct TYPE_12__ {TYPE_6__* mdev; } ;
struct uvc_device {int quirks; char* name; int uvc_version; int ref; TYPE_6__ mdev; TYPE_5__ vdev; struct uvc_device_info const* info; int intfnum; int intf; int udev; int lock; int nmappings; int streams; int chains; int entities; } ;
struct usb_interface {int dev; TYPE_3__* cur_altsetting; TYPE_1__* intf_assoc; } ;
struct usb_device_id {int idProduct; int idVendor; scalar_t__ driver_info; } ;
struct TYPE_11__ {int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {char* product; char* serial; TYPE_4__ descriptor; int devpath; } ;
struct TYPE_9__ {int iInterface; int bInterfaceNumber; } ;
struct TYPE_10__ {TYPE_2__ desc; } ;
struct TYPE_8__ {int iFunction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct uvc_device* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int,char*,int,int) ;
 int FUNC_11 (char*,char*,int) ;
 size_t FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (struct usb_device*) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_interface*) ;
 int FUNC_17 (struct usb_device*,int ,int) ;
 int FUNC_18 (struct usb_interface*,struct uvc_device*) ;
 int FUNC_19 (struct usb_device*,int,int ,int) ;
 scalar_t__ FUNC_20 (struct uvc_device*) ;
 int VAR_5 ;
 scalar_t__ FUNC_21 (struct uvc_device*) ;
 int FUNC_22 (int ,char*,...) ;
 struct uvc_device_info const VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_23 (struct uvc_device*) ;
 scalar_t__ FUNC_24 (struct uvc_device*) ;
 int FUNC_25 (struct uvc_device*) ;
 int FUNC_26 (int ,char*,...) ;
 int FUNC_27 (struct uvc_device*) ;
 scalar_t__ FUNC_28 (int *,TYPE_5__*) ;

__attribute__((used)) static int FUNC_29(struct usb_interface *VAR_8,
       const struct usb_device_id *VAR_9)
{
 struct usb_device *VAR_10 = FUNC_2(VAR_8);
 struct uvc_device *VAR_11;
 const struct uvc_device_info *VAR_12 =
  (const struct uvc_device_info *)VAR_9->driver_info;
 int VAR_13;
 int VAR_14;

 if (VAR_9->idVendor && VAR_9->idProduct)
  FUNC_26(VAR_4, "Probing known UVC device %s "
    "(%04x:%04x)\n", VAR_10->devpath, VAR_9->idVendor,
    VAR_9->idProduct);
 else
  FUNC_26(VAR_4, "Probing generic UVC device %s\n",
    VAR_10->devpath);


 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 FUNC_0(&VAR_11->entities);
 FUNC_0(&VAR_11->chains);
 FUNC_0(&VAR_11->streams);
 FUNC_3(&VAR_11->ref);
 FUNC_1(&VAR_11->nmappings, 0);
 FUNC_9(&VAR_11->lock);

 VAR_11->udev = FUNC_15(VAR_10);
 VAR_11->intf = FUNC_16(VAR_8);
 VAR_11->intfnum = VAR_8->cur_altsetting->desc.bInterfaceNumber;
 VAR_11->info = VAR_12 ? VAR_12 : &VAR_6;
 VAR_11->quirks = VAR_7 == -1
      ? VAR_11->info->quirks : VAR_7;

 if (VAR_10->product != ((void*)0))
  FUNC_13(VAR_11->name, VAR_10->product, sizeof(VAR_11->name));
 else
  FUNC_10(VAR_11->name, sizeof(VAR_11->name),
    "UVC Camera (%04x:%04x)",
    FUNC_6(VAR_10->descriptor.idVendor),
    FUNC_6(VAR_10->descriptor.idProduct));






 if (VAR_8->intf_assoc && VAR_8->intf_assoc->iFunction != 0)
  VAR_13 = VAR_8->intf_assoc->iFunction;
 else
  VAR_13 = VAR_8->cur_altsetting->desc.iInterface;
 if (VAR_13 != 0) {
  size_t VAR_15;

  FUNC_11(VAR_11->name, ": ", sizeof(VAR_11->name));
  VAR_15 = FUNC_12(VAR_11->name);
  FUNC_19(VAR_10, VAR_13, VAR_11->name + VAR_15,
      sizeof(VAR_11->name) - VAR_15);
 }


 if (FUNC_21(VAR_11) < 0) {
  FUNC_26(VAR_4, "Unable to parse UVC "
   "descriptors.\n");
  goto error;
 }

 FUNC_22(VAR_3, "Found UVC %u.%02x device %s (%04x:%04x)\n",
  VAR_11->uvc_version >> 8, VAR_11->uvc_version & 0xff,
  VAR_10->product ? VAR_10->product : "<unnamed>",
  FUNC_6(VAR_10->descriptor.idVendor),
  FUNC_6(VAR_10->descriptor.idProduct));

 if (VAR_11->quirks != VAR_11->info->quirks) {
  FUNC_22(VAR_3, "Forcing device quirks to 0x%x by module "
   "parameter for testing purpose.\n", VAR_11->quirks);
  FUNC_22(VAR_3, "Please report required quirks to the "
   "linux-uvc-devel mailing list.\n");
 }
 if (FUNC_28(&VAR_8->dev, &VAR_11->vdev) < 0)
  goto error;


 if (FUNC_20(VAR_11) < 0)
  goto error;


 if (FUNC_24(VAR_11) < 0)
  goto error;


 if (FUNC_23(VAR_11) < 0)
  goto error;







 FUNC_18(VAR_8, VAR_11);


 if ((VAR_14 = FUNC_25(VAR_11)) < 0) {
  FUNC_22(VAR_3, "Unable to initialize the status "
   "endpoint (%d), status interrupt will not be "
   "supported.\n", VAR_14);
 }

 FUNC_26(VAR_4, "UVC device initialized.\n");
 FUNC_14(VAR_10);
 return 0;

error:
 FUNC_27(VAR_11);
 FUNC_4(&VAR_11->ref, VAR_5);
 return -VAR_0;
}
