
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usbnet {unsigned long* data; TYPE_1__* net; int status; int out; int in; int udev; } ;
struct usb_interface {int dev; TYPE_7__* cur_altsetting; TYPE_3__* intf_assoc; } ;
struct usb_driver {int dummy; } ;
struct usb_cdc_parsed_header {TYPE_2__* usb_cdc_union_desc; int usb_cdc_mbim_extended_desc; int usb_cdc_mbim_desc; int usb_cdc_ncm_desc; TYPE_4__* usb_cdc_ether_desc; } ;
struct TYPE_13__ {int * function; } ;
struct cdc_ncm_ctx {int drvflags; int max_ndp_size; struct usb_interface* data; struct usb_interface* control; void* delayed_ndp16; TYPE_4__* ether_desc; int func_desc; int mbim_desc; int mbim_extended_desc; int mtx; int stop; int bh; TYPE_6__ tx_timer; } ;
typedef scalar_t__ __le16 ;
struct TYPE_12__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_14__ {int extralen; TYPE_5__ desc; scalar_t__* extra; } ;
struct TYPE_11__ {int iMACAddress; } ;
struct TYPE_10__ {int bInterfaceCount; } ;
struct TYPE_9__ {scalar_t__ bSlaveInterface0; } ;
struct TYPE_8__ {scalar_t__ max_mtu; int * netdev_ops; int ** sysfs_groups; int * ethtool_ops; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (struct usbnet*) ;
 int VAR_16 ;
 int FUNC_3 (struct usbnet*,struct usb_interface*) ;
 int FUNC_4 (struct cdc_ncm_ctx*) ;
 scalar_t__ FUNC_5 (struct usbnet*) ;
 scalar_t__ FUNC_6 (struct usbnet*) ;
 int VAR_17 ;
 int FUNC_7 (struct usbnet*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (struct usb_cdc_parsed_header*,struct usb_interface*,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,...) ;
 struct usb_driver* FUNC_12 (struct usb_interface*) ;
 int FUNC_13 (TYPE_6__*,int ,int ) ;
 void* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,unsigned long) ;
 int FUNC_17 (struct usb_driver*,struct usb_interface*,struct usbnet*) ;
 int FUNC_18 (struct usb_driver*,struct usb_interface*) ;
 void* FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ,scalar_t__,scalar_t__) ;
 int FUNC_21 (struct usb_interface*,struct usbnet*) ;
 int FUNC_22 (struct usbnet*,int ) ;
 int FUNC_23 (struct usbnet*,int ,int,int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_24 (struct usbnet*,int ,int,int ,scalar_t__,int *,int ) ;
 int FUNC_25 (int,int) ;

int FUNC_26(struct usbnet *VAR_21, struct usb_interface *VAR_22, u8 VAR_23, int VAR_24)
{
 struct cdc_ncm_ctx *VAR_25;
 struct usb_driver *VAR_26;
 u8 *VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 u8 VAR_31;
 struct usb_cdc_parsed_header VAR_32;
 __le16 VAR_33;

 VAR_25 = FUNC_14(sizeof(*VAR_25), VAR_6);
 if (!VAR_25)
  return -VAR_5;

 FUNC_13(&VAR_25->tx_timer, VAR_3, VAR_7);
 VAR_25->tx_timer.function = &VAR_19;
 FUNC_16(&VAR_25->bh, VAR_20, (unsigned long)VAR_21);
 FUNC_0(&VAR_25->stop, 0);
 FUNC_15(&VAR_25->mtx);


 VAR_21->data[0] = (unsigned long)VAR_25;


 VAR_25->control = VAR_22;


 VAR_26 = FUNC_12(VAR_22);
 VAR_27 = VAR_22->cur_altsetting->extra;
 VAR_28 = VAR_22->cur_altsetting->extralen;


 FUNC_8(&VAR_32, VAR_22, VAR_27, VAR_28);

 if (VAR_32.usb_cdc_union_desc)
  VAR_25->data = FUNC_19(VAR_21->udev,
         VAR_32.usb_cdc_union_desc->bSlaveInterface0);
 VAR_25->ether_desc = VAR_32.usb_cdc_ether_desc;
 VAR_25->func_desc = VAR_32.usb_cdc_ncm_desc;
 VAR_25->mbim_desc = VAR_32.usb_cdc_mbim_desc;
 VAR_25->mbim_extended_desc = VAR_32.usb_cdc_mbim_extended_desc;


 if (!VAR_32.usb_cdc_union_desc && VAR_22->intf_assoc && VAR_22->intf_assoc->bInterfaceCount == 2) {
  VAR_25->data = FUNC_19(VAR_21->udev, VAR_22->cur_altsetting->desc.bInterfaceNumber + 1);
  FUNC_10(&VAR_22->dev, "CDC Union missing - got slave from IAD\n");
 }


 if (!VAR_25->data) {
  FUNC_10(&VAR_22->dev, "CDC Union missing and no IAD found\n");
  goto error;
 }
 if (FUNC_1(VAR_22->cur_altsetting)) {
  if (!VAR_25->mbim_desc) {
   FUNC_10(&VAR_22->dev, "MBIM functional descriptor missing\n");
   goto error;
  }
 } else {
  if (!VAR_25->ether_desc || !VAR_25->func_desc) {
   FUNC_10(&VAR_22->dev, "NCM or ECM functional descriptors missing\n");
   goto error;
  }
 }


 if (VAR_25->data != VAR_25->control) {
  VAR_29 = FUNC_17(VAR_26, VAR_25->data, VAR_21);
  if (VAR_29) {
   FUNC_10(&VAR_22->dev, "failed to claim data intf\n");
   goto error;
  }
 }

 VAR_31 = VAR_25->data->cur_altsetting->desc.bInterfaceNumber;


 VAR_25->drvflags = VAR_24;







 if (!(VAR_25->drvflags & VAR_0))
  FUNC_20(VAR_21->udev, VAR_31, VAR_23);

 VAR_29 = FUNC_20(VAR_21->udev, VAR_31, 0);
 if (VAR_29) {
  FUNC_10(&VAR_22->dev, "set interface failed\n");
  goto error2;
 }


 if (FUNC_5(VAR_21))
  goto error2;






 FUNC_25(10000, 20000);


 VAR_29 = FUNC_20(VAR_21->udev, VAR_31, VAR_23);
 if (VAR_29) {
  FUNC_10(&VAR_22->dev, "set interface failed\n");
  goto error2;
 }






 if (VAR_25->drvflags & VAR_2) {
  VAR_30 = FUNC_23(VAR_21, VAR_8,
          VAR_15 | VAR_12 | VAR_14,
          0, VAR_31, &VAR_33, 2);
  if (VAR_30 < 0) {
   goto error2;
  }

  if (VAR_33 == FUNC_9(VAR_10)) {
   FUNC_11(&VAR_22->dev, "resetting NTB format to 16-bit");
   VAR_30 = FUNC_24(VAR_21, VAR_11,
            VAR_15 | VAR_13
            | VAR_14,
            VAR_9,
            VAR_31, ((void*)0), 0);

   if (VAR_30 < 0)
    goto error2;
  }
 }

 FUNC_3(VAR_21, VAR_25->data);
 FUNC_3(VAR_21, VAR_25->control);
 if (!VAR_21->in || !VAR_21->out || !VAR_21->status) {
  FUNC_10(&VAR_22->dev, "failed to collect endpoints\n");
  goto error2;
 }

 FUNC_21(VAR_25->data, VAR_21);
 FUNC_21(VAR_25->control, VAR_21);

 if (VAR_25->ether_desc) {
  VAR_29 = FUNC_22(VAR_21, VAR_25->ether_desc->iMACAddress);
  if (VAR_29) {
   FUNC_10(&VAR_22->dev, "failed to get mac address\n");
   goto error2;
  }
  FUNC_11(&VAR_22->dev, "MAC-Address: %pM\n", VAR_21->net->dev_addr);
 }


 FUNC_7(VAR_21);


 if (VAR_25->drvflags & VAR_1) {
  VAR_25->delayed_ndp16 = FUNC_14(VAR_25->max_ndp_size, VAR_6);
  if (!VAR_25->delayed_ndp16)
   goto error2;
  FUNC_11(&VAR_22->dev, "NDP will be placed at end of frame for this device.");
 }


 VAR_21->net->ethtool_ops = &VAR_16;


 VAR_21->net->sysfs_groups[0] = &VAR_18;


 VAR_21->net->netdev_ops = &VAR_17;
 VAR_21->net->max_mtu = FUNC_6(VAR_21) - FUNC_2(VAR_21);

 return 0;

error2:
 FUNC_21(VAR_25->control, ((void*)0));
 FUNC_21(VAR_25->data, ((void*)0));
 if (VAR_25->data != VAR_25->control)
  FUNC_18(VAR_26, VAR_25->data);
error:
 FUNC_4((struct cdc_ncm_ctx *)VAR_21->data[0]);
 VAR_21->data[0] = 0;
 FUNC_11(&VAR_22->dev, "bind() failure\n");
 return -VAR_4;
}
