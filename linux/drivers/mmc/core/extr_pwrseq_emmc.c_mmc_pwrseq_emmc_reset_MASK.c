
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_pwrseq_emmc {int reset_gpio; } ;
struct mmc_host {int pwrseq; } ;


 int FUNC_0 (int ,int) ;
 struct mmc_pwrseq_emmc* FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0)
{
 struct mmc_pwrseq_emmc *VAR_1 = FUNC_1(VAR_0->pwrseq);

 FUNC_0(VAR_1->reset_gpio, 1);
 FUNC_2(1);
 FUNC_0(VAR_1->reset_gpio, 0);
 FUNC_2(200);
}
