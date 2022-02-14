
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_ssp_cap_descriptor {int bLength; int bFunctionalitySupport; void* wTotalLength; void** bmSublinkSpeedAttr; void* wFunctionalitySupport; void* bmAttributes; scalar_t__ wReserved; scalar_t__ bReserved; int bDevCapabilityType; void* bDescriptorType; scalar_t__ bNumDeviceCaps; void* bU2DevExitLat; int bU1devExitLat; void* wSpeedSupported; } ;
struct usb_ss_cap_descriptor {int bLength; int bFunctionalitySupport; void* wTotalLength; void** bmSublinkSpeedAttr; void* wFunctionalitySupport; void* bmAttributes; scalar_t__ wReserved; scalar_t__ bReserved; int bDevCapabilityType; void* bDescriptorType; scalar_t__ bNumDeviceCaps; void* bU2DevExitLat; int bU1devExitLat; void* wSpeedSupported; } ;
struct usb_ext_cap_descriptor {int bLength; int bFunctionalitySupport; void* wTotalLength; void** bmSublinkSpeedAttr; void* wFunctionalitySupport; void* bmAttributes; scalar_t__ wReserved; scalar_t__ bReserved; int bDevCapabilityType; void* bDescriptorType; scalar_t__ bNumDeviceCaps; void* bU2DevExitLat; int bU1devExitLat; void* wSpeedSupported; } ;
struct usb_dcd_config_params {scalar_t__ besl_baseline; scalar_t__ besl_deep; void* bU2DevExitLat; int bU1devExitLat; } ;
struct usb_composite_dev {TYPE_2__* req; TYPE_3__* gadget; } ;
struct usb_bos_descriptor {int bLength; int bFunctionalitySupport; void* wTotalLength; void** bmSublinkSpeedAttr; void* wFunctionalitySupport; void* bmAttributes; scalar_t__ wReserved; scalar_t__ bReserved; int bDevCapabilityType; void* bDescriptorType; scalar_t__ bNumDeviceCaps; void* bU2DevExitLat; int bU1devExitLat; void* wSpeedSupported; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {struct usb_ssp_cap_descriptor* buf; } ;
struct TYPE_6__ {int (* get_config_params ) (TYPE_3__*,struct usb_dcd_config_params*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* FUNC_0 (int) ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (void**,void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (TYPE_3__*,struct usb_dcd_config_params*) ;

__attribute__((used)) static int FUNC_10(struct usb_composite_dev *VAR_19)
{
 struct usb_ext_cap_descriptor *VAR_20;
 struct usb_dcd_config_params VAR_21;
 struct usb_bos_descriptor *VAR_22 = VAR_19->req->buf;
 unsigned int VAR_23 = 0;

 VAR_22->bLength = VAR_9;
 VAR_22->bDescriptorType = VAR_8;

 VAR_22->wTotalLength = FUNC_3(VAR_9);
 VAR_22->bNumDeviceCaps = 0;


 if (VAR_19->gadget->ops->get_config_params) {
  VAR_19->gadget->ops->get_config_params(VAR_19->gadget,
           &VAR_21);
 } else {
  VAR_21.besl_baseline =
   VAR_5;
  VAR_21.besl_deep =
   VAR_5;
  VAR_21.bU1devExitLat =
   VAR_6;
  VAR_21.bU2DevExitLat =
   FUNC_3(VAR_7);
 }

 if (VAR_21.besl_baseline != VAR_5)
  VAR_23 = VAR_1 |
   FUNC_1(VAR_21.besl_baseline);

 if (VAR_21.besl_deep != VAR_5)
  VAR_23 |= VAR_2 |
   FUNC_2(VAR_21.besl_deep);





 VAR_20 = VAR_19->req->buf + FUNC_8(VAR_22->wTotalLength);
 VAR_22->bNumDeviceCaps++;
 FUNC_7(&VAR_22->wTotalLength, VAR_11);
 VAR_20->bLength = VAR_11;
 VAR_20->bDescriptorType = VAR_10;
 VAR_20->bDevCapabilityType = VAR_4;
 VAR_20->bmAttributes = FUNC_4(VAR_16 |
         VAR_3 | VAR_23);





 if (FUNC_5(VAR_19->gadget)) {
  struct usb_ss_cap_descriptor *VAR_24;

  VAR_24 = VAR_19->req->buf + FUNC_8(VAR_22->wTotalLength);
  VAR_22->bNumDeviceCaps++;
  FUNC_7(&VAR_22->wTotalLength, VAR_12);
  VAR_24->bLength = VAR_12;
  VAR_24->bDescriptorType = VAR_10;
  VAR_24->bDevCapabilityType = VAR_18;
  VAR_24->bmAttributes = 0;
  VAR_24->wSpeedSupported = FUNC_3(VAR_15 |
            VAR_13 |
            VAR_14 |
            VAR_0);
  VAR_24->bFunctionalitySupport = VAR_15;
  VAR_24->bU1devExitLat = VAR_21.bU1devExitLat;
  VAR_24->bU2DevExitLat = VAR_21.bU2DevExitLat;
 }


 if (FUNC_6(VAR_19->gadget)) {
  struct usb_ssp_cap_descriptor *VAR_25;

  VAR_25 = VAR_19->req->buf + FUNC_8(VAR_22->wTotalLength);
  VAR_22->bNumDeviceCaps++;





  FUNC_7(&VAR_22->wTotalLength, FUNC_0(1));
  VAR_25->bLength = FUNC_0(1);
  VAR_25->bDescriptorType = VAR_10;
  VAR_25->bDevCapabilityType = VAR_17;
  VAR_25->bReserved = 0;
  VAR_25->wReserved = 0;


  VAR_25->bmAttributes = FUNC_4(1);


  VAR_25->wFunctionalitySupport =
   FUNC_3((1 << 8) | (1 << 12));
  VAR_25->bmSublinkSpeedAttr[0] =
   FUNC_4((3 << 4) | (1 << 14) | (0xa << 16));







  VAR_25->bmSublinkSpeedAttr[1] =
   FUNC_4((3 << 4) | (1 << 14) |
        (0xa << 16) | (1 << 7));
 }

 return FUNC_8(VAR_22->wTotalLength);
}
