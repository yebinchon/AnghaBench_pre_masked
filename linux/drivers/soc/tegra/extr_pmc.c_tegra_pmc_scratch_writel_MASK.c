
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {scalar_t__ scratch; scalar_t__ tz_only; } ;


 int FUNC_0 (struct tegra_pmc*,int ,unsigned long) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tegra_pmc *VAR_0, u32 VAR_1,
         unsigned long VAR_2)
{
 if (VAR_0->tz_only)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_0->scratch + VAR_2);
}
