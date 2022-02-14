
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int bytes_xfered; int blksz; int blocks; scalar_t__ error; } ;
struct device {int dummy; } ;
struct bcm2835_host {int hcfg; int data_complete; scalar_t__ ioaddr; scalar_t__ cmd; struct mmc_data* data; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bcm2835_host*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct bcm2835_host *VAR_4)
{
 struct device *VAR_5 = &VAR_4->pdev->dev;
 struct mmc_data *VAR_6;

 VAR_6 = VAR_4->data;

 VAR_4->hcfg &= ~(VAR_2 | VAR_1);
 FUNC_3(VAR_4->hcfg, VAR_4->ioaddr + VAR_0);

 VAR_6->bytes_xfered = VAR_6->error ? 0 : (VAR_6->blksz * VAR_6->blocks);

 VAR_4->data_complete = 1;

 if (VAR_4->cmd) {




  FUNC_1(VAR_5, "Finished early - HSTS %08x\n",
   FUNC_2(VAR_4->ioaddr + VAR_3));
 } else {
  FUNC_0(VAR_4);
 }
}
