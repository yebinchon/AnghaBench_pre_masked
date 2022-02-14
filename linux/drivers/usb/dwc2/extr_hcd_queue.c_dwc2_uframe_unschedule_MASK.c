
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {int num_hs_transfers; scalar_t__ schedule_low_speed; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_qh*,int) ;
 int FUNC_1 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_2 (struct dwc2_hsotg*,char*,struct dwc2_qh*) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_0, struct dwc2_qh *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_hs_transfers; VAR_2++)
  FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_1->schedule_low_speed)
  FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_0, "QH=%p Unscheduled\n", VAR_1);
}
