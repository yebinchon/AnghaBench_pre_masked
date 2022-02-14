
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_mc_reset {int bit; int status; } ;
struct tegra_mc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_mc*,int ) ;

__attribute__((used)) static bool FUNC_2(struct tegra_mc *VAR_0,
           const struct tegra_mc_reset *VAR_1)
{
 return (FUNC_1(VAR_0, VAR_1->status) & FUNC_0(VAR_1->bit)) != 0;
}
