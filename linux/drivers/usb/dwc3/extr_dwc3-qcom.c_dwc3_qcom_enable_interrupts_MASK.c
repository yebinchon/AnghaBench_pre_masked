
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_qcom {scalar_t__ ss_phy_irq; scalar_t__ dm_hs_phy_irq; scalar_t__ dp_hs_phy_irq; scalar_t__ hs_phy_irq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dwc3_qcom *VAR_0)
{
 if (VAR_0->hs_phy_irq) {
  FUNC_0(VAR_0->hs_phy_irq);
  FUNC_1(VAR_0->hs_phy_irq);
 }

 if (VAR_0->dp_hs_phy_irq) {
  FUNC_0(VAR_0->dp_hs_phy_irq);
  FUNC_1(VAR_0->dp_hs_phy_irq);
 }

 if (VAR_0->dm_hs_phy_irq) {
  FUNC_0(VAR_0->dm_hs_phy_irq);
  FUNC_1(VAR_0->dm_hs_phy_irq);
 }

 if (VAR_0->ss_phy_irq) {
  FUNC_0(VAR_0->ss_phy_irq);
  FUNC_1(VAR_0->ss_phy_irq);
 }
}
