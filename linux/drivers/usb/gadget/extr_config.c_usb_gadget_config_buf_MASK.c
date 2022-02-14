
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_descriptor_header {int dummy; } ;
struct usb_config_descriptor {unsigned int bLength; int bmAttributes; int wTotalLength; int bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int,struct usb_descriptor_header const**) ;

int FUNC_2(
 const struct usb_config_descriptor *VAR_4,
 void *VAR_5,
 unsigned VAR_6,
 const struct usb_descriptor_header **VAR_7
)
{
 struct usb_config_descriptor *VAR_8 = VAR_5;
 int VAR_9;


 if (VAR_6 < VAR_3 || !VAR_7)
  return -VAR_0;
 *VAR_8 = *VAR_4;


 VAR_9 = FUNC_1(VAR_3 + (u8 *)VAR_5,
   VAR_6 - VAR_3, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 += VAR_3;
 if (VAR_9 > 0xffff)
  return -VAR_0;


 VAR_8->bLength = VAR_3;
 VAR_8->bDescriptorType = VAR_2;
 VAR_8->wTotalLength = FUNC_0(VAR_9);
 VAR_8->bmAttributes |= VAR_1;
 return VAR_9;
}
