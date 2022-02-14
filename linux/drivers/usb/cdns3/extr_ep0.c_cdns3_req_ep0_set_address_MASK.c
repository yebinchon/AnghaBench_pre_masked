
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usb_ctrlrequest {int wValue; } ;
struct TYPE_4__ {int state; } ;
struct cdns3_device {TYPE_2__ gadget; TYPE_1__* regs; int dev; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;
struct TYPE_3__ {int usb_cmd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_6(struct cdns3_device *VAR_6,
         struct usb_ctrlrequest *VAR_7)
{
 enum usb_device_state VAR_8 = VAR_6->gadget.state;
 u32 VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_2(VAR_7->wValue);

 if (VAR_10 > VAR_2) {
  FUNC_1(VAR_6->dev,
   "Device address (%d) cannot be greater than %d\n",
   VAR_10, VAR_2);
  return -VAR_0;
 }

 if (VAR_8 == VAR_4) {
  FUNC_1(VAR_6->dev,
   "can't set_address from configured state\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(&VAR_6->regs->usb_cmd);

 FUNC_5(VAR_9 | FUNC_0(VAR_10) | VAR_1,
        &VAR_6->regs->usb_cmd);

 FUNC_4(&VAR_6->gadget,
        (VAR_10 ? VAR_3 : VAR_5));

 return 0;
}
