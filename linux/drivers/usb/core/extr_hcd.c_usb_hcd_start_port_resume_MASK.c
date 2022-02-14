
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_bus {unsigned int resuming_ports; TYPE_1__* root_hub; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct usb_bus *VAR_0, int VAR_1)
{
 unsigned VAR_2 = 1 << VAR_1;

 if (!(VAR_0->resuming_ports & VAR_2)) {
  VAR_0->resuming_ports |= VAR_2;
  FUNC_0(&VAR_0->root_hub->dev);
 }
}
