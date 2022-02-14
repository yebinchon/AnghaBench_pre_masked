
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface_descriptor {int bInterfaceNumber; int bLength; } ;
struct usb_interface_cache {int num_altsetting; TYPE_2__* altsetting; int ref; } ;
struct usb_interface_assoc_descriptor {int bLength; } ;
struct TYPE_6__ {int bNumInterfaces; int bLength; int bConfigurationValue; int wTotalLength; int bDescriptorType; } ;
struct usb_host_config {unsigned char* extra; int extralen; struct usb_interface_cache** intf_cache; TYPE_3__ desc; struct usb_interface_assoc_descriptor** intf_assoc; } ;
struct device {int dummy; } ;
struct usb_device {int quirks; struct device dev; } ;
struct usb_descriptor_header {int bLength; int bDescriptorType; } ;
struct TYPE_4__ {int bAlternateSetting; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


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
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int,int,char*) ;
 int FUNC_2 (struct device*,char*,int,int ,int) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 int FUNC_4 (unsigned char*,int,int ,int ,int*) ;
 int FUNC_5 (int *) ;
 struct usb_interface_cache* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*,unsigned char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct usb_interface_cache*,int ,int) ;
 int FUNC_10 (struct device*,int,struct usb_host_config*,unsigned char*,int,int*,int*) ;

__attribute__((used)) static int FUNC_11(struct usb_device *VAR_15, int VAR_16,
    struct usb_host_config *VAR_17, unsigned char *VAR_18, int VAR_19)
{
 struct device *VAR_20 = &VAR_15->dev;
 unsigned char *VAR_21 = VAR_18;
 int VAR_22;
 int VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27;
 struct usb_interface_cache *VAR_28;
 unsigned char *VAR_29;
 int VAR_30;
 struct usb_descriptor_header *VAR_31;
 int VAR_32;
 u8 VAR_33[VAR_12], VAR_34[VAR_12];
 unsigned VAR_35 = 0;

 FUNC_7(&VAR_17->desc, VAR_18, VAR_4);
 VAR_23 = VAR_24 = VAR_17->desc.bNumInterfaces;
 VAR_17->desc.bNumInterfaces = 0;

 if (VAR_17->desc.bDescriptorType != VAR_3 ||
     VAR_17->desc.bLength < VAR_4 ||
     VAR_17->desc.bLength > VAR_19) {
  FUNC_2(VAR_20, "invalid descriptor for config index %d: "
      "type = 0x%X, length = %d\n", VAR_16,
      VAR_17->desc.bDescriptorType, VAR_17->desc.bLength);
  return -VAR_0;
 }
 VAR_22 = VAR_17->desc.bConfigurationValue;

 VAR_18 += VAR_17->desc.bLength;
 VAR_19 -= VAR_17->desc.bLength;

 if (VAR_23 > VAR_12) {
  FUNC_3(VAR_20, "config %d has too many interfaces: %d, "
      "using maximum allowed: %d\n",
      VAR_22, VAR_23, VAR_12);
  VAR_23 = VAR_12;
 }



 VAR_27 = 0;
 for ((VAR_29 = VAR_18, VAR_30 = VAR_19);
       VAR_30 > 0;
      (VAR_29 += VAR_31->bLength, VAR_30 -= VAR_31->bLength)) {

  if (VAR_30 < sizeof(struct usb_descriptor_header)) {
   FUNC_3(VAR_20, "config %d descriptor has %d excess "
       "byte%s, ignoring\n",
       VAR_22, VAR_30, FUNC_8(VAR_30));
   break;
  }

  VAR_31 = (struct usb_descriptor_header *) VAR_29;
  if ((VAR_31->bLength > VAR_30) || (VAR_31->bLength < 2)) {
   FUNC_3(VAR_20, "config %d has an invalid descriptor "
       "of length %d, skipping remainder of the config\n",
       VAR_22, VAR_31->bLength);
   break;
  }

  if (VAR_31->bDescriptorType == VAR_6) {
   struct usb_interface_descriptor *VAR_36;
   int VAR_37;

   VAR_36 = (struct usb_interface_descriptor *) VAR_31;
   if (VAR_36->bLength < VAR_9) {
    FUNC_3(VAR_20, "config %d has an invalid "
        "interface descriptor of length %d, "
        "skipping\n", VAR_22, VAR_36->bLength);
    continue;
   }

   VAR_37 = VAR_36->bInterfaceNumber;

   if ((VAR_15->quirks & VAR_13) &&
       VAR_27 >= VAR_24) {
    FUNC_3(VAR_20, "config %d has more interface "
        "descriptors, than it declares in "
        "bNumInterfaces, ignoring interface "
        "number: %d\n", VAR_22, VAR_37);
    continue;
   }

   if (VAR_37 >= VAR_24)
    FUNC_3(VAR_20, "config %d has an invalid "
        "interface number: %d but max is %d\n",
        VAR_22, VAR_37, VAR_24 - 1);



   for (VAR_25 = 0; VAR_25 < VAR_27; ++VAR_25) {
    if (VAR_33[VAR_25] == VAR_37)
     break;
   }
   if (VAR_25 < VAR_27) {
    if (VAR_34[VAR_25] < 255)
     ++VAR_34[VAR_25];
   } else if (VAR_27 < VAR_12) {
    VAR_33[VAR_27] = VAR_37;
    VAR_34[VAR_27] = 1;
    ++VAR_27;
   }

  } else if (VAR_31->bDescriptorType ==
    VAR_7) {
   struct usb_interface_assoc_descriptor *VAR_38;

   VAR_38 = (struct usb_interface_assoc_descriptor *)VAR_31;
   if (VAR_38->bLength < VAR_8) {
    FUNC_3(VAR_20,
      "config %d has an invalid interface association descriptor of length %d, skipping\n",
      VAR_22, VAR_38->bLength);
    continue;
   }

   if (VAR_35 == VAR_11) {
    FUNC_3(VAR_20, "found more Interface "
            "Association Descriptors "
            "than allocated for in "
            "configuration %d\n", VAR_22);
   } else {
    VAR_17->intf_assoc[VAR_35] = VAR_38;
    VAR_35++;
   }

  } else if (VAR_31->bDescriptorType == VAR_5 ||
       VAR_31->bDescriptorType == VAR_3)
   FUNC_3(VAR_20, "config %d contains an unexpected "
       "descriptor of type 0x%X, skipping\n",
       VAR_22, VAR_31->bDescriptorType);

 }
 VAR_19 = VAR_29 - VAR_18;
 VAR_17->desc.wTotalLength = FUNC_0(VAR_29 - VAR_21);

 if (VAR_27 != VAR_23)
  FUNC_3(VAR_20, "config %d has %d interface%s, different from "
      "the descriptor's value: %d\n",
      VAR_22, VAR_27, FUNC_8(VAR_27), VAR_24);
 else if (VAR_27 == 0)
  FUNC_3(VAR_20, "config %d has no interfaces?\n", VAR_22);
 VAR_17->desc.bNumInterfaces = VAR_23 = VAR_27;


 for (VAR_25 = 0; VAR_25 < VAR_23; ++VAR_25) {
  for (VAR_26 = 0; VAR_26 < VAR_23; ++VAR_26) {
   if (VAR_33[VAR_26] == VAR_25)
    break;
  }
  if (VAR_26 >= VAR_23)
   FUNC_3(VAR_20, "config %d has no interface number "
       "%d\n", VAR_22, VAR_25);
 }


 for (VAR_25 = 0; VAR_25 < VAR_23; ++VAR_25) {
  VAR_26 = VAR_34[VAR_25];
  if (VAR_26 > VAR_10) {
   FUNC_3(VAR_20, "too many alternate settings for "
       "config %d interface %d: %d, "
       "using maximum allowed: %d\n",
       VAR_22, VAR_33[VAR_25], VAR_26, VAR_10);
   VAR_34[VAR_25] = VAR_26 = VAR_10;
  }

  VAR_28 = FUNC_6(FUNC_9(VAR_28, VAR_14, VAR_26), VAR_2);
  VAR_17->intf_cache[VAR_25] = VAR_28;
  if (!VAR_28)
   return -VAR_1;
  FUNC_5(&VAR_28->ref);
 }





 VAR_17->extra = VAR_18;
 VAR_25 = FUNC_4(VAR_18, VAR_19, VAR_6,
     VAR_6, &VAR_27);
 VAR_17->extralen = VAR_25;
 if (VAR_27 > 0)
  FUNC_1(VAR_20, "skipped %d descriptor%s after %s\n",
      VAR_27, FUNC_8(VAR_27), "configuration");
 VAR_18 += VAR_25;
 VAR_19 -= VAR_25;


 while (VAR_19 > 0) {
  VAR_32 = FUNC_10(VAR_20, VAR_22, VAR_17,
      VAR_18, VAR_19, VAR_33, VAR_34);
  if (VAR_32 < 0)
   return VAR_32;

  VAR_18 += VAR_32;
  VAR_19 -= VAR_32;
 }


 for (VAR_25 = 0; VAR_25 < VAR_23; ++VAR_25) {
  VAR_28 = VAR_17->intf_cache[VAR_25];
  for (VAR_26 = 0; VAR_26 < VAR_28->num_altsetting; ++VAR_26) {
   for (VAR_27 = 0; VAR_27 < VAR_28->num_altsetting; ++VAR_27) {
    if (VAR_28->altsetting[VAR_27].desc.
        bAlternateSetting == VAR_26)
     break;
   }
   if (VAR_27 >= VAR_28->num_altsetting)
    FUNC_3(VAR_20, "config %d interface %d has no "
        "altsetting %d\n", VAR_22, VAR_33[VAR_25], VAR_26);
  }
 }

 return 0;
}
