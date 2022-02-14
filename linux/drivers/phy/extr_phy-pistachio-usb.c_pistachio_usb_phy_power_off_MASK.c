
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pistachio_usb_phy {int phy_clk; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pistachio_usb_phy* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct pistachio_usb_phy *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->phy_clk);

 return 0;
}
