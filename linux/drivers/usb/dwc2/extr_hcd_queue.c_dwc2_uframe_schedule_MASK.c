
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {scalar_t__ dev_speed; int do_split; } ;
struct dwc2_hsotg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_1 (struct dwc2_hsotg*,char*,struct dwc2_qh*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_qh*) ;

__attribute__((used)) static int FUNC_5(struct dwc2_hsotg *VAR_1, struct dwc2_qh *VAR_2)
{
 int VAR_3;

 if (VAR_2->dev_speed == VAR_0)
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else if (!VAR_2->do_split)
  VAR_3 = FUNC_3(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_4(VAR_1, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_1, "QH=%p Failed to schedule %d\n", VAR_2, VAR_3);
 else
  FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
