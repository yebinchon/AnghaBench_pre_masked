
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_ctrlrequest {int wIndex; int wValue; } ;
struct TYPE_3__ {int state; int speed; } ;
struct cdns3_device {int wake_up_flag; int u1_allowed; int u2_allowed; TYPE_2__* regs; TYPE_1__ gadget; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_4__ {int usb_cmd; } ;


 int VAR_0 ;




 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cdns3_device*,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cdns3_device *VAR_5,
        struct usb_ctrlrequest *VAR_6,
        int VAR_7)
{
 enum usb_device_state VAR_8;
 enum usb_device_speed VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;
 u16 VAR_12;

 VAR_11 = FUNC_3(VAR_6->wValue);
 VAR_8 = VAR_5->gadget.state;
 VAR_9 = VAR_5->gadget.speed;

 switch (VAR_11) {
 case 131:
  VAR_5->wake_up_flag = !!VAR_7;
  break;
 case 129:
  if (VAR_8 != VAR_4 || VAR_9 != VAR_3)
   return -VAR_0;

  VAR_5->u1_allowed = !!VAR_7;
  break;
 case 128:
  if (VAR_8 != VAR_4 || VAR_9 != VAR_3)
   return -VAR_0;

  VAR_5->u2_allowed = !!VAR_7;
  break;
 case 132:
  VAR_10 = -VAR_0;
  break;
 case 130:
  if (VAR_8 != VAR_4 || VAR_9 > VAR_2)
   return -VAR_0;

  VAR_12 = FUNC_3(VAR_6->wIndex);

  if (!VAR_7 || (VAR_12 & 0xff) != 0)
   return -VAR_0;

  switch (VAR_12 >> 8) {
  case 136:
  case 135:
  case 133:
  case 134:
   FUNC_1(VAR_5, 0, 1);





   FUNC_4(1);
   FUNC_2(&VAR_5->regs->usb_cmd,
            VAR_1 |
            FUNC_0(VAR_12 - 1));
   break;
  default:
   VAR_10 = -VAR_0;
  }
  break;
 default:
  VAR_10 = -VAR_0;
 }

 return VAR_10;
}
