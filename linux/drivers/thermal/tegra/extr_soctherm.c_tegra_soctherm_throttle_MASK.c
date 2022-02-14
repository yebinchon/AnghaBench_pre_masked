
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; scalar_t__ clk_regs; TYPE_1__* soc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ use_ccroc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct tegra_soctherm*,int ) ;
 int FUNC_2 (struct tegra_soctherm*,int,int ) ;
 struct tegra_soctherm* FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct tegra_soctherm*,int) ;
 int FUNC_6 (struct tegra_soctherm*,int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_15)
{
 struct tegra_soctherm *VAR_16 = FUNC_3(VAR_15);
 u32 VAR_17;
 int VAR_18;


 if (VAR_16->soc->use_ccroc) {
  FUNC_6(VAR_16, VAR_9);
  FUNC_6(VAR_16, VAR_10);
  FUNC_6(VAR_16, VAR_8);
 }


 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
  FUNC_5(VAR_16, VAR_18);

 VAR_17 = FUNC_0(0, VAR_14, 1);
 if (VAR_16->soc->use_ccroc) {
  FUNC_2(VAR_16, VAR_17, VAR_1);

  VAR_17 = FUNC_1(VAR_16, VAR_2);
  VAR_17 = FUNC_0(VAR_17, VAR_3, 1);
  FUNC_2(VAR_16, VAR_17, VAR_2);
 } else {
  FUNC_7(VAR_17, VAR_16->regs + VAR_13);

  VAR_17 = FUNC_4(VAR_16->clk_regs + VAR_0);
  VAR_17 = FUNC_0(VAR_17, VAR_3, 1);
  FUNC_7(VAR_17, VAR_16->clk_regs + VAR_0);
 }


 VAR_17 = VAR_4 | VAR_6 |
     VAR_5 | VAR_7;
 FUNC_7(VAR_17, VAR_16->regs + VAR_11);
}
