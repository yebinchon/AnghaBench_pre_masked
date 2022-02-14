
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_port {scalar_t__ index; int dev; int padctl; } ;
struct tegra_xusb_lane_map {scalar_t__ port; int index; scalar_t__ type; } ;
struct tegra_xusb_lane {TYPE_1__* soc; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct tegra_xusb_lane* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tegra_xusb_lane*) ;
 int FUNC_2 (int *,char*,scalar_t__,int ,int ) ;
 struct tegra_xusb_lane* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (struct tegra_xusb_lane*,char const*) ;

struct tegra_xusb_lane *
FUNC_5(struct tegra_xusb_port *VAR_1,
     const struct tegra_xusb_lane_map *VAR_2,
     const char *VAR_3)
{
 struct tegra_xusb_lane *VAR_4, *VAR_5 = FUNC_0(-VAR_0);

 for (; VAR_2->type; VAR_2++) {
  if (VAR_1->index != VAR_2->port)
   continue;

  VAR_4 = FUNC_3(VAR_1->padctl, VAR_2->type,
         VAR_2->index);
  if (FUNC_1(VAR_4))
   continue;

  if (!FUNC_4(VAR_4, VAR_3))
   continue;

  if (!FUNC_1(VAR_5))
   FUNC_2(&VAR_1->dev, "conflicting match: %s-%u / %s\n",
    VAR_2->type, VAR_2->index, VAR_5->soc->name);
  else
   VAR_5 = VAR_4;
 }

 return VAR_5;
}
