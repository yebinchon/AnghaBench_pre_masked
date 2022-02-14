
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pmc {TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__* powergates; } ;



__attribute__((used)) static inline bool FUNC_0(struct tegra_pmc *VAR_0, int VAR_1)
{
 return (VAR_0->soc && VAR_0->soc->powergates[VAR_1]);
}
