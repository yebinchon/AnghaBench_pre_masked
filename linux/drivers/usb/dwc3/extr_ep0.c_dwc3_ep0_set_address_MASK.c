
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int wValue; } ;
struct TYPE_2__ {int state; } ;
struct dwc3 {TYPE_1__ gadget; int regs; int dev; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct dwc3 *VAR_6, struct usb_ctrlrequest *VAR_7)
{
 enum usb_device_state VAR_8 = VAR_6->gadget.state;
 u32 VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_4(VAR_7->wValue);
 if (VAR_9 > 127) {
  FUNC_1(VAR_6->dev, "invalid device address %d\n", VAR_9);
  return -VAR_2;
 }

 if (VAR_8 == VAR_4) {
  FUNC_1(VAR_6->dev, "can't SetAddress() from Configured State\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_2(VAR_6->regs, VAR_0);
 VAR_10 &= ~(VAR_1);
 VAR_10 |= FUNC_0(VAR_9);
 FUNC_3(VAR_6->regs, VAR_0, VAR_10);

 if (VAR_9)
  FUNC_5(&VAR_6->gadget, VAR_3);
 else
  FUNC_5(&VAR_6->gadget, VAR_5);

 return 0;
}
