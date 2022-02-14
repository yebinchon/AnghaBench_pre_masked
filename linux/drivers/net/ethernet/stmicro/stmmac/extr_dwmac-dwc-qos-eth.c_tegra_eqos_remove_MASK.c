
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_eqos {int clk_master; int clk_slave; int clk_rx; int clk_tx; int reset; int rst; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct tegra_eqos* FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct tegra_eqos *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_3(VAR_1->rst);
 FUNC_2(VAR_1->reset, 1);
 FUNC_0(VAR_1->clk_tx);
 FUNC_0(VAR_1->clk_rx);
 FUNC_0(VAR_1->clk_slave);
 FUNC_0(VAR_1->clk_master);

 return 0;
}
