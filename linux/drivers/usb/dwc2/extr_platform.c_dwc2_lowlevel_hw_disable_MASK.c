
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int ll_hw_enabled; } ;


 int FUNC_0 (struct dwc2_hsotg*) ;

int FUNC_1(struct dwc2_hsotg *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == 0)
  VAR_0->ll_hw_enabled = 0;
 return VAR_1;
}
