
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_xusb_pad {struct phy** lanes; TYPE_1__* soc; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct phy {TYPE_2__ dev; } ;
struct of_phandle_args {scalar_t__ args_count; scalar_t__ np; } ;
struct device {int dummy; } ;
struct TYPE_3__ {unsigned int num_lanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 struct tegra_xusb_pad* FUNC_1 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_2(struct device *VAR_2,
        struct of_phandle_args *VAR_3)
{
 struct tegra_xusb_pad *VAR_4 = FUNC_1(VAR_2);
 struct phy *VAR_5 = ((void*)0);
 unsigned int VAR_6;

 if (VAR_3->args_count != 0)
  return FUNC_0(-VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_4->soc->num_lanes; VAR_6++) {
  if (!VAR_4->lanes[VAR_6])
   continue;

  if (VAR_4->lanes[VAR_6]->dev.of_node == VAR_3->np) {
   VAR_5 = VAR_4->lanes[VAR_6];
   break;
  }
 }

 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_0(-VAR_1);

 return VAR_5;
}
