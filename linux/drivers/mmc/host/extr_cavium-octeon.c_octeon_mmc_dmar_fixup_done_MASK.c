
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvm_mmc_host {scalar_t__ n_minus_one; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct cvm_mmc_host *VAR_0)
{
 if (!VAR_0->n_minus_one)
  return;
 FUNC_0(VAR_0->n_minus_one, 512);
 VAR_0->n_minus_one = 0;
}
