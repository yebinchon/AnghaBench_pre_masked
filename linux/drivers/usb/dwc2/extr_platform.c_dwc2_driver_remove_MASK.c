
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dwc2_hsotg {int reset_ecc; int reset; scalar_t__ ll_hw_enabled; scalar_t__ gadget_enabled; scalar_t__ hcd_enabled; } ;


 int FUNC_0 (struct dwc2_hsotg*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*) ;
 int FUNC_3 (struct dwc2_hsotg*) ;
 struct dwc2_hsotg* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct dwc2_hsotg *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_1);
 if (VAR_1->hcd_enabled)
  FUNC_1(VAR_1);
 if (VAR_1->gadget_enabled)
  FUNC_2(VAR_1);

 if (VAR_1->ll_hw_enabled)
  FUNC_3(VAR_1);

 FUNC_5(VAR_1->reset);
 FUNC_5(VAR_1->reset_ecc);

 return 0;
}
