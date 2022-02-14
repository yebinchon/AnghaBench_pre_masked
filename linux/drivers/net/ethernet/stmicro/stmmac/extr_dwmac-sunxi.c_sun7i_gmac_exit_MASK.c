
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_priv_data {scalar_t__ regulator; int tx_clk; scalar_t__ clk_enabled; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0, void *VAR_1)
{
 struct sunxi_priv_data *VAR_2 = VAR_1;

 if (VAR_2->clk_enabled) {
  FUNC_0(VAR_2->tx_clk);
  VAR_2->clk_enabled = 0;
 }
 FUNC_1(VAR_2->tx_clk);

 if (VAR_2->regulator)
  FUNC_2(VAR_2->regulator);
}
