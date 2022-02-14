
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsdfec_clks {int axi_clk; int core_clk; int din_clk; int din_words_clk; int dout_clk; int dout_words_clk; int ctrl_clk; int status_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct xsdfec_clks *VAR_0)
{
 FUNC_0(VAR_0->status_clk);
 FUNC_0(VAR_0->ctrl_clk);
 FUNC_0(VAR_0->dout_words_clk);
 FUNC_0(VAR_0->dout_clk);
 FUNC_0(VAR_0->din_words_clk);
 FUNC_0(VAR_0->din_clk);
 FUNC_0(VAR_0->core_clk);
 FUNC_0(VAR_0->axi_clk);
}
