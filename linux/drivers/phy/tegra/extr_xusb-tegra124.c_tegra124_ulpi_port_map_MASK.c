
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_port {int index; int padctl; } ;
struct tegra_xusb_lane {int dummy; } ;


 struct tegra_xusb_lane* FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static struct tegra_xusb_lane *
FUNC_1(struct tegra_xusb_port *VAR_0)
{
 return FUNC_0(VAR_0->padctl, "ulpi", VAR_0->index);
}
