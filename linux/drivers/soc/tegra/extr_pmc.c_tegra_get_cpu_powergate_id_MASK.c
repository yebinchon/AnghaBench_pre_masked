
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pmc {TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_cpu_powergates; int* cpu_powergates; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tegra_pmc *VAR_1,
          unsigned int VAR_2)
{
 if (VAR_1->soc && VAR_2 < VAR_1->soc->num_cpu_powergates)
  return VAR_1->soc->cpu_powergates[VAR_2];

 return -VAR_0;
}
