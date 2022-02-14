
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshsd_host {scalar_t__ ioaddr; TYPE_1__* pdev; struct mmc_data* data; } ;
struct mmc_data {scalar_t__ error; int bytes_xfered; int blocks; int blksz; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct toshsd_host*) ;

__attribute__((used)) static void FUNC_4(struct toshsd_host *VAR_1)
{
 struct mmc_data *VAR_2 = VAR_1->data;

 VAR_1->data = ((void*)0);

 if (!VAR_2) {
  FUNC_1(&VAR_1->pdev->dev, "Spurious data end IRQ\n");
  return;
 }

 if (VAR_2->error == 0)
  VAR_2->bytes_xfered = VAR_2->blocks * VAR_2->blksz;
 else
  VAR_2->bytes_xfered = 0;

 FUNC_0(&VAR_1->pdev->dev, "Completed data request xfr=%d\n",
  VAR_2->bytes_xfered);

 FUNC_2(0, VAR_1->ioaddr + VAR_0);

 FUNC_3(VAR_1);
}
