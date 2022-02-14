
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dwmac {scalar_t__ clk_eth_ck; scalar_t__ syscfg_clk; scalar_t__ clk_tx; int clk_ethstp; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct stm32_dwmac *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0->clk_ethstp);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0->clk_tx);
 FUNC_0(VAR_0->syscfg_clk);
 if (VAR_0->clk_eth_ck)
  FUNC_0(VAR_0->clk_eth_ck);

 return VAR_1;
}
