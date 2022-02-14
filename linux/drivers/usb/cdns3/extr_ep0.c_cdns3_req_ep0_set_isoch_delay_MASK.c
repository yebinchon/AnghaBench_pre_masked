
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int wValue; scalar_t__ wLength; scalar_t__ wIndex; } ;
struct cdns3_device {int isoch_delay; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct cdns3_device *VAR_1,
      struct usb_ctrlrequest *VAR_2)
{
 if (VAR_2->wIndex || VAR_2->wLength)
  return -VAR_0;

 VAR_1->isoch_delay = VAR_2->wValue;

 return 0;
}
