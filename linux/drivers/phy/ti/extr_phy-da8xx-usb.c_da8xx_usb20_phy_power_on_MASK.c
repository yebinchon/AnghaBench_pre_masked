
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct da8xx_usb_phy {int regmap; int usb20_clk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct da8xx_usb_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_1)
{
 struct da8xx_usb_phy *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->usb20_clk);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_2->regmap, FUNC_0(2), VAR_0, 0);

 return 0;
}
