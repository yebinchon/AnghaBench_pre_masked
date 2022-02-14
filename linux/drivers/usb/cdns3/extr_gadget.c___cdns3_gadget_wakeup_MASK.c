
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_device {TYPE_1__* regs; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_2__ {int usb_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdns3_device*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct cdns3_device *VAR_2)
{
 enum usb_device_speed VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 >= VAR_1)
  return 0;


 FUNC_1(VAR_0, &VAR_2->regs->usb_conf);

 return 0;
}
