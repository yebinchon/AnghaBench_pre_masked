
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int h_clk; int bus_clk; int src_clk; int src_clk_cg; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct msdc_host *VAR_0)
{
 FUNC_0(VAR_0->src_clk_cg);
 FUNC_0(VAR_0->src_clk);
 FUNC_0(VAR_0->bus_clk);
 FUNC_0(VAR_0->h_clk);
}
