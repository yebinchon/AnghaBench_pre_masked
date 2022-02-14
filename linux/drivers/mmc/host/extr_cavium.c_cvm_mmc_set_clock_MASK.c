
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int f_min; int f_max; } ;
struct cvm_mmc_slot {unsigned int clock; struct mmc_host* mmc; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct cvm_mmc_slot *VAR_0, unsigned int VAR_1)
{
 struct mmc_host *VAR_2 = VAR_0->mmc;

 VAR_1 = FUNC_1(VAR_1, VAR_2->f_max);
 VAR_1 = FUNC_0(VAR_1, VAR_2->f_min);
 VAR_0->clock = VAR_1;
}
