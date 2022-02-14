
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {int sata_refclk_enabled; int div_clk; int refclk; int wkupclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ti_pipe3 *VAR_0)
{
 if (!FUNC_0(VAR_0->wkupclk))
  FUNC_1(VAR_0->wkupclk);
 if (!FUNC_0(VAR_0->refclk)) {
  FUNC_1(VAR_0->refclk);




  if (VAR_0->sata_refclk_enabled) {
   FUNC_1(VAR_0->refclk);
   VAR_0->sata_refclk_enabled = 0;
  }
 }

 if (!FUNC_0(VAR_0->div_clk))
  FUNC_1(VAR_0->div_clk);
}
