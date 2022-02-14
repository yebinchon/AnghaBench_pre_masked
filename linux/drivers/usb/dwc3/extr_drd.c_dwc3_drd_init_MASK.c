
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct dwc3 {int otg_irq; int dev; int current_dr_role; TYPE_1__ edev_nb; scalar_t__ edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_3 (struct dwc3*) ;
 scalar_t__ FUNC_4 (struct dwc3*) ;
 int FUNC_5 (struct dwc3*) ;
 int FUNC_6 (struct dwc3*,int ) ;
 int FUNC_7 (struct dwc3*) ;
 int FUNC_8 (struct dwc3*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct dwc3*,int ) ;
 int FUNC_10 (struct dwc3*,int ) ;
 int FUNC_11 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_12 (int,int ,int ,int ,char*,struct dwc3*) ;

int FUNC_13(struct dwc3 *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_8->edev = FUNC_4(VAR_8);
 if (FUNC_0(VAR_8->edev))
  return FUNC_1(VAR_8->edev);

 if (VAR_8->edev) {
  VAR_8->edev_nb.notifier_call = VAR_5;
  VAR_9 = FUNC_11(VAR_8->edev, VAR_3,
            &VAR_8->edev_nb);
  if (VAR_9 < 0) {
   FUNC_2(VAR_8->dev, "couldn't register cable notifier\n");
   return VAR_9;
  }

  FUNC_3(VAR_8);
 } else {
  FUNC_10(VAR_8, VAR_0);
  VAR_8->current_dr_role = VAR_0;


  VAR_10 = FUNC_7(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_8->otg_irq = VAR_10;


  FUNC_6(VAR_8, VAR_1);

  FUNC_5(VAR_8);

  VAR_9 = FUNC_12(VAR_8->otg_irq, VAR_6,
        VAR_7,
        VAR_4, "dwc3-otg", VAR_8);
  if (VAR_9) {
   FUNC_2(VAR_8->dev, "failed to request irq #%d --> %d\n",
    VAR_8->otg_irq, VAR_9);
   VAR_9 = -VAR_2;
   return VAR_9;
  }

  FUNC_8(VAR_8);
  FUNC_9(VAR_8, VAR_0);
 }

 return 0;
}
