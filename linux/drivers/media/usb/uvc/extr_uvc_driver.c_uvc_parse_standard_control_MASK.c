
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_12__ {unsigned char bNumControls; unsigned char bControlSize; int * bmControls; int * guidExtensionCode; } ;
struct TYPE_10__ {unsigned char bControlSize; unsigned char bmVideoStandards; int * bmControls; void* wMaxMultiplier; } ;
struct TYPE_9__ {unsigned int bControlSize; unsigned int bTransportModeSize; int * bmTransportModes; int * bmControls; } ;
struct TYPE_8__ {unsigned int bControlSize; int * bmControls; void* wOcularFocalLength; void* wObjectiveFocalLengthMax; void* wObjectiveFocalLengthMin; } ;
struct uvc_entity {int list; int name; TYPE_6__ extension; int * baSourceID; TYPE_4__ processing; TYPE_3__ media; TYPE_2__ camera; } ;
struct uvc_device {int uvc_version; int entities; int clock_frequency; TYPE_1__* intf; struct usb_device* udev; } ;
struct usb_interface {int dummy; } ;
struct TYPE_11__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_5__ desc; } ;
struct usb_device {int devnum; } ;
struct TYPE_7__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uvc_entity*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 void* FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned char const*,unsigned int) ;
 int FUNC_5 (int ,char*,unsigned char const) ;
 struct usb_interface* FUNC_6 (struct usb_device*,unsigned char const) ;
 int FUNC_7 (struct usb_device*,unsigned char const,int ,int) ;
 struct uvc_entity* FUNC_8 (unsigned char const,unsigned char const,unsigned int,unsigned int) ;
 int FUNC_9 (struct uvc_device*,struct usb_interface*) ;
 int FUNC_10 (int ,char*,unsigned char const,...) ;

__attribute__((used)) static int FUNC_11(struct uvc_device *VAR_7,
 const unsigned char *VAR_8, int VAR_9)
{
 struct usb_device *VAR_10 = VAR_7->udev;
 struct uvc_entity *VAR_11, *VAR_12;
 struct usb_interface *VAR_13;
 struct usb_host_interface *VAR_14 = VAR_7->intf->cur_altsetting;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18;
 u16 VAR_19;

 switch (VAR_8[2]) {
 case 132:
  VAR_16 = VAR_9 >= 12 ? VAR_8[11] : 0;

  if (VAR_9 < 12 + VAR_16) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d HEADER error\n", VAR_10->devnum,
    VAR_14->desc.bInterfaceNumber);
   return -VAR_0;
  }

  VAR_7->uvc_version = FUNC_1(&VAR_8[3]);
  VAR_7->clock_frequency = FUNC_2(&VAR_8[7]);


  for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15) {
   VAR_13 = FUNC_6(VAR_10, VAR_8[12+VAR_15]);
   if (VAR_13 == ((void*)0)) {
    FUNC_10(VAR_6, "device %d "
     "interface %d doesn't exists\n",
     VAR_10->devnum, VAR_15);
    continue;
   }

   FUNC_9(VAR_7, VAR_13);
  }
  break;

 case 131:
  if (VAR_9 < 8) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d INPUT_TERMINAL error\n",
    VAR_10->devnum, VAR_14->desc.bInterfaceNumber);
   return -VAR_0;
  }
  VAR_19 = FUNC_1(&VAR_8[4]);
  if ((VAR_19 & 0x7f00) == 0 || (VAR_19 & 0x8000) != 0) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d INPUT_TERMINAL %d has invalid "
    "type 0x%04x, skipping\n", VAR_10->devnum,
    VAR_14->desc.bInterfaceNumber,
    VAR_8[3], VAR_19);
   return 0;
  }

  VAR_16 = 0;
  VAR_17 = 0;
  VAR_18 = 8;

  if (VAR_19 == VAR_2) {
   VAR_16 = VAR_9 >= 15 ? VAR_8[14] : 0;
   VAR_18 = 15;

  } else if (VAR_19 == VAR_3) {
   VAR_16 = VAR_9 >= 9 ? VAR_8[8] : 0;
   VAR_17 = VAR_9 >= 10 + VAR_16 ? VAR_8[9+VAR_16] : 0;
   VAR_18 = 10;
  }

  if (VAR_9 < VAR_18 + VAR_16 + VAR_17) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d INPUT_TERMINAL error\n",
    VAR_10->devnum, VAR_14->desc.bInterfaceNumber);
   return -VAR_0;
  }

  VAR_12 = FUNC_8(VAR_19 | VAR_4, VAR_8[3],
     1, VAR_16 + VAR_17);
  if (VAR_12 == ((void*)0))
   return -VAR_1;

  if (FUNC_0(VAR_12) == VAR_2) {
   VAR_12->camera.bControlSize = VAR_16;
   VAR_12->camera.bmControls = (u8 *)VAR_12 + sizeof(*VAR_12);
   VAR_12->camera.wObjectiveFocalLengthMin =
    FUNC_1(&VAR_8[8]);
   VAR_12->camera.wObjectiveFocalLengthMax =
    FUNC_1(&VAR_8[10]);
   VAR_12->camera.wOcularFocalLength =
    FUNC_1(&VAR_8[12]);
   FUNC_4(VAR_12->camera.bmControls, &VAR_8[15], VAR_16);
  } else if (FUNC_0(VAR_12) ==
      VAR_3) {
   VAR_12->media.bControlSize = VAR_16;
   VAR_12->media.bmControls = (u8 *)VAR_12 + sizeof(*VAR_12);
   VAR_12->media.bTransportModeSize = VAR_17;
   VAR_12->media.bmTransportModes = (u8 *)VAR_12
           + sizeof(*VAR_12) + VAR_16;
   FUNC_4(VAR_12->media.bmControls, &VAR_8[9], VAR_16);
   FUNC_4(VAR_12->media.bmTransportModes, &VAR_8[10+VAR_16], VAR_17);
  }

  if (VAR_8[7] != 0)
   FUNC_7(VAR_10, VAR_8[7], VAR_12->name,
       sizeof(VAR_12->name));
  else if (FUNC_0(VAR_12) == VAR_2)
   FUNC_5(VAR_12->name, "Camera %u", VAR_8[3]);
  else if (FUNC_0(VAR_12) == VAR_3)
   FUNC_5(VAR_12->name, "Media %u", VAR_8[3]);
  else
   FUNC_5(VAR_12->name, "Input %u", VAR_8[3]);

  FUNC_3(&VAR_12->list, &VAR_7->entities);
  break;

 case 130:
  if (VAR_9 < 9) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d OUTPUT_TERMINAL error\n",
    VAR_10->devnum, VAR_14->desc.bInterfaceNumber);
   return -VAR_0;
  }




  VAR_19 = FUNC_1(&VAR_8[4]);
  if ((VAR_19 & 0xff00) == 0) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d OUTPUT_TERMINAL %d has invalid "
    "type 0x%04x, skipping\n", VAR_10->devnum,
    VAR_14->desc.bInterfaceNumber, VAR_8[3], VAR_19);
   return 0;
  }

  VAR_12 = FUNC_8(VAR_19 | VAR_5, VAR_8[3],
     1, 0);
  if (VAR_12 == ((void*)0))
   return -VAR_1;

  FUNC_4(VAR_12->baSourceID, &VAR_8[7], 1);

  if (VAR_8[8] != 0)
   FUNC_7(VAR_10, VAR_8[8], VAR_12->name,
       sizeof(VAR_12->name));
  else
   FUNC_5(VAR_12->name, "Output %u", VAR_8[3]);

  FUNC_3(&VAR_12->list, &VAR_7->entities);
  break;

 case 128:
  VAR_17 = VAR_9 >= 5 ? VAR_8[4] : 0;

  if (VAR_9 < 5 || VAR_9 < 6 + VAR_17) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d SELECTOR_UNIT error\n",
    VAR_10->devnum, VAR_14->desc.bInterfaceNumber);
   return -VAR_0;
  }

  VAR_11 = FUNC_8(VAR_8[2], VAR_8[3], VAR_17 + 1, 0);
  if (VAR_11 == ((void*)0))
   return -VAR_1;

  FUNC_4(VAR_11->baSourceID, &VAR_8[5], VAR_17);

  if (VAR_8[5+VAR_17] != 0)
   FUNC_7(VAR_10, VAR_8[5+VAR_17], VAR_11->name,
       sizeof(VAR_11->name));
  else
   FUNC_5(VAR_11->name, "Selector %u", VAR_8[3]);

  FUNC_3(&VAR_11->list, &VAR_7->entities);
  break;

 case 129:
  VAR_16 = VAR_9 >= 8 ? VAR_8[7] : 0;
  VAR_17 = VAR_7->uvc_version >= 0x0110 ? 10 : 9;

  if (VAR_9 < VAR_17 + VAR_16) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d PROCESSING_UNIT error\n",
    VAR_10->devnum, VAR_14->desc.bInterfaceNumber);
   return -VAR_0;
  }

  VAR_11 = FUNC_8(VAR_8[2], VAR_8[3], 2, VAR_16);
  if (VAR_11 == ((void*)0))
   return -VAR_1;

  FUNC_4(VAR_11->baSourceID, &VAR_8[4], 1);
  VAR_11->processing.wMaxMultiplier =
   FUNC_1(&VAR_8[5]);
  VAR_11->processing.bControlSize = VAR_8[7];
  VAR_11->processing.bmControls = (u8 *)VAR_11 + sizeof(*VAR_11);
  FUNC_4(VAR_11->processing.bmControls, &VAR_8[8], VAR_16);
  if (VAR_7->uvc_version >= 0x0110)
   VAR_11->processing.bmVideoStandards = VAR_8[9+VAR_16];

  if (VAR_8[8+VAR_16] != 0)
   FUNC_7(VAR_10, VAR_8[8+VAR_16], VAR_11->name,
       sizeof(VAR_11->name));
  else
   FUNC_5(VAR_11->name, "Processing %u", VAR_8[3]);

  FUNC_3(&VAR_11->list, &VAR_7->entities);
  break;

 case 133:
  VAR_17 = VAR_9 >= 22 ? VAR_8[21] : 0;
  VAR_16 = VAR_9 >= 24 + VAR_17 ? VAR_8[22+VAR_17] : 0;

  if (VAR_9 < 24 + VAR_17 + VAR_16) {
   FUNC_10(VAR_6, "device %d videocontrol "
    "interface %d EXTENSION_UNIT error\n",
    VAR_10->devnum, VAR_14->desc.bInterfaceNumber);
   return -VAR_0;
  }

  VAR_11 = FUNC_8(VAR_8[2], VAR_8[3], VAR_17 + 1, VAR_16);
  if (VAR_11 == ((void*)0))
   return -VAR_1;

  FUNC_4(VAR_11->extension.guidExtensionCode, &VAR_8[4], 16);
  VAR_11->extension.bNumControls = VAR_8[20];
  FUNC_4(VAR_11->baSourceID, &VAR_8[22], VAR_17);
  VAR_11->extension.bControlSize = VAR_8[22+VAR_17];
  VAR_11->extension.bmControls = (u8 *)VAR_11 + sizeof(*VAR_11);
  FUNC_4(VAR_11->extension.bmControls, &VAR_8[23+VAR_17], VAR_16);

  if (VAR_8[23+VAR_17+VAR_16] != 0)
   FUNC_7(VAR_10, VAR_8[23+VAR_17+VAR_16], VAR_11->name,
       sizeof(VAR_11->name));
  else
   FUNC_5(VAR_11->name, "Extension %u", VAR_8[3]);

  FUNC_3(&VAR_11->list, &VAR_7->entities);
  break;

 default:
  FUNC_10(VAR_6, "Found an unknown CS_INTERFACE "
   "descriptor (%u)\n", VAR_8[2]);
  break;
 }

 return 0;
}
