
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_descriptor_header {scalar_t__ bDescriptorType; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct usb_descriptor_header**
FUNC_0(struct usb_descriptor_header **VAR_1)
{
 for (; *VAR_1; VAR_1++) {
  if ((*VAR_1)->bDescriptorType == VAR_0)
   return VAR_1;
 }
 return ((void*)0);
}
