
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_config_descriptor {scalar_t__ bDescriptorType; unsigned int bLength; scalar_t__ bConfigurationValue; int bmAttributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct usb_config_descriptor *VAR_4,
  unsigned int VAR_5)
{
 return VAR_4->bDescriptorType == VAR_2
  && VAR_4->bLength == VAR_3
  && VAR_5 >= VAR_3
  && VAR_4->bConfigurationValue != 0
  && (VAR_4->bmAttributes & VAR_0) != 0
  && (VAR_4->bmAttributes & VAR_1) == 0;


}
