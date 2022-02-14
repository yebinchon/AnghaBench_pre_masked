
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb {int supplies; TYPE_1__* soc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int num_supplies; } ;


 int FUNC_0 (struct device*,char*,int) ;
 struct tegra_xusb* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tegra_xusb*) ;
 int FUNC_5 (struct tegra_xusb*) ;
 int FUNC_6 (struct tegra_xusb*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct tegra_xusb *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_0, "failed to enable clocks: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1->soc->num_supplies, VAR_1->supplies);
 if (VAR_2) {
  FUNC_0(VAR_0, "failed to enable regulators: %d\n", VAR_2);
  goto disable_clk;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0, "failed to enable PHYs: %d\n", VAR_2);
  goto disable_regulator;
 }

 return 0;

disable_regulator:
 FUNC_2(VAR_1->soc->num_supplies, VAR_1->supplies);
disable_clk:
 FUNC_4(VAR_1);
 return VAR_2;
}
