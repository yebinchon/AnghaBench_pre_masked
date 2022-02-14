
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct exynos_mipi_video_phy {int slock; TYPE_2__* phys; struct regmap** regmaps; } ;
struct exynos_mipi_phy_desc {size_t enable_map; size_t resetn_map; size_t coupled_phy_id; int enable_val; int enable_reg; int resetn_val; int resetn_reg; } ;
struct TYPE_4__ {TYPE_1__* phy; } ;
struct TYPE_3__ {scalar_t__ power_count; } ;


 int FUNC_0 (struct regmap*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const struct exynos_mipi_phy_desc *VAR_0,
      struct exynos_mipi_video_phy *VAR_1, unsigned int VAR_2)
{
 struct regmap *VAR_3 = VAR_1->regmaps[VAR_0->enable_map];
 struct regmap *VAR_4 = VAR_1->regmaps[VAR_0->resetn_map];

 FUNC_1(&VAR_1->slock);


 if (!VAR_2 && VAR_0->coupled_phy_id >= 0 &&
     VAR_1->phys[VAR_0->coupled_phy_id].phy->power_count == 0)
  FUNC_0(VAR_3, VAR_0->enable_reg,
       VAR_0->enable_val, 0);

 if (VAR_2)
  FUNC_0(VAR_4, VAR_0->resetn_reg,
       VAR_0->resetn_val, VAR_0->resetn_val);
 else
  FUNC_0(VAR_4, VAR_0->resetn_reg,
       VAR_0->resetn_val, 0);

 if (VAR_2)
  FUNC_0(VAR_3, VAR_0->enable_reg,
       VAR_0->enable_val, VAR_0->enable_val);

 FUNC_2(&VAR_1->slock);

 return 0;
}
