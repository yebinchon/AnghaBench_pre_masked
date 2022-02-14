
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int (* hw_reset ) (struct tmio_mmc_host*) ;int (* reset ) (struct tmio_mmc_host*) ;} ;
struct mmc_host {int dummy; } ;


 struct tmio_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*) ;
 int FUNC_2 (struct tmio_mmc_host*) ;
 int FUNC_3 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0)
{
 struct tmio_mmc_host *VAR_1 = FUNC_0(VAR_0);

 VAR_1->reset(VAR_1);

 FUNC_3(VAR_1);

 if (VAR_1->hw_reset)
  VAR_1->hw_reset(VAR_1);
}
