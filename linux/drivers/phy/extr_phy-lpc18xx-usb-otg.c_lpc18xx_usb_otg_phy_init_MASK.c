
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct lpc18xx_usb_otg_phy {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct lpc18xx_usb_otg_phy* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct lpc18xx_usb_otg_phy *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1->clk, 480000000);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1->clk);
}
