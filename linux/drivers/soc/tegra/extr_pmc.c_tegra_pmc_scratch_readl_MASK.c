
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {scalar_t__ scratch; scalar_t__ tz_only; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tegra_pmc*,unsigned long) ;

__attribute__((used)) static u32 FUNC_2(struct tegra_pmc *VAR_0, unsigned long VAR_1)
{
 if (VAR_0->tz_only)
  return FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_0->scratch + VAR_1);
}
