
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_pwrseq_simple {scalar_t__ post_power_on_delay_ms; } ;
struct mmc_host {int pwrseq; } ;


 int FUNC_0 (struct mmc_pwrseq_simple*,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct mmc_pwrseq_simple* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0)
{
 struct mmc_pwrseq_simple *VAR_1 = FUNC_2(VAR_0->pwrseq);

 FUNC_0(VAR_1, 0);

 if (VAR_1->post_power_on_delay_ms)
  FUNC_1(VAR_1->post_power_on_delay_ms);
}
