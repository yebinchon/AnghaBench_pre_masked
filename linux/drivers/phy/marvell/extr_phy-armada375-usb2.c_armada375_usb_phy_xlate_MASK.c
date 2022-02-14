
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct device {int dummy; } ;
struct armada375_cluster_phy {scalar_t__ phy_provided; int use_usb3; struct phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 struct armada375_cluster_phy* FUNC_3 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_4(struct device *VAR_5,
     struct of_phandle_args *VAR_6)
{
 struct armada375_cluster_phy *VAR_7 = FUNC_3(VAR_5);

 if (!VAR_7)
  return FUNC_0(-VAR_1);







 if (FUNC_1((VAR_7->phy_provided != VAR_2) &&
   (VAR_7->phy_provided != VAR_6->args[0]))) {
  FUNC_2(VAR_5, "This PHY has already been provided!\n");
  FUNC_2(VAR_5, "Check your device tree, only one controller can use it\n.");
  if (VAR_6->args[0] == VAR_3)
   return FUNC_0(-VAR_0);
  else
   return FUNC_0(-VAR_1);
 }

 if (VAR_6->args[0] == VAR_3)
  VAR_7->use_usb3 = 0;
 else if (VAR_6->args[0] == VAR_4)
  VAR_7->use_usb3 = 1;
 else {
  FUNC_2(VAR_5, "Invalid PHY mode\n");
  return FUNC_0(-VAR_1);
 }


 VAR_7->phy_provided = VAR_6->args[0];

 return VAR_7->phy;
}
