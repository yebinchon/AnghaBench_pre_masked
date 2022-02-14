
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear1340_miphy_priv {scalar_t__ mode; struct phy* phy; } ;
struct phy {int dummy; } ;
struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct spear1340_miphy_priv* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_3,
      struct of_phandle_args *VAR_4)
{
 struct spear1340_miphy_priv *VAR_5 = FUNC_2(VAR_3);

 if (VAR_4->args_count < 1) {
  FUNC_1(VAR_3, "DT did not pass correct no of args\n");
  return FUNC_0(-VAR_0);
 }

 VAR_5->mode = VAR_4->args[0];

 if (VAR_5->mode != VAR_2 && VAR_5->mode != VAR_1) {
  FUNC_1(VAR_3, "DT did not pass correct phy mode\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_5->phy;
}
