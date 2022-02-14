
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {scalar_t__ base; TYPE_1__* ops; int mmc; int use_dma; struct mmc_data* data; } ;
struct mmc_data {int flags; int blocks; int blksz; int sg_len; } ;
struct TYPE_2__ {int (* dma_start ) (struct mmci_host*,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmci_host*,struct mmc_data*,int) ;
 int FUNC_3 (struct mmci_host*,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mmci_host*,unsigned int*) ;
 int FUNC_6 (int,scalar_t__) ;

int FUNC_7(struct mmci_host *VAR_3, unsigned int VAR_4)
{
 struct mmc_data *VAR_5 = VAR_3->data;
 int VAR_6;

 if (!VAR_3->use_dma)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_5, 0);
 if (VAR_6)
  return VAR_6;

 if (!VAR_3->ops || !VAR_3->ops->dma_start)
  return -VAR_0;


 FUNC_0(FUNC_1(VAR_3->mmc),
   "Submit MMCI DMA job, sglen %d blksz %04x blks %04x flags %08x\n",
   VAR_5->sg_len, VAR_5->blksz, VAR_5->blocks, VAR_5->flags);

 VAR_3->ops->dma_start(VAR_3, &VAR_4);


 FUNC_3(VAR_3, VAR_4);






 FUNC_6(FUNC_4(VAR_3->base + VAR_2) | VAR_1,
        VAR_3->base + VAR_2);
 return 0;
}
