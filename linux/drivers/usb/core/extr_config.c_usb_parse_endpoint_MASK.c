
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_1__ desc; struct usb_host_endpoint* endpoint; } ;
struct TYPE_7__ {int bEndpointAddress; int bInterval; void* wMaxPacketSize; int bmAttributes; } ;
struct usb_host_endpoint {unsigned char* extra; int extralen; TYPE_2__ desc; int urb_list; } ;
struct usb_endpoint_descriptor {int bLength; int bEndpointAddress; int bInterval; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int speed; int quirks; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_2 (int,int,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,int,int ,char*) ;
 int FUNC_5 (struct device*,char*,int,int,int,int,...) ;
 int FUNC_6 (unsigned char*,int,int ,int ,int*) ;
 int FUNC_7 (int) ;
 unsigned short* VAR_8 ;
 unsigned short* VAR_9 ;
 unsigned short* VAR_10 ;
 int FUNC_8 (TYPE_2__*,struct usb_endpoint_descriptor*,int) ;
 int FUNC_9 (int) ;
 unsigned short* VAR_11 ;
 TYPE_4__* FUNC_10 (struct device*) ;
 int FUNC_11 (TYPE_2__*) ;
 size_t FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor*) ;
 int FUNC_16 (struct device*,int,int,int,struct usb_host_endpoint*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_12, int VAR_13, int VAR_14,
    int VAR_15, struct usb_host_interface *VAR_16, int VAR_17,
    unsigned char *VAR_18, int VAR_19)
{
 unsigned char *VAR_20 = VAR_18;
 struct usb_endpoint_descriptor *VAR_21;
 struct usb_host_endpoint *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27;
 const unsigned short *VAR_28;

 VAR_21 = (struct usb_endpoint_descriptor *) VAR_18;
 VAR_18 += VAR_21->bLength;
 VAR_19 -= VAR_21->bLength;

 if (VAR_21->bLength >= VAR_1)
  VAR_23 = VAR_1;
 else if (VAR_21->bLength >= VAR_2)
  VAR_23 = VAR_2;
 else {
  FUNC_5(VAR_12, "config %d interface %d altsetting %d has an "
      "invalid endpoint descriptor of length %d, skipping\n",
      VAR_13, VAR_14, VAR_15, VAR_21->bLength);
  goto skip_to_next_endpoint_or_interface_descriptor;
 }

 VAR_24 = VAR_21->bEndpointAddress & ~VAR_4;
 if (VAR_24 >= 16 || VAR_24 == 0) {
  FUNC_5(VAR_12, "config %d interface %d altsetting %d has an "
      "invalid endpoint with address 0x%X, skipping\n",
      VAR_13, VAR_14, VAR_15, VAR_21->bEndpointAddress);
  goto skip_to_next_endpoint_or_interface_descriptor;
 }


 if (VAR_16->desc.bNumEndpoints >= VAR_17)
  goto skip_to_next_endpoint_or_interface_descriptor;


 for (VAR_24 = 0; VAR_24 < VAR_16->desc.bNumEndpoints; ++VAR_24) {
  if (VAR_16->endpoint[VAR_24].desc.bEndpointAddress ==
      VAR_21->bEndpointAddress) {
   FUNC_5(VAR_12, "config %d interface %d altsetting %d has a duplicate endpoint with address 0x%X, skipping\n",
       VAR_13, VAR_14, VAR_15, VAR_21->bEndpointAddress);
   goto skip_to_next_endpoint_or_interface_descriptor;
  }
 }

 VAR_22 = &VAR_16->endpoint[VAR_16->desc.bNumEndpoints];
 ++VAR_16->desc.bNumEndpoints;

 FUNC_8(&VAR_22->desc, VAR_21, VAR_23);
 FUNC_1(&VAR_22->urb_list);





 VAR_24 = 0;
 VAR_25 = 255;
 if (FUNC_14(VAR_21)) {
  VAR_24 = 1;
  switch (FUNC_10(VAR_12)->speed) {
  case 128:
  case 129:
  case 131:






   VAR_23 = FUNC_7(VAR_21->bInterval*8);
   if (VAR_23 == 0)
    VAR_23 = 7;
   VAR_25 = 16;







   if (FUNC_10(VAR_12)->quirks &
    VAR_6) {
    VAR_23 = FUNC_2(FUNC_7(VAR_21->bInterval) + 3, VAR_24, VAR_25);
    VAR_24 = VAR_25 = VAR_23;
   }




   if (FUNC_10(VAR_12)->quirks &
    VAR_7) {
    VAR_23 = FUNC_2(FUNC_7(VAR_21->bInterval), VAR_24, VAR_25);
    VAR_24 = VAR_25 = VAR_23;
   }
   break;
  default:





   VAR_23 = 10;
   break;
  }
 } else if (FUNC_15(VAR_21)) {
  VAR_24 = 1;
  VAR_25 = 16;
  switch (FUNC_10(VAR_12)->speed) {
  case 131:
   VAR_23 = 7;
   break;
  default:
   VAR_23 = 4;
   break;
  }
 }
 if (VAR_21->bInterval < VAR_24 || VAR_21->bInterval > VAR_25) {
  FUNC_5(VAR_12, "config %d interface %d altsetting %d "
      "endpoint 0x%X has an invalid bInterval %d, "
      "changing to %d\n",
      VAR_13, VAR_14, VAR_15,
      VAR_21->bEndpointAddress, VAR_21->bInterval, VAR_23);
  VAR_22->desc.bInterval = VAR_23;
 }





 if (FUNC_10(VAR_12)->speed == 130 &&
   FUNC_13(VAR_21)) {
  FUNC_5(VAR_12, "config %d interface %d altsetting %d "
      "endpoint 0x%X is Bulk; changing to Interrupt\n",
      VAR_13, VAR_14, VAR_15, VAR_21->bEndpointAddress);
  VAR_22->desc.bmAttributes = VAR_5;
  VAR_22->desc.bInterval = 1;
  if (FUNC_11(&VAR_22->desc) > 8)
   VAR_22->desc.wMaxPacketSize = FUNC_3(8);
 }


 VAR_27 = FUNC_11(&VAR_22->desc);
 if (VAR_27 == 0) {
  FUNC_5(VAR_12, "config %d interface %d altsetting %d endpoint 0x%X has wMaxPacketSize 0, skipping\n",
      VAR_13, VAR_14, VAR_15, VAR_21->bEndpointAddress);
  goto skip_to_next_endpoint_or_interface_descriptor;
 }


 VAR_24 = 0;
 switch (FUNC_10(VAR_12)->speed) {
 case 130:
  VAR_28 = VAR_10;
  break;
 case 132:
  VAR_28 = VAR_8;
  break;
 case 131:

  if (FUNC_14(VAR_21) || FUNC_15(VAR_21)) {
   VAR_24 = VAR_27 & (FUNC_0(12) | FUNC_0(11));
   VAR_27 &= ~VAR_24;
  }

 default:
  VAR_28 = VAR_9;
  break;
 case 129:
 case 128:
  VAR_28 = VAR_11;
  break;
 }
 VAR_25 = VAR_28[FUNC_12(&VAR_22->desc)];

 if (VAR_27 > VAR_25) {
  FUNC_5(VAR_12, "config %d interface %d altsetting %d endpoint 0x%X has invalid maxpacket %d, setting to %d\n",
      VAR_13, VAR_14, VAR_15, VAR_21->bEndpointAddress, VAR_27, VAR_25);
  VAR_27 = VAR_25;
  VAR_22->desc.wMaxPacketSize = FUNC_3(VAR_24 | VAR_27);
 }






 if (FUNC_10(VAR_12)->speed == 131
   && FUNC_13(VAR_21)) {
  if (VAR_27 != 512)
   FUNC_5(VAR_12, "config %d interface %d altsetting %d "
    "bulk endpoint 0x%X has invalid maxpacket %d\n",
    VAR_13, VAR_14, VAR_15, VAR_21->bEndpointAddress,
    VAR_27);
 }


 if (FUNC_10(VAR_12)->speed >= 129)
  FUNC_16(VAR_12, VAR_13,
    VAR_14, VAR_15, VAR_22, VAR_18, VAR_19);



 VAR_22->extra = VAR_18;
 VAR_24 = FUNC_6(VAR_18, VAR_19, VAR_0,
   VAR_3, &VAR_23);
 VAR_22->extralen = VAR_24;
 VAR_26 = VAR_18 - VAR_20 + VAR_24;
 if (VAR_23 > 0)
  FUNC_4(VAR_12, "skipped %d descriptor%s after %s\n",
      VAR_23, FUNC_9(VAR_23), "endpoint");
 return VAR_26;

skip_to_next_endpoint_or_interface_descriptor:
 VAR_24 = FUNC_6(VAR_18, VAR_19, VAR_0,
     VAR_3, ((void*)0));
 return VAR_18 - VAR_20 + VAR_24;
}
