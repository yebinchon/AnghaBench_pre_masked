
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int usb_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct cdns3_device *VAR_2, int VAR_3)
{
 if (VAR_3)
  FUNC_0(VAR_1, &VAR_2->regs->usb_conf);
 else
  FUNC_0(VAR_0, &VAR_2->regs->usb_conf);
}
