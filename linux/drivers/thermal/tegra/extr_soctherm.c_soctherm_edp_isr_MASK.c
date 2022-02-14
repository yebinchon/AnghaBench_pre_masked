
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct tegra_soctherm *VAR_6 = VAR_5;
 u32 VAR_7;

 if (!VAR_6)
  return VAR_0;

 VAR_7 = FUNC_0(VAR_6->regs + VAR_3);
 FUNC_1(VAR_7, VAR_6->regs + VAR_2);

 return VAR_1;
}
