
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_lane {TYPE_1__* pad; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {int padctl; } ;


 struct tegra_xusb_lane* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct tegra_xusb_lane *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->pad->padctl);
}
