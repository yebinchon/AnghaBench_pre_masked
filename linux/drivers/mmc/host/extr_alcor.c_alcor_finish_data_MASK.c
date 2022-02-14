
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_data {int bytes_xfered; int blksz; int blocks; scalar_t__ stop; scalar_t__ error; } ;
struct alcor_sdmmc_host {TYPE_1__* mrq; scalar_t__ dma_on; struct mmc_data* data; } ;
struct TYPE_2__ {int sbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alcor_sdmmc_host*,int) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int) ;
 int FUNC_2 (struct alcor_sdmmc_host*,scalar_t__,int) ;
 int FUNC_3 (struct alcor_sdmmc_host*) ;

__attribute__((used)) static void FUNC_4(struct alcor_sdmmc_host *VAR_2)
{
 struct mmc_data *VAR_3;

 VAR_3 = VAR_2->data;
 VAR_2->data = ((void*)0);
 VAR_2->dma_on = 0;
 if (VAR_3->error)
  VAR_3->bytes_xfered = 0;
 else
  VAR_3->bytes_xfered = VAR_3->blksz * VAR_3->blocks;






 if (VAR_3->stop &&
     (VAR_3->error ||
      !VAR_2->mrq->sbc)) {





  if (VAR_3->error)
   FUNC_1(VAR_2, VAR_0 | VAR_1);

  FUNC_3(VAR_2);
  FUNC_2(VAR_2, VAR_3->stop, 0);
  return;
 }

 FUNC_0(VAR_2, 1);
}
