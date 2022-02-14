
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int current_dr_role; int otg_irq; scalar_t__ edev; int lock; int desired_otg_role; int drd_work; int edev_nb; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3*) ;
 int FUNC_5 (struct dwc3*,int) ;
 int FUNC_6 (scalar_t__,int ,int *) ;
 int FUNC_7 (int ,struct dwc3*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct dwc3 *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2->edev)
  FUNC_6(VAR_2->edev, VAR_1,
        &VAR_2->edev_nb);

 FUNC_0(&VAR_2->drd_work);


 switch (VAR_2->current_dr_role) {
 case 129:
  FUNC_3(VAR_2);
  break;
 case 130:
  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  break;
 case 128:
  FUNC_4(VAR_2);
  FUNC_8(&VAR_2->lock, VAR_3);
  VAR_2->desired_otg_role = VAR_0;
  FUNC_9(&VAR_2->lock, VAR_3);
  FUNC_5(VAR_2, 1);
  break;
 default:
  break;
 }

 if (!VAR_2->edev)
  FUNC_7(VAR_2->otg_irq, VAR_2);
}
