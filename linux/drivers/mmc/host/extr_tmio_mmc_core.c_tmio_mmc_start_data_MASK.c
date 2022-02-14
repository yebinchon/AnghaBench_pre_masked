
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmio_mmc_host {int dma_on; TYPE_2__* mmc; struct mmc_data* data; struct tmio_mmc_data* pdata; } ;
struct tmio_mmc_data {int flags; } ;
struct mmc_data {int blksz; int blocks; } ;
struct TYPE_3__ {scalar_t__ bus_width; } ;
struct TYPE_4__ {scalar_t__ max_blk_count; TYPE_1__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_4 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_5 (struct tmio_mmc_host*,struct mmc_data*) ;
 int FUNC_6 (struct tmio_mmc_host*,struct mmc_data*) ;

__attribute__((used)) static int FUNC_7(struct tmio_mmc_host *VAR_7,
          struct mmc_data *VAR_8)
{
 struct tmio_mmc_data *VAR_9 = VAR_7->pdata;

 FUNC_1("setup data transfer: blocksize %08x  nr_blocks %d\n",
   VAR_8->blksz, VAR_8->blocks);


 if (VAR_7->mmc->ios.bus_width == VAR_3 ||
     VAR_7->mmc->ios.bus_width == VAR_4) {
  int VAR_10 = VAR_9->flags & VAR_6;

  if (VAR_8->blksz < 2 || (VAR_8->blksz < 4 && !VAR_10)) {
   FUNC_2("%s: %d byte block unsupported in 4/8 bit mode\n",
          FUNC_0(VAR_7->mmc), VAR_8->blksz);
   return -VAR_2;
  }
 }

 FUNC_5(VAR_7, VAR_8);
 VAR_7->data = VAR_8;
 VAR_7->dma_on = 0;


 FUNC_3(VAR_7, VAR_0, VAR_8->blksz);
 if (VAR_7->mmc->max_blk_count >= VAR_5)
  FUNC_4(VAR_7, VAR_1, VAR_8->blocks);
 else
  FUNC_3(VAR_7, VAR_1, VAR_8->blocks);

 FUNC_6(VAR_7, VAR_8);

 return 0;
}
