
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int wValue; } ;
struct TYPE_2__ {int state; } ;
struct dwc3 {TYPE_1__ gadget; int regs; int dis_u2_entry_quirk; int dis_u1_entry_quirk; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct dwc3*,struct usb_ctrlrequest*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int const) ;

__attribute__((used)) static int FUNC_5(struct dwc3 *VAR_5, struct usb_ctrlrequest *VAR_6)
{
 enum usb_device_state VAR_7 = VAR_5->gadget.state;
 u32 VAR_8;
 int VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_3(VAR_6->wValue);

 switch (VAR_7) {
 case 128:
  return -VAR_3;

 case 130:
  VAR_9 = FUNC_0(VAR_5, VAR_6);

  if (VAR_8 && (!VAR_9 || (VAR_9 == VAR_4))) {







   if (VAR_9 == 0)
    FUNC_4(&VAR_5->gadget,
      129);





   VAR_10 = FUNC_1(VAR_5->regs, VAR_0);
   if (!VAR_5->dis_u1_entry_quirk)
    VAR_10 |= VAR_1;
   if (!VAR_5->dis_u2_entry_quirk)
    VAR_10 |= VAR_2;
   FUNC_2(VAR_5->regs, VAR_0, VAR_10);
  }
  break;

 case 129:
  VAR_9 = FUNC_0(VAR_5, VAR_6);
  if (!VAR_8 && !VAR_9)
   FUNC_4(&VAR_5->gadget,
     130);
  break;
 default:
  VAR_9 = -VAR_3;
 }
 return VAR_9;
}
