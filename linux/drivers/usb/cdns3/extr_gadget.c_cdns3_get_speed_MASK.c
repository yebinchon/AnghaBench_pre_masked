
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3_device {TYPE_1__* regs; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_2__ {int usb_sts; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;

enum usb_device_speed FUNC_5(struct cdns3_device *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_4(&VAR_5->regs->usb_sts);

 if (FUNC_3(VAR_6))
  return VAR_3;
 else if (FUNC_1(VAR_6))
  return VAR_1;
 else if (FUNC_0(VAR_6))
  return VAR_0;
 else if (FUNC_2(VAR_6))
  return VAR_2;
 return VAR_4;
}
