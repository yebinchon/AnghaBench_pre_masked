
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {scalar_t__ base; int src_clk_cg; int src_clk; int bus_clk; int h_clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msdc_host *VAR_2)
{
 FUNC_0(VAR_2->h_clk);
 FUNC_0(VAR_2->bus_clk);
 FUNC_0(VAR_2->src_clk);
 FUNC_0(VAR_2->src_clk_cg);
 while (!(FUNC_2(VAR_2->base + VAR_0) & VAR_1))
  FUNC_1();
}
