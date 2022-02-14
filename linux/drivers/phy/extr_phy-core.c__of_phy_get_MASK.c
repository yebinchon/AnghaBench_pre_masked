
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_provider {int owner; int dev; struct phy* (* of_xlate ) (int ,struct of_phandle_args*) ;} ;
struct phy {int dummy; } ;
struct of_phandle_args {int np; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 struct phy_provider* FUNC_10 (int ) ;
 int VAR_2 ;
 struct phy* FUNC_11 (int ,struct of_phandle_args*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static struct phy *FUNC_13(struct device_node *VAR_3, int VAR_4)
{
 int VAR_5;
 struct phy_provider *VAR_6;
 struct phy *VAR_7 = ((void*)0);
 struct of_phandle_args VAR_8;

 VAR_5 = FUNC_9(VAR_3, "phys", "#phy-cells",
  VAR_4, &VAR_8);
 if (VAR_5)
  return FUNC_0(-VAR_0);


 if (FUNC_7(VAR_8.np, "usb-nop-xceiv"))
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_2);
 VAR_6 = FUNC_10(VAR_8.np);
 if (FUNC_1(VAR_6) || !FUNC_12(VAR_6->owner)) {
  VAR_7 = FUNC_0(-VAR_1);
  goto out_unlock;
 }

 if (!FUNC_6(VAR_8.np)) {
  FUNC_2(VAR_6->dev, "Requested PHY is disabled\n");
  VAR_7 = FUNC_0(-VAR_0);
  goto out_put_module;
 }

 VAR_7 = VAR_6->of_xlate(VAR_6->dev, &VAR_8);

out_put_module:
 FUNC_3(VAR_6->owner);

out_unlock:
 FUNC_5(&VAR_2);
 FUNC_8(VAR_8.np);

 return VAR_7;
}
