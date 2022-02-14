
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int hard_mtu; TYPE_5__* net; TYPE_4__* udev; TYPE_2__* driver_info; int data; } ;
struct usb_interface_descriptor {scalar_t__ bInterfaceNumber; } ;
struct usb_interface {int dev; TYPE_1__* cur_altsetting; } ;
struct usb_driver {int dummy; } ;
struct usb_cdc_union_desc {scalar_t__ bMasterInterface0; int bSlaveInterface0; } ;
struct usb_cdc_parsed_header {struct usb_cdc_ether_desc* usb_cdc_ether_desc; struct usb_cdc_union_desc* usb_cdc_union_desc; } ;
struct usb_cdc_ether_desc {int iMACAddress; scalar_t__ wMaxSegmentSize; } ;
struct qmi_wwan_state {struct usb_interface* data; struct usb_interface* control; } ;
struct TYPE_10__ {int* dev_addr; int ** sysfs_groups; int * netdev_ops; } ;
struct TYPE_8__ {scalar_t__ bcdUSB; } ;
struct TYPE_9__ {TYPE_3__ descriptor; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int extralen; struct usb_interface_descriptor desc; int * extra; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_cdc_parsed_header*,struct usb_interface*,int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,scalar_t__,int ) ;
 struct usb_driver* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int*,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int*) ;
 int FUNC_8 (struct usbnet*,int) ;
 int FUNC_9 (struct usbnet*,int) ;
 int VAR_3 ;
 int FUNC_10 (struct usbnet*) ;
 int VAR_4 ;
 int FUNC_11 (struct usb_driver*,struct usb_interface*,struct usbnet*) ;
 int FUNC_12 (struct usb_driver*,struct usb_interface*) ;
 struct usb_interface* FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (struct usb_interface*,int *) ;
 int FUNC_15 (struct usbnet*,int ) ;

__attribute__((used)) static int FUNC_16(struct usbnet *VAR_5, struct usb_interface *VAR_6)
{
 int VAR_7 = -1;
 u8 *VAR_8 = VAR_6->cur_altsetting->extra;
 int VAR_9 = VAR_6->cur_altsetting->extralen;
 struct usb_interface_descriptor *VAR_10 = &VAR_6->cur_altsetting->desc;
 struct usb_cdc_union_desc *VAR_11;
 struct usb_cdc_ether_desc *VAR_12;
 struct usb_driver *VAR_13 = FUNC_3(VAR_6);
 struct qmi_wwan_state *VAR_14 = (void *)&VAR_5->data;
 struct usb_cdc_parsed_header VAR_15;

 FUNC_0((sizeof(((struct usbnet *)0)->data) <
        sizeof(struct qmi_wwan_state)));


 VAR_14->control = VAR_6;
 VAR_14->data = VAR_6;


 FUNC_1(&VAR_15, VAR_6, VAR_8, VAR_9);
 VAR_11 = VAR_15.usb_cdc_union_desc;
 VAR_12 = VAR_15.usb_cdc_ether_desc;


 if (VAR_11) {
  VAR_14->data = FUNC_13(VAR_5->udev,
          VAR_11->bSlaveInterface0);
  if (VAR_10->bInterfaceNumber != VAR_11->bMasterInterface0 ||
      !VAR_14->data) {
   FUNC_2(&VAR_6->dev,
    "bogus CDC Union: master=%u, slave=%u\n",
    VAR_11->bMasterInterface0,
    VAR_11->bSlaveInterface0);


   VAR_11 = ((void*)0);
   VAR_14->data = VAR_6;
  }
 }


 if (VAR_12 && VAR_12->wMaxSegmentSize) {
  VAR_5->hard_mtu = FUNC_6(VAR_12->wMaxSegmentSize);
  FUNC_15(VAR_5, VAR_12->iMACAddress);
 }


 if (VAR_14->control != VAR_14->data) {
  VAR_7 = FUNC_11(VAR_13, VAR_14->data, VAR_5);
  if (VAR_7 < 0)
   goto err;
 }

 VAR_7 = FUNC_10(VAR_5);
 if (VAR_7 < 0 && VAR_14->control != VAR_14->data) {
  FUNC_14(VAR_14->data, ((void*)0));
  FUNC_12(VAR_13, VAR_14->data);
 }
 if (VAR_5->driver_info->data & VAR_0 ||
     FUNC_6(VAR_5->udev->descriptor.bcdUSB) >= 0x0201) {
  FUNC_9(VAR_5, 1);
  FUNC_8(VAR_5, 1);
 }





 if (FUNC_5(VAR_5->net->dev_addr, VAR_2) ||
     FUNC_5(VAR_5->net->dev_addr, VAR_1))
  FUNC_4(VAR_5->net);


 if (FUNC_7(VAR_5->net->dev_addr)) {
  VAR_5->net->dev_addr[0] |= 0x02;
  VAR_5->net->dev_addr[0] &= 0xbf;
 }
 VAR_5->net->netdev_ops = &VAR_3;
 VAR_5->net->sysfs_groups[0] = &VAR_4;
err:
 return VAR_7;
}
