
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int stop; } ;
struct atmel_mci {int stop_cmdr; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_mci*,int ,int ) ;
 int FUNC_1 (struct atmel_mci*,int ,int ) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct atmel_mci *VAR_2, struct mmc_data *VAR_3)
{
 FUNC_2(&VAR_2->pdev->dev, "send stop command\n");
 FUNC_0(VAR_2, VAR_3->stop, VAR_2->stop_cmdr);
 FUNC_1(VAR_2, VAR_1, VAR_0);
}
