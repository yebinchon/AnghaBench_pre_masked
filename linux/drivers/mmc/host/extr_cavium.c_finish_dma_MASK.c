
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int sg_len; } ;
struct cvm_mmc_host {scalar_t__ use_sg; } ;


 int FUNC_0 (struct cvm_mmc_host*,struct mmc_data*) ;
 int FUNC_1 (struct cvm_mmc_host*,struct mmc_data*) ;

__attribute__((used)) static int FUNC_2(struct cvm_mmc_host *VAR_0, struct mmc_data *VAR_1)
{
 if (VAR_0->use_sg && VAR_1->sg_len > 1)
  return FUNC_0(VAR_0, VAR_1);
 else
  return FUNC_1(VAR_0, VAR_1);
}
