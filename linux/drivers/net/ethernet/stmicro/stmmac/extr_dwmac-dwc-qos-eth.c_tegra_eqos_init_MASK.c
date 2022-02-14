
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct tegra_eqos {scalar_t__ regs; int clk_slave; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1, void *VAR_2)
{
 struct tegra_eqos *VAR_3 = VAR_2;
 unsigned long VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3->clk_slave);

 VAR_5 = (VAR_4 / 1000000) - 1;
 FUNC_1(VAR_5, VAR_3->regs + VAR_0);

 return 0;
}
