
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_g12a_usb3_pcie_priv {scalar_t__ mode; int regmap; int reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct phy*) ;
 struct phy_g12a_usb3_pcie_priv* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_3)
{
 struct phy_g12a_usb3_pcie_priv *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4->reset);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->mode == VAR_2)
  return FUNC_1(VAR_3);



 FUNC_3(VAR_4->regmap, VAR_0,
      VAR_1,
      FUNC_0(VAR_1, 0x1c));

 return 0;
}
