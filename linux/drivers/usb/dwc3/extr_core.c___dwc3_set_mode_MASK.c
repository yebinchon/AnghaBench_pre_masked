
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct dwc3 {scalar_t__ dr_mode; int current_dr_role; int desired_dr_role; int dev; int usb3_generic_phy; int usb2_generic_phy; TYPE_1__* usb2_phy; int lock; int desired_otg_role; scalar_t__ edev; } ;
struct TYPE_2__ {int otg; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3*) ;
 int FUNC_5 (struct dwc3*) ;
 int FUNC_6 (struct dwc3*) ;
 int FUNC_7 (struct dwc3*) ;
 int FUNC_8 (struct dwc3*) ;
 int FUNC_9 (struct dwc3*,int) ;
 int FUNC_10 (struct dwc3*,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 struct dwc3* FUNC_15 (struct work_struct*) ;

__attribute__((used)) static void FUNC_16(struct work_struct *VAR_4)
{
 struct dwc3 *VAR_5 = FUNC_15(VAR_4);
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5->dr_mode != VAR_3)
  return;

 if (VAR_5->current_dr_role == 128)
  FUNC_9(VAR_5, 0);

 if (!VAR_5->desired_dr_role)
  return;

 if (VAR_5->desired_dr_role == VAR_5->current_dr_role)
  return;

 if (VAR_5->desired_dr_role == 128 && VAR_5->edev)
  return;

 switch (VAR_5->current_dr_role) {
 case 129:
  FUNC_5(VAR_5);
  break;
 case 130:
  FUNC_3(VAR_5);
  FUNC_1(VAR_5);
  break;
 case 128:
  FUNC_7(VAR_5);
  FUNC_13(&VAR_5->lock, VAR_6);
  VAR_5->desired_otg_role = VAR_0;
  FUNC_14(&VAR_5->lock, VAR_6);
  FUNC_9(VAR_5, 1);
  break;
 default:
  break;
 }

 FUNC_13(&VAR_5->lock, VAR_6);

 FUNC_10(VAR_5, VAR_5->desired_dr_role);

 FUNC_14(&VAR_5->lock, VAR_6);

 switch (VAR_5->desired_dr_role) {
 case 129:
  VAR_7 = FUNC_6(VAR_5);
  if (VAR_7) {
   FUNC_0(VAR_5->dev, "failed to initialize host\n");
  } else {
   if (VAR_5->usb2_phy)
    FUNC_11(VAR_5->usb2_phy->otg, 1);
   FUNC_12(VAR_5->usb2_generic_phy, VAR_2);
   FUNC_12(VAR_5->usb3_generic_phy, VAR_2);
  }
  break;
 case 130:
  FUNC_2(VAR_5);

  if (VAR_5->usb2_phy)
   FUNC_11(VAR_5->usb2_phy->otg, 0);
  FUNC_12(VAR_5->usb2_generic_phy, VAR_1);
  FUNC_12(VAR_5->usb3_generic_phy, VAR_1);

  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7)
   FUNC_0(VAR_5->dev, "failed to initialize peripheral\n");
  break;
 case 128:
  FUNC_8(VAR_5);
  FUNC_9(VAR_5, 0);
  break;
 default:
  break;
 }

}
