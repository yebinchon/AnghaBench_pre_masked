
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pmx {unsigned int nbanks; int pctl; int ** regs; int * backup_regs; } ;
struct device {int dummy; } ;


 struct tegra_pmx* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (struct device*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct tegra_pmx *VAR_1 = FUNC_0(VAR_0);
 u32 *VAR_2 = VAR_1->backup_regs;
 u32 *VAR_3;
 size_t VAR_4;
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->nbanks; VAR_5++) {
  VAR_4 = FUNC_3(VAR_0, VAR_5);
  VAR_3 = VAR_1->regs[VAR_5];
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   *VAR_2++ = FUNC_2(VAR_3++);
 }

 return FUNC_1(VAR_1->pctl);
}
