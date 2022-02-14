
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_xusb_lane {TYPE_2__* pad; } ;
struct phy {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* remove ) (struct tegra_xusb_lane*) ;} ;


 int FUNC_0 (struct phy*) ;
 struct tegra_xusb_lane* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct tegra_xusb_lane*) ;

__attribute__((used)) static void FUNC_3(struct phy *VAR_0)
{
 if (VAR_0) {
  struct tegra_xusb_lane *VAR_1 = FUNC_1(VAR_0);

  VAR_1->pad->ops->remove(VAR_1);
  FUNC_0(VAR_0);
 }
}
