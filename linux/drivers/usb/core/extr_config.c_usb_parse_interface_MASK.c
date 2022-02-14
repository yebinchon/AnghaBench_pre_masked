
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface_descriptor {scalar_t__ bLength; int bInterfaceNumber; int bAlternateSetting; } ;
struct usb_interface_cache {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_4__ {int bAlternateSetting; int bNumEndpoints; } ;
struct usb_host_interface {unsigned char* extra; int extralen; int endpoint; TYPE_2__ desc; } ;
struct usb_host_endpoint {int dummy; } ;
struct TYPE_3__ {int bNumInterfaces; } ;
struct usb_host_config {struct usb_interface_cache** intf_cache; TYPE_1__ desc; } ;
struct usb_descriptor_header {scalar_t__ bDescriptorType; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int,int ,char*) ;
 int FUNC_1 (struct device*,char*,int,int,int,...) ;
 int FUNC_2 (unsigned char*,int,scalar_t__,scalar_t__,int*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*,struct usb_interface_descriptor*,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct device*,int,int,int,struct usb_host_interface*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6, int VAR_7,
    struct usb_host_config *VAR_8, unsigned char *VAR_9, int VAR_10,
    u8 VAR_11[], u8 VAR_12[])
{
 unsigned char *VAR_13 = VAR_9;
 struct usb_interface_descriptor *VAR_14;
 int VAR_15, VAR_16;
 struct usb_interface_cache *VAR_17;
 struct usb_host_interface *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23, VAR_24;

 VAR_14 = (struct usb_interface_descriptor *) VAR_9;
 VAR_9 += VAR_14->bLength;
 VAR_10 -= VAR_14->bLength;

 if (VAR_14->bLength < VAR_4)
  goto skip_to_next_interface_descriptor;


 VAR_17 = ((void*)0);
 VAR_15 = VAR_14->bInterfaceNumber;
 for (VAR_19 = 0; VAR_19 < VAR_8->desc.bNumInterfaces; ++VAR_19) {
  if (VAR_11[VAR_19] == VAR_15) {
   VAR_17 = VAR_8->intf_cache[VAR_19];
   break;
  }
 }
 if (!VAR_17 || VAR_17->num_altsetting >= VAR_12[VAR_19])
  goto skip_to_next_interface_descriptor;


 VAR_16 = VAR_14->bAlternateSetting;
 for ((VAR_19 = 0, VAR_18 = &VAR_17->altsetting[0]);
       VAR_19 < VAR_17->num_altsetting;
      (++VAR_19, ++VAR_18)) {
  if (VAR_18->desc.bAlternateSetting == VAR_16) {
   FUNC_1(VAR_6, "Duplicate descriptor for config %d "
       "interface %d altsetting %d, skipping\n",
       VAR_7, VAR_15, VAR_16);
   goto skip_to_next_interface_descriptor;
  }
 }

 ++VAR_17->num_altsetting;
 FUNC_4(&VAR_18->desc, VAR_14, VAR_4);



 VAR_18->extra = VAR_9;
 VAR_19 = FUNC_2(VAR_9, VAR_10, VAR_2,
     VAR_3, &VAR_20);
 VAR_18->extralen = VAR_19;
 if (VAR_20 > 0)
  FUNC_0(VAR_6, "skipped %d descriptor%s after %s\n",
      VAR_20, FUNC_5(VAR_20), "interface");
 VAR_9 += VAR_19;
 VAR_10 -= VAR_19;


 VAR_23 = VAR_24 = VAR_18->desc.bNumEndpoints;
 VAR_18->desc.bNumEndpoints = 0;
 if (VAR_23 > VAR_5) {
  FUNC_1(VAR_6, "too many endpoints for config %d interface %d "
      "altsetting %d: %d, using maximum allowed: %d\n",
      VAR_7, VAR_15, VAR_16, VAR_23, VAR_5);
  VAR_23 = VAR_5;
 }

 if (VAR_23 > 0) {

  VAR_21 = sizeof(struct usb_host_endpoint) * VAR_23;
  VAR_18->endpoint = FUNC_3(VAR_21, VAR_1);
  if (!VAR_18->endpoint)
   return -VAR_0;
 }


 VAR_20 = 0;
 while (VAR_10 > 0) {
  if (((struct usb_descriptor_header *) VAR_9)->bDescriptorType
       == VAR_3)
   break;
  VAR_22 = FUNC_6(VAR_6, VAR_7, VAR_15, VAR_16, VAR_18,
      VAR_23, VAR_9, VAR_10);
  if (VAR_22 < 0)
   return VAR_22;
  ++VAR_20;

  VAR_9 += VAR_22;
  VAR_10 -= VAR_22;
 }

 if (VAR_20 != VAR_24)
  FUNC_1(VAR_6, "config %d interface %d altsetting %d has %d "
      "endpoint descriptor%s, different from the interface "
      "descriptor's value: %d\n",
      VAR_7, VAR_15, VAR_16, VAR_20, FUNC_5(VAR_20), VAR_24);
 return VAR_9 - VAR_13;

skip_to_next_interface_descriptor:
 VAR_19 = FUNC_2(VAR_9, VAR_10, VAR_3,
     VAR_3, ((void*)0));
 return VAR_9 - VAR_13 + VAR_19;
}
