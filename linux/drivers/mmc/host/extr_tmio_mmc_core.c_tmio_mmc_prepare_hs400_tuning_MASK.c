
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int (* prepare_hs400_tuning ) (struct tmio_mmc_host*) ;} ;
struct mmc_ios {int dummy; } ;
struct mmc_host {int dummy; } ;


 struct tmio_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_0,
      struct mmc_ios *VAR_1)
{
 struct tmio_mmc_host *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->prepare_hs400_tuning)
  VAR_2->prepare_hs400_tuning(VAR_2);

 return 0;
}
