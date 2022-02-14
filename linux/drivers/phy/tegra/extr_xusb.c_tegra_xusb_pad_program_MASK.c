
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_pad {scalar_t__* lanes; TYPE_1__* soc; } ;
struct tegra_xusb_lane {int dummy; } ;
struct TYPE_2__ {unsigned int num_lanes; } ;


 struct tegra_xusb_lane* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tegra_xusb_lane*) ;

__attribute__((used)) static void FUNC_2(struct tegra_xusb_pad *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->soc->num_lanes; VAR_1++) {
  struct tegra_xusb_lane *VAR_2;

  if (VAR_0->lanes[VAR_1]) {
   VAR_2 = FUNC_0(VAR_0->lanes[VAR_1]);
   FUNC_1(VAR_2);
  }
 }
}
