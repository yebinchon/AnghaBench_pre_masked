
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int reset; int clks; int num_clks; int usb3_generic_phy; int usb2_generic_phy; int usb3_phy; int usb2_phy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct dwc3 *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_6(VAR_0->usb2_phy);
 FUNC_6(VAR_0->usb3_phy);
 FUNC_2(VAR_0->usb2_generic_phy);
 FUNC_2(VAR_0->usb3_generic_phy);

 FUNC_5(VAR_0->usb2_phy, 1);
 FUNC_5(VAR_0->usb3_phy, 1);
 FUNC_3(VAR_0->usb2_generic_phy);
 FUNC_3(VAR_0->usb3_generic_phy);
 FUNC_0(VAR_0->num_clks, VAR_0->clks);
 FUNC_4(VAR_0->reset);
}
