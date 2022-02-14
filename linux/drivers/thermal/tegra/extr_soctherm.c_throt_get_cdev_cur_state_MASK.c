
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_cooling_device {struct tegra_soctherm* devdata; } ;
struct tegra_soctherm {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_2,
        unsigned long *VAR_3)
{
 struct tegra_soctherm *VAR_4 = VAR_2->devdata;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->regs + VAR_0);
 if (FUNC_0(VAR_5, VAR_1))
  *VAR_3 = 1;
 else
  *VAR_3 = 0;

 return 0;
}
