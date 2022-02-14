
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct of_phandle_args {int args_count; unsigned int* args; } ;
struct ltq_vrx200_pcie_phy_priv {unsigned int mode; struct phy* phy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;






 int FUNC_1 (struct device*,char*,...) ;
 struct ltq_vrx200_pcie_phy_priv* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_1,
          struct of_phandle_args *VAR_2)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4;

 if (VAR_2->args_count != 1) {
  FUNC_1(VAR_1, "invalid number of arguments\n");
  return FUNC_0(-VAR_0);
 }

 VAR_4 = VAR_2->args[0];

 switch (VAR_4) {
 case 129:
  VAR_3->mode = VAR_4;
  break;

 case 131:
 case 130:
 case 128:
 case 133:
 case 132:
  FUNC_1(VAR_1, "PHY mode not implemented yet: %u\n", VAR_4);
  return FUNC_0(-VAR_0);

 default:
  FUNC_1(VAR_1, "invalid PHY mode %u\n", VAR_4);
  return FUNC_0(-VAR_0);
 };

 return VAR_3->phy;
}
