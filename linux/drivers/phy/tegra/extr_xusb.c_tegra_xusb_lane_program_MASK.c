
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_lane_soc {int num_funcs; int mask; int shift; int offset; } ;
struct tegra_xusb_lane {int function; struct tegra_xusb_lane_soc* soc; TYPE_1__* pad; } ;
struct TYPE_2__ {struct tegra_xusb_padctl* padctl; } ;


 int FUNC_0 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_1 (struct tegra_xusb_padctl*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_xusb_lane *VAR_0)
{
 struct tegra_xusb_padctl *VAR_1 = VAR_0->pad->padctl;
 const struct tegra_xusb_lane_soc *VAR_2 = VAR_0->soc;
 u32 VAR_3;


 if (VAR_2->num_funcs < 2)
  return;


 VAR_3 = FUNC_0(VAR_1, VAR_2->offset);
 VAR_3 &= ~(VAR_2->mask << VAR_2->shift);
 VAR_3 |= VAR_0->function << VAR_2->shift;
 FUNC_1(VAR_1, VAR_3, VAR_2->offset);
}
