
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvm_mmc_host {int mmc_serializer; int has_ciu3; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cvm_mmc_host *VAR_1)
{
 if (!VAR_1->has_ciu3)
  FUNC_0(&VAR_0);
 else
  FUNC_0(&VAR_1->mmc_serializer);
}
