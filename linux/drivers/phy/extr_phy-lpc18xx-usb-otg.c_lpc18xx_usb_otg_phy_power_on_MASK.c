
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct lpc18xx_usb_otg_phy {int clk; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct lpc18xx_usb_otg_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_2)
{
 struct lpc18xx_usb_otg_phy *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->clk);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_3->reg, VAR_0,
      VAR_1, 0);
 if (VAR_4) {
  FUNC_0(VAR_3->clk);
  return VAR_4;
 }

 return 0;
}
