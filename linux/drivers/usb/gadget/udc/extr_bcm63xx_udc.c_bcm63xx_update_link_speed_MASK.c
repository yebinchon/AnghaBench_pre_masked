
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int speed; } ;
struct bcm63xx_udc {TYPE_1__ gadget; int dev; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct bcm63xx_udc*,int ) ;

__attribute__((used)) static int FUNC_3(struct bcm63xx_udc *VAR_6)
{
 u32 VAR_7 = FUNC_2(VAR_6, VAR_0);
 enum usb_device_speed VAR_8 = VAR_6->gadget.speed;

 switch ((VAR_7 & VAR_1) >> VAR_2) {
 case 128:
  VAR_6->gadget.speed = VAR_4;
  break;
 case 129:
  VAR_6->gadget.speed = VAR_3;
  break;
 default:

  VAR_6->gadget.speed = VAR_5;
  FUNC_0(VAR_6->dev,
   "received SETUP packet with invalid link speed\n");
  return 0;
 }

 if (VAR_6->gadget.speed != VAR_8) {
  FUNC_1(VAR_6->dev, "link up, %s-speed mode\n",
    VAR_6->gadget.speed == VAR_4 ? "high" : "full");
  return 1;
 } else {
  return 0;
 }
}
