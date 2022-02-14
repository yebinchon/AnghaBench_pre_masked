
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie {int legacy_phy; int phy; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct tegra_pcie *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 int VAR_2;

 VAR_0->phy = FUNC_3(VAR_1, "pcie");
 if (FUNC_0(VAR_0->phy)) {
  VAR_2 = FUNC_1(VAR_0->phy);
  FUNC_2(VAR_1, "failed to get PHY: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_4(VAR_0->phy);
 if (VAR_2 < 0) {
  FUNC_2(VAR_1, "failed to initialize PHY: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_0->legacy_phy = 1;

 return 0;
}
