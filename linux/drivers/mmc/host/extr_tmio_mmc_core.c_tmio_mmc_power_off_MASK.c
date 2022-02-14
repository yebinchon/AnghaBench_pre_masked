
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int pdev; int (* set_pwr ) (int ,int ) ;struct mmc_host* mmc; } ;
struct TYPE_2__ {int vmmc; int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tmio_mmc_host *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->mmc;

 if (!FUNC_0(VAR_1->supply.vqmmc))
  FUNC_2(VAR_1->supply.vqmmc);

 if (!FUNC_0(VAR_1->supply.vmmc))
  FUNC_1(VAR_1, VAR_1->supply.vmmc, 0);

 if (VAR_0->set_pwr)
  VAR_0->set_pwr(VAR_0->pdev, 0);
}
