
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vhci_hcd {struct vhci_device* vdev; struct vhci* vhci; } ;
struct TYPE_3__ {scalar_t__ status; int lock; } ;
struct vhci_device {void* udev; TYPE_1__ ud; int rhport; } ;
struct vhci {int lock; } ;
struct usb_hcd {int dummy; } ;
struct usb_ctrlrequest {int bRequest; int wValue; } ;
struct urb {int status; TYPE_2__* dev; scalar_t__ setup_packet; int pipe; scalar_t__ transfer_buffer_length; int num_sgs; int transfer_buffer; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ __u8 ;
struct TYPE_4__ {int portnum; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 struct vhci_hcd* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 void* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_12 (struct usb_hcd*,struct urb*) ;
 int FUNC_13 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct urb*,struct vhci_device*) ;

__attribute__((used)) static int FUNC_19(struct usb_hcd *VAR_9, struct urb *VAR_10, gfp_t VAR_11)
{
 struct vhci_hcd *VAR_12 = FUNC_4(VAR_9);
 struct vhci *VAR_13 = VAR_12->vhci;
 struct device *VAR_14 = &VAR_10->dev->dev;
 u8 VAR_15 = VAR_10->dev->portnum;
 int VAR_16 = 0;
 struct vhci_device *VAR_17;
 unsigned long VAR_18;

 if (VAR_15 > VAR_8) {
  FUNC_5("invalid port number %d\n", VAR_15);
  return -VAR_2;
 }
 VAR_17 = &VAR_12->vdev[VAR_15-1];

 if (!VAR_10->transfer_buffer && !VAR_10->num_sgs &&
      VAR_10->transfer_buffer_length) {
  FUNC_1(VAR_14, "Null URB transfer buffer\n");
  return -VAR_1;
 }

 FUNC_7(&VAR_13->lock, VAR_18);

 if (VAR_10->status != -VAR_0) {
  FUNC_2(VAR_14, "URB already unlinked!, status %d\n", VAR_10->status);
  FUNC_9(&VAR_13->lock, VAR_18);
  return VAR_10->status;
 }


 FUNC_6(&VAR_17->ud.lock);
 if (VAR_17->ud.status == VAR_6 ||
     VAR_17->ud.status == VAR_5) {
  FUNC_2(VAR_14, "enqueue for inactive port %d\n", VAR_17->rhport);
  FUNC_8(&VAR_17->ud.lock);
  FUNC_9(&VAR_13->lock, VAR_18);
  return -VAR_2;
 }
 FUNC_8(&VAR_17->ud.lock);

 VAR_16 = FUNC_12(VAR_9, VAR_10);
 if (VAR_16)
  goto no_need_unlink;
 if (FUNC_14(VAR_10->pipe) == 0) {
  __u8 VAR_19 = FUNC_15(VAR_10->pipe);
  struct usb_ctrlrequest *VAR_20 =
   (struct usb_ctrlrequest *) VAR_10->setup_packet;

  if (VAR_19 != VAR_3 || !VAR_20) {
   FUNC_2(VAR_14, "invalid request to devnum 0\n");
   VAR_16 = -VAR_1;
   goto no_need_xmit;
  }

  switch (VAR_20->bRequest) {
  case 128:

   FUNC_3(VAR_14, "SetAddress Request (%d) to port %d\n",
     VAR_20->wValue, VAR_17->rhport);

   FUNC_16(VAR_17->udev);
   VAR_17->udev = FUNC_10(VAR_10->dev);

   FUNC_6(&VAR_17->ud.lock);
   VAR_17->ud.status = VAR_7;
   FUNC_8(&VAR_17->ud.lock);

   if (VAR_10->status == -VAR_0) {


    VAR_10->status = 0;
   }

   goto no_need_xmit;

  case 129:
   if (VAR_20->wValue == FUNC_0(VAR_4 << 8))
    FUNC_17(
     "Not yet?:Get_Descriptor to device 0 (get max pipe size)\n");

   FUNC_16(VAR_17->udev);
   VAR_17->udev = FUNC_10(VAR_10->dev);
   goto out;

  default:

   FUNC_2(VAR_14,
    "invalid request to devnum 0 bRequest %u, wValue %u\n",
    VAR_20->bRequest,
    VAR_20->wValue);
   VAR_16 = -VAR_1;
   goto no_need_xmit;
  }

 }

out:
 FUNC_18(VAR_10, VAR_17);
 FUNC_9(&VAR_13->lock, VAR_18);

 return 0;

no_need_xmit:
 FUNC_13(VAR_9, VAR_10);
no_need_unlink:
 FUNC_9(&VAR_13->lock, VAR_18);
 if (!VAR_16)
  FUNC_11(VAR_9, VAR_10, VAR_10->status);
 return VAR_16;
}
