
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dwmac {scalar_t__ clk_eth_ck; scalar_t__ syscfg_clk; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct stm32_dwmac *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1) {
  VAR_2 = FUNC_1(VAR_0->syscfg_clk);
  if (VAR_2)
   return VAR_2;

  if (VAR_0->clk_eth_ck) {
   VAR_2 = FUNC_1(VAR_0->clk_eth_ck);
   if (VAR_2) {
    FUNC_0(VAR_0->syscfg_clk);
    return VAR_2;
   }
  }
 } else {
  FUNC_0(VAR_0->syscfg_clk);
  if (VAR_0->clk_eth_ck)
   FUNC_0(VAR_0->clk_eth_ck);
 }
 return VAR_2;
}
