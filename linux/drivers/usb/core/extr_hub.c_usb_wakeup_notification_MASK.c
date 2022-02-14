
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_port {TYPE_1__* child; } ;
struct usb_hub {int wakeup_bits; struct usb_port** ports; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct usb_hub*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 struct usb_hub* FUNC_3 (struct usb_device*) ;

void FUNC_4(struct usb_device *VAR_0,
  unsigned int VAR_1)
{
 struct usb_hub *VAR_2;
 struct usb_port *VAR_3;

 if (!VAR_0)
  return;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  VAR_3 = VAR_2->ports[VAR_1 - 1];
  if (VAR_3 && VAR_3->child)
   FUNC_1(&VAR_3->child->dev, 0);

  FUNC_2(VAR_1, VAR_2->wakeup_bits);
  FUNC_0(VAR_2);
 }
}
