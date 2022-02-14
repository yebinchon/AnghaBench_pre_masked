
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_emc {unsigned int num_timings; int dev; struct emc_timing* timings; } ;
struct emc_timing {unsigned long rate; } ;


 int FUNC_0 (int ,char*,unsigned long) ;

__attribute__((used)) static struct emc_timing *FUNC_1(struct tegra_emc *VAR_0,
      unsigned long VAR_1)
{
 struct emc_timing *VAR_2 = ((void*)0);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_timings; VAR_3++) {
  if (VAR_0->timings[VAR_3].rate == VAR_1) {
   VAR_2 = &VAR_0->timings[VAR_3];
   break;
  }
 }

 if (!VAR_2) {
  FUNC_0(VAR_0->dev, "no timing for rate %lu\n", VAR_1);
  return ((void*)0);
 }

 return VAR_2;
}
