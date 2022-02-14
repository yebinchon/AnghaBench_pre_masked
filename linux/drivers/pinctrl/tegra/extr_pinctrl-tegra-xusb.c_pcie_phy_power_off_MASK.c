
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_1 (struct tegra_xusb_padctl*,int ,int ) ;
 struct tegra_xusb_padctl* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_2)
{
 struct tegra_xusb_padctl *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_4, VAR_0);

 return 0;
}
