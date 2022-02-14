
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_wireless_ep_comp_descriptor {int dummy; } ;
struct TYPE_2__ {scalar_t__ bEndpointAddress; } ;
struct usb_host_endpoint {size_t extralen; void* extra; TYPE_1__ desc; } ;
struct usb_descriptor_header {size_t bLength; int bDescriptorType; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int,size_t,...) ;
 struct usb_wireless_ep_comp_descriptor VAR_1 ;

__attribute__((used)) static struct usb_wireless_ep_comp_descriptor *FUNC_1(
  struct device *VAR_2, struct usb_host_endpoint *VAR_3)
{
 void *VAR_4;
 size_t VAR_5;
 struct usb_descriptor_header *VAR_6;
 struct usb_wireless_ep_comp_descriptor *VAR_7;

 if (VAR_3->desc.bEndpointAddress == 0) {
  VAR_7 = &VAR_1;
  goto out;
 }
 VAR_4 = VAR_3->extra;
 VAR_5 = VAR_3->extralen;
 VAR_7 = ((void*)0);
 while (VAR_5 > 0) {
  if (VAR_5 < sizeof(*VAR_6)) {
   FUNC_0(VAR_2, "HW Bug? ep 0x%02x: extra descriptors "
    "at offset %zu: only %zu bytes left\n",
    VAR_3->desc.bEndpointAddress,
    VAR_4 - (void *) VAR_3->extra, VAR_5);
   break;
  }
  VAR_6 = VAR_4;
  if (VAR_6->bDescriptorType == VAR_0) {
   VAR_7 = VAR_4;
   break;
  }
  if (VAR_6->bLength > VAR_5) {
   FUNC_0(VAR_2, "HW Bug? ep 0x%02x: extra descriptor "
    "at offset %zu (type 0x%02x) "
    "length %d but only %zu bytes left\n",
    VAR_3->desc.bEndpointAddress,
    VAR_4 - (void *) VAR_3->extra, VAR_6->bDescriptorType,
    VAR_6->bLength, VAR_5);
   break;
  }
  VAR_4 += VAR_6->bLength;
  VAR_5 -= VAR_6->bLength;
 }
out:
 return VAR_7;
}
