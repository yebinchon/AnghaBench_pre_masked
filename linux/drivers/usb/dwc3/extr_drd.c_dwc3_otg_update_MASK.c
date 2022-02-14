
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc3 {scalar_t__ dr_mode; scalar_t__ current_dr_role; int desired_otg_role; int current_otg_role; int dev; int usb2_generic_phy; TYPE_1__* usb2_phy; int lock; int regs; } ;
struct TYPE_2__ {int otg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3*) ;
 int FUNC_5 (struct dwc3*) ;
 int FUNC_6 (struct dwc3*) ;
 int FUNC_7 (struct dwc3*) ;
 int FUNC_8 (struct dwc3*) ;
 int FUNC_9 (struct dwc3*) ;
 int FUNC_10 (struct dwc3*) ;
 int FUNC_11 (struct dwc3*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

void FUNC_17(struct dwc3 *VAR_6, bool VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 int VAR_10;
 unsigned long VAR_11;

 if (VAR_6->dr_mode != VAR_5)
  return;


 if (VAR_6->current_dr_role != VAR_0)
  return;

 if (!VAR_7) {
  VAR_9 = FUNC_12(VAR_6->regs, VAR_1);
  VAR_10 = !!(VAR_9 & VAR_2);

  VAR_6->desired_otg_role = VAR_10 ? 129 :
     128;
 }

 if (VAR_6->desired_otg_role == VAR_6->current_otg_role)
  return;

 switch (VAR_6->current_otg_role) {
 case 128:
  FUNC_5(VAR_6);
  FUNC_15(&VAR_6->lock, VAR_11);
  FUNC_9(VAR_6);
  FUNC_16(&VAR_6->lock, VAR_11);
  break;
 case 129:
  FUNC_3(VAR_6);
  FUNC_15(&VAR_6->lock, VAR_11);
  FUNC_1(VAR_6);
  FUNC_7(VAR_6);
  FUNC_16(&VAR_6->lock, VAR_11);
  break;
 default:
  break;
 }

 FUNC_15(&VAR_6->lock, VAR_11);

 VAR_6->current_otg_role = VAR_6->desired_otg_role;

 FUNC_16(&VAR_6->lock, VAR_11);

 switch (VAR_6->desired_otg_role) {
 case 128:
  FUNC_15(&VAR_6->lock, VAR_11);
  FUNC_11(VAR_6);
  FUNC_10(VAR_6);
  FUNC_16(&VAR_6->lock, VAR_11);
  VAR_8 = FUNC_6(VAR_6);
  if (VAR_8) {
   FUNC_0(VAR_6->dev, "failed to initialize host\n");
  } else {
   if (VAR_6->usb2_phy)
    FUNC_13(VAR_6->usb2_phy->otg, 1);
   if (VAR_6->usb2_generic_phy)
    FUNC_14(VAR_6->usb2_generic_phy,
          VAR_4);
  }
  break;
 case 129:
  FUNC_15(&VAR_6->lock, VAR_11);
  FUNC_11(VAR_6);
  FUNC_8(VAR_6);
  FUNC_2(VAR_6);
  FUNC_16(&VAR_6->lock, VAR_11);

  if (VAR_6->usb2_phy)
   FUNC_13(VAR_6->usb2_phy->otg, 0);
  if (VAR_6->usb2_generic_phy)
   FUNC_14(VAR_6->usb2_generic_phy,
         VAR_3);
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8)
   FUNC_0(VAR_6->dev, "failed to initialize peripheral\n");
  break;
 default:
  break;
 }
}
