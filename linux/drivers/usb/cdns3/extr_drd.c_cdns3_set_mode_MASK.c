
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cdns3 {int dev; TYPE_2__* otg_v0_regs; TYPE_1__* otg_v1_regs; int version; } ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;
struct TYPE_4__ {int ctrl1; } ;
struct TYPE_3__ {int override; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct cdns3 *VAR_4, enum usb_dr_mode VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;

 switch (VAR_5) {
 case 128:
  break;
 case 130:
  break;
 case 129:
  FUNC_0(VAR_4->dev, "Set controller to OTG mode\n");
  if (VAR_4->version == VAR_0) {
   VAR_7 = FUNC_2(&VAR_4->otg_v1_regs->override);
   VAR_7 |= VAR_2;
   FUNC_4(VAR_7, &VAR_4->otg_v1_regs->override);
  } else {
   VAR_7 = FUNC_2(&VAR_4->otg_v0_regs->ctrl1);
   VAR_7 |= VAR_3;
   FUNC_4(VAR_7, &VAR_4->otg_v0_regs->ctrl1);
  }






  FUNC_3(50000, 60000);
  break;
 default:
  FUNC_1(VAR_4->dev, "Unsupported mode of operation %d\n", VAR_5);
  return -VAR_1;
 }

 return VAR_6;
}
