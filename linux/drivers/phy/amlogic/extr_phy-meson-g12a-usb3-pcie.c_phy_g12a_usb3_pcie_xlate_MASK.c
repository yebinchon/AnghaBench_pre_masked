
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_g12a_usb3_pcie_priv {unsigned int mode; struct phy* phy; } ;
struct phy {int dummy; } ;
struct of_phandle_args {int args_count; unsigned int* args; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct phy_g12a_usb3_pcie_priv* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_3,
         struct of_phandle_args *VAR_4)
{
 struct phy_g12a_usb3_pcie_priv *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;

 if (VAR_4->args_count < 1) {
  FUNC_1(VAR_3, "invalid number of arguments\n");
  return FUNC_0(-VAR_0);
 }

 VAR_6 = VAR_4->args[0];

 if (VAR_6 != VAR_2 && VAR_6 != VAR_1) {
  FUNC_1(VAR_3, "invalid phy mode select argument\n");
  return FUNC_0(-VAR_0);
 }

 VAR_5->mode = VAR_6;

 return VAR_5->phy;
}
