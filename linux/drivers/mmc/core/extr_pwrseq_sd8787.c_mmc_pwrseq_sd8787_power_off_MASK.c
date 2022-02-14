
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_pwrseq_sd8787 {int reset_gpio; int pwrdn_gpio; } ;
struct mmc_host {int pwrseq; } ;


 int FUNC_0 (int ,int ) ;
 struct mmc_pwrseq_sd8787* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_0)
{
 struct mmc_pwrseq_sd8787 *VAR_1 = FUNC_1(VAR_0->pwrseq);

 FUNC_0(VAR_1->pwrdn_gpio, 0);
 FUNC_0(VAR_1->reset_gpio, 0);
}
