
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_pmc*,int ) ;
 int FUNC_1 (struct tegra_pmc*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_pmc *VAR_2,
        struct device_node *VAR_3,
        bool VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0);

 if (VAR_4)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_2, VAR_5, VAR_0);
}
