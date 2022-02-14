
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_2__* pdev; int (* set_pwr ) (TYPE_2__*,int) ;struct mmc_host* mmc; } ;
struct TYPE_3__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct mmc_host*,int ,unsigned short) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct tmio_mmc_host *VAR_0, unsigned short VAR_1)
{
 struct mmc_host *VAR_2 = VAR_0->mmc;
 int VAR_3 = 0;



 if (VAR_0->set_pwr)
  VAR_0->set_pwr(VAR_0->pdev, 1);

 if (!FUNC_0(VAR_2->supply.vmmc)) {
  VAR_3 = FUNC_2(VAR_2, VAR_2->supply.vmmc, VAR_1);






  FUNC_5(200, 300);
 }




 if (!FUNC_0(VAR_2->supply.vqmmc) && !VAR_3) {
  VAR_3 = FUNC_3(VAR_2->supply.vqmmc);
  FUNC_5(200, 300);
 }

 if (VAR_3 < 0)
  FUNC_1(&VAR_0->pdev->dev, "Regulators failed to power up: %d\n",
   VAR_3);
}
