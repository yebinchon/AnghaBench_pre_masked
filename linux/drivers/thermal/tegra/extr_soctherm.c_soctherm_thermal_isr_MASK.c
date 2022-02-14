
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct tegra_soctherm *VAR_5 = VAR_4;
 u32 VAR_6;
 VAR_6 = FUNC_0(VAR_5->regs + VAR_2);
 FUNC_1(VAR_6, VAR_5->regs + VAR_1);

 return VAR_0;
}
