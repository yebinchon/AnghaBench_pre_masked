
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {int dummy; } ;
typedef enum tegra_io_pad { ____Placeholder_tegra_io_pad } tegra_io_pad ;


 int FUNC_0 (struct tegra_pmc*,int,unsigned long*,unsigned long*,int*) ;
 int FUNC_1 (struct tegra_pmc*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct tegra_pmc *VAR_0, enum tegra_io_pad VAR_1)
{
 unsigned long VAR_2, VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_2, &VAR_3,
      &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_3);

 return !(VAR_5 & VAR_4);
}
