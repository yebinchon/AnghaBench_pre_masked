
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_pwrseq {int owner; } ;
struct mmc_host {struct mmc_pwrseq* pwrseq; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mmc_host *VAR_0)
{
 struct mmc_pwrseq *VAR_1 = VAR_0->pwrseq;

 if (VAR_1) {
  FUNC_0(VAR_1->owner);
  VAR_0->pwrseq = ((void*)0);
 }
}
