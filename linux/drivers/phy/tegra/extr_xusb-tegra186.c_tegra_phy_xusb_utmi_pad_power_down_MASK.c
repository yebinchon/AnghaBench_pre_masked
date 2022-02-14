
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane {unsigned int index; TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_3 (struct tegra_xusb_padctl*,int ,int ) ;
 struct tegra_xusb_lane* FUNC_4 (struct phy*) ;
 int FUNC_5 (struct tegra_xusb_padctl*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct phy *VAR_2)
{
 struct tegra_xusb_lane *VAR_3 = FUNC_4(VAR_2);
 struct tegra_xusb_padctl *VAR_4 = VAR_3->pad->padctl;
 unsigned int VAR_5 = VAR_3->index;
 u32 VAR_6;

 if (!VAR_2)
  return;

 VAR_6 = FUNC_2(VAR_4, FUNC_0(VAR_5));
 VAR_6 |= VAR_0;
 FUNC_3(VAR_4, VAR_6, FUNC_0(VAR_5));

 VAR_6 = FUNC_2(VAR_4, FUNC_1(VAR_5));
 VAR_6 |= VAR_1;
 FUNC_3(VAR_4, VAR_6, FUNC_1(VAR_5));

 FUNC_6(2);

 FUNC_5(VAR_4);
}
