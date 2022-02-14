
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun9i_usb_phy {int clk; int hsic_clk; int reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun9i_usb_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sun9i_usb_phy*,int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct sun9i_usb_phy *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1, 0);
 FUNC_2(VAR_1->reset);
 FUNC_0(VAR_1->hsic_clk);
 FUNC_0(VAR_1->clk);

 return 0;
}
