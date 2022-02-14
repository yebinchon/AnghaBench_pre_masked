
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dwmac {TYPE_1__* ops; int clk_rx; int clk_tx; } ;
struct TYPE_2__ {int (* clk_prepare ) (struct stm32_dwmac*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct stm32_dwmac*,int) ;

__attribute__((used)) static void FUNC_2(struct stm32_dwmac *VAR_0)
{
 FUNC_0(VAR_0->clk_tx);
 FUNC_0(VAR_0->clk_rx);

 if (VAR_0->ops->clk_prepare)
  VAR_0->ops->clk_prepare(VAR_0, 0);
}
