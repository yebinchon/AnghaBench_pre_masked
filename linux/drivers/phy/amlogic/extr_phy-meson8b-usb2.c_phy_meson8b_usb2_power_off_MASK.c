
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson8b_usb2_priv {int clk_usb_general; int clk_usb; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct phy_meson8b_usb2_priv* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct phy_meson8b_usb2_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk_usb);
 FUNC_0(VAR_1->clk_usb_general);

 return 0;
}
