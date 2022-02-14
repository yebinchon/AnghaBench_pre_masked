
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmci_host {scalar_t__ clk_reg; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

void FUNC_1(struct mmci_host *VAR_1, u32 VAR_2)
{
 if (VAR_1->clk_reg != VAR_2) {
  VAR_1->clk_reg = VAR_2;
  FUNC_0(VAR_2, VAR_1->base + VAR_0);
 }
}
