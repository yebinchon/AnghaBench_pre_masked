
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmc {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct tegra_pmc*,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct tegra_pmc *VAR_2, unsigned long VAR_3,
        u32 VAR_4, u32 VAR_5, unsigned long VAR_6)
{
 u32 VAR_7;

 VAR_6 = VAR_1 + FUNC_0(VAR_6);

 while (FUNC_2(VAR_6, VAR_1)) {
  VAR_7 = FUNC_1(VAR_2, VAR_3);
  if ((VAR_7 & VAR_4) == VAR_5)
   return 0;

  FUNC_3(250, 1000);
 }

 return -VAR_0;
}
