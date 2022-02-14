
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int (* hs400_downgrade ) (struct tmio_mmc_host*) ;} ;
struct mmc_host {int dummy; } ;


 struct tmio_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_0)
{
 struct tmio_mmc_host *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->hs400_downgrade)
  VAR_1->hs400_downgrade(VAR_1);
}
