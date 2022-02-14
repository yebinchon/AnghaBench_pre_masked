
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct uvc_input_header_descriptor {int bEndpointAddress; void* wTotalLength; } ;
struct uvc_header_descriptor {int bInCollection; int * baInterfaceNr; void* wTotalLength; } ;
struct TYPE_13__ {TYPE_2__* ep; } ;
struct TYPE_11__ {struct uvc_descriptor_header** fs_streaming; struct uvc_descriptor_header** fs_control; struct uvc_descriptor_header** hs_streaming; struct uvc_descriptor_header** ss_streaming; struct uvc_descriptor_header** ss_control; } ;
struct uvc_device {TYPE_3__ video; int streaming_intf; TYPE_1__ desc; } ;
struct uvc_descriptor_header {int dummy; } ;
struct usb_descriptor_header {scalar_t__ bLength; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_14__ {unsigned int bLength; } ;
struct TYPE_12__ {int address; } ;


 int VAR_0 ;
 struct usb_descriptor_header** FUNC_0 (int ) ;
 int VAR_1 ;



 int FUNC_1 (void*,struct usb_descriptor_header**,TYPE_4__*) ;
 int FUNC_2 (void*,struct usb_descriptor_header**,struct usb_descriptor_header const* const*) ;
 void* FUNC_3 (unsigned int) ;
 void* FUNC_4 (unsigned int,int ) ;
 TYPE_4__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 struct usb_descriptor_header** VAR_5 ;
 struct usb_descriptor_header** VAR_6 ;
 TYPE_4__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 struct usb_descriptor_header** VAR_9 ;
 TYPE_4__ VAR_10 ;

__attribute__((used)) static struct usb_descriptor_header **
FUNC_5(struct uvc_device *VAR_11, enum usb_device_speed VAR_12)
{
 struct uvc_input_header_descriptor *VAR_13;
 struct uvc_header_descriptor *VAR_14;
 const struct uvc_descriptor_header * const *VAR_15;
 const struct uvc_descriptor_header * const *VAR_16;
 const struct usb_descriptor_header * const *VAR_17;
 const struct usb_descriptor_header * const *VAR_18;
 struct usb_descriptor_header **VAR_19;
 struct usb_descriptor_header **VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 void *VAR_25;

 switch (VAR_12) {
 case 128:
  VAR_15 = VAR_11->desc.ss_control;
  VAR_16 = VAR_11->desc.ss_streaming;
  VAR_17 = VAR_9;
  break;

 case 129:
  VAR_15 = VAR_11->desc.fs_control;
  VAR_16 = VAR_11->desc.hs_streaming;
  VAR_17 = VAR_6;
  break;

 case 130:
 default:
  VAR_15 = VAR_11->desc.fs_control;
  VAR_16 = VAR_11->desc.fs_streaming;
  VAR_17 = VAR_5;
  break;
 }

 if (!VAR_15 || !VAR_16)
  return FUNC_0(-VAR_0);
 VAR_21 = 0;
 VAR_22 = 0;
 VAR_24 = VAR_7.bLength + VAR_4.bLength
       + VAR_3.bLength + VAR_2.bLength
       + VAR_10;

 if (VAR_12 == 128) {
  VAR_24 += VAR_8.bLength;
  VAR_23 = 6;
 } else {
  VAR_23 = 5;
 }

 for (VAR_18 = (const struct usb_descriptor_header **)VAR_15;
      *VAR_18; ++VAR_18) {
  VAR_21 += (*VAR_18)->bLength;
  VAR_24 += (*VAR_18)->bLength;
  VAR_23++;
 }
 for (VAR_18 = (const struct usb_descriptor_header **)VAR_16;
      *VAR_18; ++VAR_18) {
  VAR_22 += (*VAR_18)->bLength;
  VAR_24 += (*VAR_18)->bLength;
  VAR_23++;
 }
 for (VAR_18 = VAR_17; *VAR_18; ++VAR_18) {
  VAR_24 += (*VAR_18)->bLength;
  VAR_23++;
 }

 VAR_25 = FUNC_4((VAR_23 + 1) * sizeof(*VAR_18) + VAR_24, VAR_1);
 if (VAR_25 == ((void*)0))
  return ((void*)0);

 VAR_20 = VAR_25;
 VAR_19 = VAR_25;
 VAR_25 += (VAR_23 + 1) * sizeof(*VAR_18);


 FUNC_1(VAR_25, VAR_19, &VAR_7);
 FUNC_1(VAR_25, VAR_19, &VAR_4);

 VAR_14 = VAR_25;
 FUNC_2(VAR_25, VAR_19,
  (const struct usb_descriptor_header **)VAR_15);
 VAR_14->wTotalLength = FUNC_3(VAR_21);
 VAR_14->bInCollection = 1;
 VAR_14->baInterfaceNr[0] = VAR_11->streaming_intf;

 FUNC_1(VAR_25, VAR_19, &VAR_3);
 if (VAR_12 == 128)
  FUNC_1(VAR_25, VAR_19, &VAR_8);

 FUNC_1(VAR_25, VAR_19, &VAR_2);
 FUNC_1(VAR_25, VAR_19, &VAR_10);

 VAR_13 = VAR_25;
 FUNC_2(VAR_25, VAR_19,
  (const struct usb_descriptor_header**)VAR_16);
 VAR_13->wTotalLength = FUNC_3(VAR_22);
 VAR_13->bEndpointAddress = VAR_11->video.ep->address;

 FUNC_2(VAR_25, VAR_19, VAR_17);

 *VAR_19 = ((void*)0);
 return VAR_20;
}
