
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cvm_mmc_host {scalar_t__ base; int has_ciu3; } ;


 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 scalar_t__ FUNC_1 (struct cvm_mmc_host*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cvm_mmc_host *VAR_0, u64 VAR_1)
{
 FUNC_2(VAR_1, VAR_0->base + FUNC_0(VAR_0));
 if (!VAR_0->has_ciu3)
  FUNC_2(VAR_1, VAR_0->base + FUNC_1(VAR_0));
}
