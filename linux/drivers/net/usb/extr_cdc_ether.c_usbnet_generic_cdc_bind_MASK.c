
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int hard_mtu; TYPE_8__* udev; struct usb_host_endpoint* status; int data; } ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; int bNumEndpoints; } ;
struct usb_interface {int dev; TYPE_5__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; scalar_t__ wMaxPacketSize; } ;
struct usb_host_endpoint {int extralen; struct usb_endpoint_descriptor desc; int * extra; } ;
struct usb_driver {int dummy; } ;
struct usb_cdc_parsed_header {TYPE_3__* usb_cdc_mdlm_detail_desc; TYPE_2__* usb_cdc_mdlm_desc; TYPE_6__* usb_cdc_ether_desc; TYPE_1__* usb_cdc_acm_descriptor; scalar_t__ usb_cdc_header_desc; TYPE_7__* usb_cdc_union_desc; } ;
struct usb_cdc_notification {int dummy; } ;
struct usb_cdc_mdlm_detail_desc {int dummy; } ;
struct cdc_state {struct usb_interface* data; struct usb_interface* control; TYPE_6__* ether; TYPE_7__* u; scalar_t__ header; } ;
struct TYPE_16__ {int dev; TYPE_4__* actconfig; } ;
struct TYPE_15__ {int bMasterInterface0; int bSlaveInterface0; } ;
struct TYPE_14__ {scalar_t__ wMaxSegmentSize; } ;
struct TYPE_13__ {int extralen; struct usb_host_endpoint* endpoint; struct usb_interface_descriptor desc; int * extra; } ;
struct TYPE_12__ {int extralen; int * extra; } ;
struct TYPE_11__ {int bLength; } ;
struct TYPE_10__ {int bGUID; } ;
struct TYPE_9__ {scalar_t__ bmCapabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usb_cdc_parsed_header*,struct usb_interface*,int *,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 struct usb_driver* FUNC_3 (struct usb_interface*) ;
 scalar_t__ FUNC_4 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_6 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_7 (struct usb_interface_descriptor*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct cdc_state*,int ,int) ;
 int FUNC_11 (struct usb_driver*,struct usb_interface*,struct usbnet*) ;
 int FUNC_12 (struct usb_driver*,struct usb_interface*) ;
 int FUNC_13 (struct usb_endpoint_descriptor*) ;
 void* FUNC_14 (TYPE_8__*,int) ;
 int FUNC_15 (struct usb_interface*,int *) ;
 int FUNC_16 (struct usbnet*,struct usb_interface*) ;

int FUNC_17(struct usbnet *VAR_4, struct usb_interface *VAR_5)
{
 u8 *VAR_6 = VAR_5->cur_altsetting->extra;
 int VAR_7 = VAR_5->cur_altsetting->extralen;
 struct usb_interface_descriptor *VAR_8;
 struct cdc_state *VAR_9 = (void *) &VAR_4->data;
 int VAR_10;
 int VAR_11;
 bool VAR_12 = 0;
 struct usb_driver *VAR_13 = FUNC_3(VAR_5);
 struct usb_cdc_parsed_header VAR_14;

 if (sizeof(VAR_4->data) < sizeof(*VAR_9))
  return -VAR_0;




 if (VAR_7 == 0 && VAR_4->udev->actconfig->extralen) {



  VAR_6 = VAR_4->udev->actconfig->extra;
  VAR_7 = VAR_4->udev->actconfig->extralen;
  FUNC_1(&VAR_5->dev, "CDC descriptors on config\n");
 }




 if (VAR_7 == 0) {
  struct usb_host_endpoint *VAR_15;

  VAR_15 = VAR_5->cur_altsetting->endpoint;
  if (VAR_15) {
   VAR_6 = VAR_15->extra;
   VAR_7 = VAR_15->extralen;
  }
  if (VAR_7)
   FUNC_1(&VAR_5->dev,
    "CDC descriptors on endpoint\n");
 }




 VAR_11 = (FUNC_6(&VAR_5->cur_altsetting->desc) ||
   FUNC_4(&VAR_5->cur_altsetting->desc) ||
   FUNC_7(&VAR_5->cur_altsetting->desc) ||
   FUNC_5(&VAR_5->cur_altsetting->desc));

 FUNC_10(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->control = VAR_5;

 FUNC_0(&VAR_14, VAR_5, VAR_6, VAR_7);

 VAR_9->u = VAR_14.usb_cdc_union_desc;
 VAR_9->header = VAR_14.usb_cdc_header_desc;
 VAR_9->ether = VAR_14.usb_cdc_ether_desc;
 if (!VAR_9->u) {
  if (VAR_11)
   goto skip;
  else
   goto bad_desc;
 }




 VAR_9->control = FUNC_14(VAR_4->udev, VAR_9->u->bMasterInterface0);
 VAR_9->data = FUNC_14(VAR_4->udev, VAR_9->u->bSlaveInterface0);
 if (!VAR_9->control || !VAR_9->data) {
  FUNC_1(&VAR_5->dev,
   "master #%u/%p slave #%u/%p\n",
   VAR_9->u->bMasterInterface0,
   VAR_9->control,
   VAR_9->u->bSlaveInterface0,
   VAR_9->data);

  if (VAR_11) {
   VAR_12 = 1;
   goto skip;
  }
  goto bad_desc;
 }
 if (VAR_9->control != VAR_5) {
  FUNC_1(&VAR_5->dev, "bogus CDC Union\n");



  if (VAR_9->data == VAR_5) {
   VAR_9->data = VAR_9->control;
   VAR_9->control = VAR_5;
  } else
   goto bad_desc;
 }


 if (VAR_9->control == VAR_9->data)
  goto skip;


 VAR_8 = &VAR_9->data->cur_altsetting->desc;
 if (VAR_8->bInterfaceClass != VAR_2) {
  FUNC_1(&VAR_5->dev, "slave class %u\n", VAR_8->bInterfaceClass);
  goto bad_desc;
 }
skip:







 if (VAR_11 && FUNC_6(&VAR_5->cur_altsetting->desc) &&
     VAR_14.usb_cdc_acm_descriptor &&
     VAR_14.usb_cdc_acm_descriptor->bmCapabilities) {
  FUNC_1(&VAR_5->dev,
   "ACM capabilities %02x, not really RNDIS?\n",
   VAR_14.usb_cdc_acm_descriptor->bmCapabilities);
  goto bad_desc;
 }

 if (VAR_14.usb_cdc_ether_desc && VAR_9->ether->wMaxSegmentSize) {
  VAR_4->hard_mtu = FUNC_8(VAR_9->ether->wMaxSegmentSize);



 }

 if (VAR_14.usb_cdc_mdlm_desc &&
     FUNC_9(VAR_14.usb_cdc_mdlm_desc->bGUID, VAR_3, 16)) {
  FUNC_1(&VAR_5->dev, "GUID doesn't match\n");
  goto bad_desc;
 }

 if (VAR_14.usb_cdc_mdlm_detail_desc &&
  VAR_14.usb_cdc_mdlm_detail_desc->bLength <
   (sizeof(struct usb_cdc_mdlm_detail_desc) + 1)) {
  FUNC_1(&VAR_5->dev, "Descriptor too short\n");
  goto bad_desc;
 }
 if (VAR_11 && (!VAR_9->u || VAR_12)) {
  VAR_9->control = FUNC_14(VAR_4->udev, 0);
  VAR_9->data = FUNC_14(VAR_4->udev, 1);
  if (!VAR_9->control || !VAR_9->data || VAR_9->control != VAR_5) {
   FUNC_1(&VAR_5->dev,
    "rndis: master #0/%p slave #1/%p\n",
    VAR_9->control,
    VAR_9->data);
   goto bad_desc;
  }

 } else if (!VAR_9->header || (!VAR_11 && !VAR_9->ether)) {
  FUNC_1(&VAR_5->dev, "missing cdc %s%s%sdescriptor\n",
   VAR_9->header ? "" : "header ",
   VAR_9->u ? "" : "union ",
   VAR_9->ether ? "" : "ether ");
  goto bad_desc;
 }




 if (VAR_9->data != VAR_9->control) {
  VAR_10 = FUNC_11(VAR_13, VAR_9->data, VAR_4);
  if (VAR_10 < 0)
   return VAR_10;
 }
 VAR_10 = FUNC_16(VAR_4, VAR_9->data);
 if (VAR_10 < 0) {

  FUNC_15(VAR_9->data, ((void*)0));
  if (VAR_9->data != VAR_9->control)
   FUNC_12(VAR_13, VAR_9->data);
  return VAR_10;
 }


 if (VAR_9->data != VAR_9->control)
  VAR_4->status = ((void*)0);
 if (VAR_9->control->cur_altsetting->desc.bNumEndpoints == 1) {
  struct usb_endpoint_descriptor *VAR_16;

  VAR_4->status = &VAR_9->control->cur_altsetting->endpoint[0];
  VAR_16 = &VAR_4->status->desc;
  if (!FUNC_13(VAR_16) ||
      (FUNC_8(VAR_16->wMaxPacketSize)
       < sizeof(struct usb_cdc_notification)) ||
      !VAR_16->bInterval) {
   FUNC_1(&VAR_5->dev, "bad notification endpoint\n");
   VAR_4->status = ((void*)0);
  }
 }
 if (VAR_11 && !VAR_4->status) {
  FUNC_1(&VAR_5->dev, "missing RNDIS status endpoint\n");
  FUNC_15(VAR_9->data, ((void*)0));
  FUNC_12(VAR_13, VAR_9->data);
  return -VAR_1;
 }

 return 0;

bad_desc:
 FUNC_2(&VAR_4->udev->dev, "bad CDC descriptors\n");
 return -VAR_1;
}
