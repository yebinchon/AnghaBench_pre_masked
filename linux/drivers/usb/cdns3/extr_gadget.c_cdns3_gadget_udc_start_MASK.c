
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int max_speed; } ;
struct usb_gadget {int max_speed; } ;
struct cdns3_device {int lock; int dev; TYPE_1__* regs; struct usb_gadget_driver* gadget_driver; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_2__ {int usb_conf; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct cdns3_device*) ;
 int FUNC_1 (int ,char*,int) ;
 struct cdns3_device* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_2,
      struct usb_gadget_driver *VAR_3)
{
 struct cdns3_device *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 enum usb_device_speed VAR_6 = VAR_3->max_speed;

 FUNC_4(&VAR_4->lock, VAR_5);
 VAR_4->gadget_driver = VAR_3;


 VAR_6 = FUNC_3(VAR_3->max_speed, VAR_2->max_speed);

 switch (VAR_6) {
 case 131:
  FUNC_6(VAR_0, &VAR_4->regs->usb_conf);
  FUNC_6(VAR_1, &VAR_4->regs->usb_conf);
  break;
 case 130:
  FUNC_6(VAR_1, &VAR_4->regs->usb_conf);
  break;
 case 129:
  break;
 default:
  FUNC_1(VAR_4->dev,
   "invalid maximum_speed parameter %d\n",
   VAR_6);

 case 128:

  VAR_6 = 129;
  break;
 }

 FUNC_0(VAR_4);
 FUNC_5(&VAR_4->lock, VAR_5);
 return 0;
}
