
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvm_mmc_host {int global_pwr_gpiod; int shared_power_users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct cvm_mmc_host *VAR_0, int VAR_1)
{
 if (VAR_1 == 0)
  if (!FUNC_0(&VAR_0->shared_power_users))
   FUNC_2(VAR_0->global_pwr_gpiod, 0);
 if (VAR_1 == 1)
  if (FUNC_1(&VAR_0->shared_power_users) == 1)
   FUNC_2(VAR_0->global_pwr_gpiod, 1);
}
