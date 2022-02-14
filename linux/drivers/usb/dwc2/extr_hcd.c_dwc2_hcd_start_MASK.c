
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc2_hsotg {scalar_t__ op_state; int start_work; int wq_otg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dwc2_hsotg*) ;
 int FUNC_1 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;

void FUNC_4(struct dwc2_hsotg *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->op_state == VAR_2) {





  VAR_4 = FUNC_0(VAR_3);
  VAR_4 |= VAR_1;
  FUNC_1(VAR_3, VAR_4, VAR_0);
 }

 FUNC_3(VAR_3->wq_otg, &VAR_3->start_work,
      FUNC_2(50));
}
