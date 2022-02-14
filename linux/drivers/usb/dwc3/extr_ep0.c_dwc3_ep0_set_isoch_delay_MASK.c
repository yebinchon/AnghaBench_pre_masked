
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_ctrlrequest {int wIndex; int wLength; int wValue; } ;
struct TYPE_2__ {scalar_t__ isoch_delay; } ;
struct dwc3 {TYPE_1__ gadget; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dwc3 *VAR_1, struct usb_ctrlrequest *VAR_2)
{
 u16 VAR_3;
 u16 VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_0(VAR_2->wValue);
 VAR_3 = FUNC_0(VAR_2->wLength);
 VAR_5 = FUNC_0(VAR_2->wIndex);

 if (VAR_5 || VAR_3)
  return -VAR_0;

 VAR_1->gadget.isoch_delay = VAR_4;

 return 0;
}
