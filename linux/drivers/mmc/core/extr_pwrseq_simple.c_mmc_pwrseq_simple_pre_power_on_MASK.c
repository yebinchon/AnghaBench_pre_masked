
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_pwrseq_simple {int clk_enabled; int ext_clk; } ;
struct mmc_host {int pwrseq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_pwrseq_simple*,int) ;
 struct mmc_pwrseq_simple* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0)
{
 struct mmc_pwrseq_simple *VAR_1 = FUNC_3(VAR_0->pwrseq);

 if (!FUNC_0(VAR_1->ext_clk) && !VAR_1->clk_enabled) {
  FUNC_1(VAR_1->ext_clk);
  VAR_1->clk_enabled = 1;
 }

 FUNC_2(VAR_1, 1);
}
