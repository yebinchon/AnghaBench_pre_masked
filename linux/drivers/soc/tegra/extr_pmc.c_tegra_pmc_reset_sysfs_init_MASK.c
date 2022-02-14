
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pmc {TYPE_1__* soc; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ reset_levels; scalar_t__ reset_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,int *) ;

__attribute__((used)) static void FUNC_2(struct tegra_pmc *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4 = 0;

 if (VAR_2->soc->reset_sources) {
  VAR_4 = FUNC_1(VAR_3, &VAR_1);
  if (VAR_4 < 0)
   FUNC_0(VAR_3,
     "failed to create attr \"reset_reason\": %d\n",
     VAR_4);
 }

 if (VAR_2->soc->reset_levels) {
  VAR_4 = FUNC_1(VAR_3, &VAR_0);
  if (VAR_4 < 0)
   FUNC_0(VAR_3,
     "failed to create attr \"reset_level\": %d\n",
     VAR_4);
 }
}
