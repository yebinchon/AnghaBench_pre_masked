
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int wIndex; int wValue; } ;
struct TYPE_2__ {int state; } ;
struct dwc3 {TYPE_1__ gadget; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int VAR_0 ;





 int FUNC_0 (struct dwc3*,int,int,int) ;
 int FUNC_1 (struct dwc3*,int,int) ;
 int FUNC_2 (struct dwc3*,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dwc3 *VAR_1,
  struct usb_ctrlrequest *VAR_2, int VAR_3)
{
 enum usb_device_state VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_2->wValue);
 VAR_6 = FUNC_3(VAR_2->wIndex);
 VAR_4 = VAR_1->gadget.state;

 switch (VAR_5) {
 case 131:
  break;




 case 129:
  VAR_7 = FUNC_1(VAR_1, VAR_4, VAR_3);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_1, VAR_4, VAR_3);
  break;
 case 132:
  VAR_7 = -VAR_0;
  break;
 case 130:
  VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_6, VAR_3);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
