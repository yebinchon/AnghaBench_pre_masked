
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int bInterval; int dev; int bEndpointAddress; TYPE_5__* cur_altsetting; TYPE_1__* altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int dev; int bEndpointAddress; TYPE_5__* cur_altsetting; TYPE_1__* altsetting; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct usb_cdc_union_desc {int bSlaveInterface0; int bMasterInterface0; } ;
struct usb_cdc_parsed_header {struct usb_cdc_country_functional_desc* usb_cdc_country_functional_desc; TYPE_4__* usb_cdc_acm_descriptor; struct usb_cdc_call_mgmt_descriptor* usb_cdc_call_mgmt_descriptor; struct usb_cdc_union_desc* usb_cdc_union_desc; } ;
struct usb_cdc_country_functional_desc {int iCountryCodeRelDate; scalar_t__ bLength; int wCountyCode0; } ;
struct usb_cdc_call_mgmt_descriptor {int bDataInterface; } ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct device {int dummy; } ;
struct TYPE_15__ {int * ops; } ;
struct TYPE_16__ {int bDataBits; int dwDTERate; } ;
struct acm_wb {int combined_interfaces; int writesize; int minor; int ctrlsize; int readsize; int rx_buflimit; int bInterval; unsigned long quirks; int index; TYPE_6__ port; int ctrl_dma; int * ctrl_buffer; struct urb* ctrlurb; struct urb** read_urbs; struct urb* urb; struct acm_wb* wb; struct usb_interface* control; int * country_codes; int out; int in; TYPE_9__ line; scalar_t__ nb_size; scalar_t__ nb_index; int * notification_buffer; scalar_t__ country_code_size; int country_rel_date; struct acm_wb* instance; int read_urbs_free; int * base; struct usb_device* dev; int dma; struct acm_wb* read_buffers; int delayed; int mutex; int read_lock; int write_lock; int wioctl; int work; int ctrl_caps; struct usb_interface* data; } ;
struct acm_rb {int combined_interfaces; int writesize; int minor; int ctrlsize; int readsize; int rx_buflimit; int bInterval; unsigned long quirks; int index; TYPE_6__ port; int ctrl_dma; int * ctrl_buffer; struct urb* ctrlurb; struct urb** read_urbs; struct urb* urb; struct acm_rb* wb; struct usb_interface* control; int * country_codes; int out; int in; TYPE_9__ line; scalar_t__ nb_size; scalar_t__ nb_index; int * notification_buffer; scalar_t__ country_code_size; int country_rel_date; struct acm_rb* instance; int read_urbs_free; int * base; struct usb_device* dev; int dma; struct acm_rb* read_buffers; int delayed; int mutex; int read_lock; int write_lock; int wioctl; int work; int ctrl_caps; struct usb_interface* data; } ;
struct acm {int combined_interfaces; int writesize; int minor; int ctrlsize; int readsize; int rx_buflimit; int bInterval; unsigned long quirks; int index; TYPE_6__ port; int ctrl_dma; int * ctrl_buffer; struct urb* ctrlurb; struct urb** read_urbs; struct urb* urb; struct acm* wb; struct usb_interface* control; int * country_codes; int out; int in; TYPE_9__ line; scalar_t__ nb_size; scalar_t__ nb_index; int * notification_buffer; scalar_t__ country_code_size; int country_rel_date; struct acm* instance; int read_urbs_free; int * base; struct usb_device* dev; int dma; struct acm* read_buffers; int delayed; int mutex; int read_lock; int write_lock; int wioctl; int work; int ctrl_caps; struct usb_interface* data; } ;
struct TYPE_11__ {int bNumEndpoints; scalar_t__ bInterfaceClass; } ;
struct TYPE_14__ {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct TYPE_13__ {int bmCapabilities; } ;
struct TYPE_12__ {int extralen; unsigned char* extra; struct usb_interface desc; } ;
struct TYPE_10__ {unsigned char* extra; int extralen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_2 (struct device*) ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct acm_wb*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct acm_wb*) ;
 int VAR_21 ;
 int FUNC_6 (struct acm_wb*,TYPE_9__*) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_7 (struct acm_wb*) ;
 int FUNC_8 (struct acm_wb*) ;
 int VAR_24 ;
 int FUNC_9 (struct usb_cdc_parsed_header*,struct usb_interface*,unsigned char*,int) ;
 int FUNC_10 (int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 struct usb_device* FUNC_19 (struct usb_interface*) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (scalar_t__,int ) ;
 struct acm_wb* FUNC_22 (int,int ) ;
 int FUNC_23 (int *,int *,scalar_t__) ;
 int FUNC_24 (struct usb_cdc_parsed_header*,int,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct usb_interface*,struct usb_interface*) ;
 int FUNC_28 (TYPE_6__*) ;
 int FUNC_29 (TYPE_6__*) ;
 struct device* FUNC_30 (TYPE_6__*,int ,int,int *) ;
 void* FUNC_31 (struct usb_device*,int,int ,int *) ;
 void* FUNC_32 (int ,int ) ;
 int FUNC_33 (struct usb_device*,int ) ;
 int FUNC_34 (int *,struct usb_interface*,struct acm_wb*) ;
 int FUNC_35 (struct usb_interface*) ;
 int FUNC_36 (struct usb_interface*) ;
 scalar_t__ FUNC_37 (struct usb_interface*) ;
 int FUNC_38 (struct urb*,struct usb_device*,int ,int *,int,int ,struct acm_wb*) ;
 int FUNC_39 (struct urb*,struct usb_device*,int ,int *,int,int ,struct acm_wb*,int) ;
 int FUNC_40 (TYPE_5__*,struct usb_interface**,struct usb_interface**,struct usb_interface**,int *) ;
 int FUNC_41 (struct usb_device*,int,int *,int ) ;
 int FUNC_42 (struct urb*) ;
 int FUNC_43 (struct usb_interface*) ;
 struct usb_interface* FUNC_44 (struct usb_device*,int) ;
 scalar_t__ FUNC_45 (struct usb_interface*) ;
 int FUNC_46 (struct usb_device*,int ) ;
 int FUNC_47 (struct usb_device*,int ) ;
 int FUNC_48 (struct usb_interface*,struct acm_wb*) ;
 int FUNC_49 (struct usb_device*,int ) ;
 int FUNC_50 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_51(struct usb_interface *VAR_28,
       const struct usb_device_id *VAR_29)
{
 struct usb_cdc_union_desc *VAR_30 = ((void*)0);
 struct usb_cdc_call_mgmt_descriptor *VAR_31 = ((void*)0);
 unsigned char *VAR_32 = VAR_28->altsetting->extra;
 int VAR_33 = VAR_28->altsetting->extralen;
 struct usb_interface *VAR_34;
 struct usb_interface *VAR_35;
 struct usb_endpoint_descriptor *VAR_36 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_37 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_38 = ((void*)0);
 struct usb_device *VAR_39 = FUNC_19(VAR_28);
 struct usb_cdc_parsed_header VAR_40;
 struct acm *VAR_41;
 int VAR_42;
 int VAR_43, VAR_44;
 u8 *VAR_45;
 int VAR_46 = -1;
 int VAR_47 = -1;
 unsigned long VAR_48;
 int VAR_49;
 int VAR_50;
 int VAR_51 = 0;
 struct device *VAR_52;
 int VAR_53 = -VAR_7;
 int VAR_54;


 VAR_48 = (unsigned long)VAR_29->driver_info;

 if (VAR_48 == VAR_9)
  return -VAR_6;

 FUNC_24(&VAR_40, 0x00, sizeof(struct usb_cdc_parsed_header));

 VAR_49 = (VAR_48 == VAR_14) ? 1 : VAR_0;


 if (VAR_48 == VAR_12) {
  VAR_35 = FUNC_44(VAR_39, 1);
  VAR_34 = FUNC_44(VAR_39, 0);

  if (!VAR_35 || !VAR_34)
   return -VAR_6;
  goto skip_normal_probe;
 }


 if (!VAR_32) {
  FUNC_12(&VAR_28->dev, "Weird descriptor references\n");
  return -VAR_5;
 }

 if (!VAR_28->cur_altsetting)
  return -VAR_5;

 if (!VAR_33) {
  if (VAR_28->cur_altsetting->endpoint &&
    VAR_28->cur_altsetting->endpoint->extralen &&
    VAR_28->cur_altsetting->endpoint->extra) {
   FUNC_11(&VAR_28->dev,
    "Seeking extra descriptors on endpoint\n");
   VAR_33 = VAR_28->cur_altsetting->endpoint->extralen;
   VAR_32 = VAR_28->cur_altsetting->endpoint->extra;
  } else {
   FUNC_12(&VAR_28->dev,
    "Zero length descriptor references\n");
   return -VAR_5;
  }
 }

 FUNC_9(&VAR_40, VAR_28, VAR_32, VAR_33);
 VAR_30 = VAR_40.usb_cdc_union_desc;
 VAR_31 = VAR_40.usb_cdc_call_mgmt_descriptor;
 if (VAR_31)
  VAR_46 = VAR_31->bDataInterface;

 if (!VAR_30) {
  if (VAR_46 > 0) {
   FUNC_11(&VAR_28->dev, "No union descriptor, using call management descriptor\n");

   if (VAR_48 & VAR_11) {
    VAR_35 = FUNC_44(VAR_39, 0);
   } else {
    VAR_47 = VAR_46;
    VAR_35 = FUNC_44(VAR_39, VAR_47);
   }
   VAR_34 = VAR_28;
  } else {
   if (VAR_28->cur_altsetting->desc.bNumEndpoints != 3) {
    FUNC_11(&VAR_28->dev,"No union descriptor, giving up\n");
    return -VAR_6;
   } else {
    FUNC_14(&VAR_28->dev,"No union descriptor, testing for castrated device\n");
    VAR_51 = 1;
    VAR_34 = VAR_35 = VAR_28;
    goto look_for_collapsed_interface;
   }
  }
 } else {
  VAR_47 = VAR_30->bSlaveInterface0;
  VAR_34 = FUNC_44(VAR_39, VAR_30->bMasterInterface0);
  VAR_35 = FUNC_44(VAR_39, VAR_47);
 }

 if (!VAR_34 || !VAR_35) {
  FUNC_11(&VAR_28->dev, "no interfaces\n");
  return -VAR_6;
 }
 if (!VAR_35->cur_altsetting || !VAR_34->cur_altsetting)
  return -VAR_6;

 if (VAR_47 != VAR_46)
  FUNC_11(&VAR_28->dev, "Separate call control interface. That is not fully supported.\n");

 if (VAR_34 == VAR_35) {

  FUNC_14(&VAR_28->dev,"Control and data interfaces are not separated!\n");
  VAR_51 = 1;

  VAR_48 |= VAR_10;
  if (VAR_35->cur_altsetting->desc.bNumEndpoints != 3) {
   FUNC_12(&VAR_28->dev, "This needs exactly 3 endpoints\n");
   return -VAR_5;
  }
look_for_collapsed_interface:
  VAR_54 = FUNC_40(VAR_35->cur_altsetting,
    &VAR_37, &VAR_38, &VAR_36, ((void*)0));
  if (VAR_54)
   return VAR_54;

  goto made_compressed_probe;
 }

skip_normal_probe:


 if (VAR_35->cur_altsetting->desc.bInterfaceClass
      != VAR_2) {
  if (VAR_34->cur_altsetting->desc.bInterfaceClass
      == VAR_2) {
   FUNC_11(&VAR_28->dev,
    "Your device has switched interfaces.\n");
   FUNC_27(VAR_34, VAR_35);
  } else {
   return -VAR_5;
  }
 }


 if (!VAR_51 && VAR_28 != VAR_34)
  return -VAR_6;

 if (!VAR_51 && FUNC_45(VAR_35)) {

  FUNC_11(&VAR_28->dev, "The data interface isn't available\n");
  return -VAR_4;
 }


 if (VAR_35->cur_altsetting->desc.bNumEndpoints < 2 ||
     VAR_34->cur_altsetting->desc.bNumEndpoints == 0)
  return -VAR_5;

 VAR_36 = &VAR_34->cur_altsetting->endpoint[0].desc;
 VAR_37 = &VAR_35->cur_altsetting->endpoint[0].desc;
 VAR_38 = &VAR_35->cur_altsetting->endpoint[1].desc;



 if (!FUNC_35(VAR_37)) {

  FUNC_11(&VAR_28->dev,
   "The data interface has switched endpoints\n");
  FUNC_27(VAR_37, VAR_38);
 }
made_compressed_probe:
 FUNC_11(&VAR_28->dev, "interfaces are valid\n");

 VAR_41 = FUNC_22(sizeof(struct acm), VAR_8);
 if (VAR_41 == ((void*)0))
  goto alloc_fail;

 FUNC_28(&VAR_41->port);
 VAR_41->port.ops = &VAR_20;

 VAR_43 = FUNC_36(VAR_36);
 VAR_44 = FUNC_36(VAR_37) *
    (VAR_48 == VAR_14 ? 1 : 2);
 VAR_41->combined_interfaces = VAR_51;
 VAR_41->writesize = FUNC_36(VAR_38) * 20;
 VAR_41->control = VAR_34;
 VAR_41->data = VAR_35;

 FUNC_43(VAR_41->control);

 VAR_42 = FUNC_4(VAR_41);
 if (VAR_42 < 0)
  goto alloc_fail1;

 VAR_41->minor = VAR_42;
 VAR_41->dev = VAR_39;
 if (VAR_40.usb_cdc_acm_descriptor)
  VAR_41->ctrl_caps = VAR_40.usb_cdc_acm_descriptor->bmCapabilities;
 if (VAR_48 & VAR_10)
  VAR_41->ctrl_caps &= ~VAR_17;
 VAR_41->ctrlsize = VAR_43;
 VAR_41->readsize = VAR_44;
 VAR_41->rx_buflimit = VAR_49;
 FUNC_0(&VAR_41->work, VAR_22);
 FUNC_18(&VAR_41->wioctl);
 FUNC_26(&VAR_41->write_lock);
 FUNC_26(&VAR_41->read_lock);
 FUNC_25(&VAR_41->mutex);
 if (FUNC_37(VAR_37)) {
  VAR_41->bInterval = VAR_37->bInterval;
  VAR_41->in = FUNC_47(VAR_39, VAR_37->bEndpointAddress);
 } else {
  VAR_41->in = FUNC_46(VAR_39, VAR_37->bEndpointAddress);
 }
 if (FUNC_37(VAR_38))
  VAR_41->out = FUNC_50(VAR_39, VAR_38->bEndpointAddress);
 else
  VAR_41->out = FUNC_49(VAR_39, VAR_38->bEndpointAddress);
 FUNC_17(&VAR_41->delayed);
 VAR_41->quirks = VAR_48;

 VAR_45 = FUNC_31(VAR_39, VAR_43, VAR_8, &VAR_41->ctrl_dma);
 if (!VAR_45)
  goto alloc_fail1;
 VAR_41->ctrl_buffer = VAR_45;

 if (FUNC_7(VAR_41) < 0)
  goto alloc_fail2;

 VAR_41->ctrlurb = FUNC_32(0, VAR_8);
 if (!VAR_41->ctrlurb)
  goto alloc_fail3;

 for (VAR_50 = 0; VAR_50 < VAR_49; VAR_50++) {
  struct acm_rb *VAR_55 = &(VAR_41->read_buffers[VAR_50]);
  struct urb *VAR_56;

  VAR_55->base = FUNC_31(VAR_41->dev, VAR_44, VAR_8,
        &VAR_55->dma);
  if (!VAR_55->base)
   goto alloc_fail4;
  VAR_55->index = VAR_50;
  VAR_55->instance = VAR_41;

  VAR_56 = FUNC_32(0, VAR_8);
  if (!VAR_56)
   goto alloc_fail4;

  VAR_56->transfer_flags |= VAR_15;
  VAR_56->transfer_dma = VAR_55->dma;
  if (FUNC_37(VAR_37))
   FUNC_39(VAR_56, VAR_41->dev, VAR_41->in, VAR_55->base,
      VAR_41->readsize,
      VAR_21, VAR_55,
      VAR_41->bInterval);
  else
   FUNC_38(VAR_56, VAR_41->dev, VAR_41->in, VAR_55->base,
       VAR_41->readsize,
       VAR_21, VAR_55);

  VAR_41->read_urbs[VAR_50] = VAR_56;
  FUNC_3(VAR_50, &VAR_41->read_urbs_free);
 }
 for (VAR_50 = 0; VAR_50 < VAR_1; VAR_50++) {
  struct acm_wb *VAR_57 = &(VAR_41->wb[VAR_50]);

  VAR_57->urb = FUNC_32(0, VAR_8);
  if (VAR_57->urb == ((void*)0))
   goto alloc_fail5;

  if (FUNC_37(VAR_38))
   FUNC_39(VAR_57->urb, VAR_39, VAR_41->out,
    ((void*)0), VAR_41->writesize, VAR_24, VAR_57, VAR_38->bInterval);
  else
   FUNC_38(VAR_57->urb, VAR_39, VAR_41->out,
    ((void*)0), VAR_41->writesize, VAR_24, VAR_57);
  VAR_57->urb->transfer_flags |= VAR_15;
  if (VAR_48 & VAR_13)
   VAR_57->urb->transfer_flags |= VAR_16;
  VAR_57->instance = VAR_41;
 }

 FUNC_48(VAR_28, VAR_41);

 VAR_50 = FUNC_15(&VAR_28->dev, &VAR_25);
 if (VAR_50 < 0)
  goto alloc_fail5;

 if (VAR_40.usb_cdc_country_functional_desc) {
  struct usb_cdc_country_functional_desc * VAR_58 =
     VAR_40.usb_cdc_country_functional_desc;

  VAR_41->country_codes = FUNC_21(VAR_58->bLength - 4, VAR_8);
  if (!VAR_41->country_codes)
   goto skip_countries;
  VAR_41->country_code_size = VAR_58->bLength - 4;
  FUNC_23(VAR_41->country_codes, (u8 *)&VAR_58->wCountyCode0,
       VAR_58->bLength - 4);
  VAR_41->country_rel_date = VAR_58->iCountryCodeRelDate;

  VAR_50 = FUNC_15(&VAR_28->dev, &VAR_27);
  if (VAR_50 < 0) {
   FUNC_20(VAR_41->country_codes);
   VAR_41->country_codes = ((void*)0);
   VAR_41->country_code_size = 0;
   goto skip_countries;
  }

  VAR_50 = FUNC_15(&VAR_28->dev,
      &VAR_26);
  if (VAR_50 < 0) {
   FUNC_16(&VAR_28->dev, &VAR_27);
   FUNC_20(VAR_41->country_codes);
   VAR_41->country_codes = ((void*)0);
   VAR_41->country_code_size = 0;
   goto skip_countries;
  }
 }

skip_countries:
 FUNC_39(VAR_41->ctrlurb, VAR_39,
    FUNC_47(VAR_39, VAR_36->bEndpointAddress),
    VAR_41->ctrl_buffer, VAR_43, VAR_18, VAR_41,

    VAR_36->bInterval ? VAR_36->bInterval : 16);
 VAR_41->ctrlurb->transfer_flags |= VAR_15;
 VAR_41->ctrlurb->transfer_dma = VAR_41->ctrl_dma;
 VAR_41->notification_buffer = ((void*)0);
 VAR_41->nb_index = 0;
 VAR_41->nb_size = 0;

 FUNC_13(&VAR_28->dev, "ttyACM%d: USB ACM device\n", VAR_42);

 VAR_41->line.dwDTERate = FUNC_10(9600);
 VAR_41->line.bDataBits = 8;
 FUNC_6(VAR_41, &VAR_41->line);

 FUNC_34(&VAR_19, VAR_35, VAR_41);
 FUNC_48(VAR_35, VAR_41);

 VAR_52 = FUNC_30(&VAR_41->port, VAR_23, VAR_42,
   &VAR_34->dev);
 if (FUNC_1(VAR_52)) {
  VAR_53 = FUNC_2(VAR_52);
  goto alloc_fail6;
 }

 if (VAR_48 & VAR_3) {
  FUNC_33(VAR_39, VAR_41->in);
  FUNC_33(VAR_39, VAR_41->out);
 }

 return 0;
alloc_fail6:
 if (VAR_41->country_codes) {
  FUNC_16(&VAR_41->control->dev,
    &VAR_27);
  FUNC_16(&VAR_41->control->dev,
    &VAR_26);
  FUNC_20(VAR_41->country_codes);
 }
 FUNC_16(&VAR_41->control->dev, &VAR_25);
alloc_fail5:
 FUNC_48(VAR_28, ((void*)0));
 for (VAR_50 = 0; VAR_50 < VAR_1; VAR_50++)
  FUNC_42(VAR_41->wb[VAR_50].urb);
alloc_fail4:
 for (VAR_50 = 0; VAR_50 < VAR_49; VAR_50++)
  FUNC_42(VAR_41->read_urbs[VAR_50]);
 FUNC_5(VAR_41);
 FUNC_42(VAR_41->ctrlurb);
alloc_fail3:
 FUNC_8(VAR_41);
alloc_fail2:
 FUNC_41(VAR_39, VAR_43, VAR_41->ctrl_buffer, VAR_41->ctrl_dma);
alloc_fail1:
 FUNC_29(&VAR_41->port);
alloc_fail:
 return VAR_53;
}
